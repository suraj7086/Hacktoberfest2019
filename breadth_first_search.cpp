#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

struct Node{

        int data;
        Node * next;

};


class Graph{

    public:

        int no_of_nodes;
        Node **adjacent;

        Graph(int nodes) {

            adjacent = (Node **)malloc(nodes*sizeof(Node*));
            for (int i = 0; i < nodes; i++)
            {
                adjacent[i] = NULL;
            }
            
            no_of_nodes = nodes;

        }

        void createEdge(int node1, int node2) {

            if(adjacent[node1] == NULL){
                Node *edge=(Node *)malloc(sizeof(Node));
                edge->data = node2;
                edge->next = NULL;

                adjacent[node1] = edge;
            }else{

                Node *edge=(Node *)malloc(sizeof(Node));
                edge->data = node2;
                edge->next = NULL;

                Node* iterator = adjacent[node1];
                while(1){
                    Node *temp = iterator->next;

                    if(temp == NULL)
                        break;
                    iterator = iterator->next;
                }

                iterator->next = edge;

            } 

            if(adjacent[node2] == NULL){
                Node *edge=(Node *)malloc(sizeof(Node));
                edge->data = node1;
                edge->next = NULL;

                adjacent[node2] = edge;
            }else{

                Node *edge=(Node *)malloc(sizeof(Node));
                edge->data = node1;
                edge->next = NULL;

                Node* iterator = adjacent[node2];
                while(1){
                    Node *temp = iterator->next;

                    if(temp == NULL)
                        break;
                    iterator = iterator->next;
                }

                iterator->next = edge;

            } 


        }
        
};

void bfs(Graph g, int starting_point, int nodes) {

    int visited[nodes]={}, distance[nodes]={__INT_MAX__}, parent[nodes]={-1};
    queue <int> store;


    visited[starting_point] = 1;
    distance[starting_point] = 0;     
    store.push(starting_point);

    while(!store.empty()){

        int present_point = store.front();
        store.pop();
        Node* head = g.adjacent[present_point];
        while(head!=NULL){

            int neighbour = head->data;            
            store.push(neighbour);
            visited[neighbour] = 1;
            distance[neighbour] = distance[present_point]+1;

            head=head->next;
        }

    }


    cout << "distance: ";
    for (int i = 0; i < nodes; i++)
    {
        cout << distance[i] << " ";
    }
    cout << endl;
    

}


int main() {

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;


    Graph gr(n);

    gr.createEdge(0, 1);
    gr.createEdge(0, 2);
    gr.createEdge(3, 1);
    gr.createEdge(5, 1);
    gr.createEdge(4, 2);
    gr.createEdge(2, 5);
    // gr.createEdge(0, 1);
    // gr.createEdge(0, 1);

    cout << "graph: " << endl;

    for (int i = 0; i < n; i++)
    {
        Node *iterator = gr.adjacent[i];
        cout << "connected to " << i << ": ";
        while(iterator != NULL){

            cout <<iterator->data << " ";
            iterator = iterator->next;

        }
        cout <<  endl;
    }

    bfs(gr, 0, n);    

}
