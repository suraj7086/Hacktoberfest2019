
#include <bits/stdc++.h>
using namespace std;

void insert(unordered_map<int, vector<pair<int,int> >*> &map, int s, int d, int w) {
 
    map[s]->push_back(make_pair(d, w));
}

void createMap(unordered_map<int, vector<pair<int,int> >*> &map) {

    int V = 5, E = 10;

    for(int i=0; i<V; i++) {
        map[i] = new vector<pair<int,int> >;
    }

    insert(map, 0, 4, 5);
    insert(map, 0, 1, 10);
    insert(map, 1, 2, 1);
    insert(map, 1, 4, 2);
    insert(map, 4, 1, 3);
    insert(map, 4, 2, 9);
    insert(map, 2, 3, 4);
    insert(map, 3, 2, 6);
    insert(map, 3, 0, 7);
    insert(map, 4, 3, 2);

}

int findMin(vector<int> &dist, vector<bool> &visited) {
    int value = INT_MAX, minIndex = -1;
    for(int i=0; i<dist.size(); i++) {
        if(!visited[i] && dist[i] < value) {
            value = dist[i];
            minIndex = i;
        }
    }
    return minIndex;
}

vector<int> dijkstra(int src, unordered_map<int, vector<pair<int,int> >*> &map) {

    int V = map.size();
    vector<bool> visited(V, false);
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    for(int i=1; i<V; i++) {

        // FIND MIN VALUE NODE INDEX
        int minIndex = findMin(dist, visited);

        // MARK NODE AS VISITED
        visited[minIndex] = 1;

        // RELAX ALL NEIGHBOURING NODES
        for(int i=0; i<map[minIndex]->size(); i++) {
            int neighbourIndex = map[minIndex]->at(i).first, edgeWeight = map[minIndex]->at(i).second;
            if(!visited[neighbourIndex] && (dist[neighbourIndex] > (dist[minIndex]+edgeWeight))) {
                dist[neighbourIndex] = (dist[minIndex]+edgeWeight);
            }
        }

    }
    return dist;
}

int main() {

    unordered_map<int, vector<pair<int,int> >*> map;
    createMap(map);

    // PRINTING THE MAP OF GRAPH

    // for(auto i: map) {
    //     cout << i.first << " -> ";
    //     for(int j=0; j<i.second->size(); j++) {
    //         cout << "(" << i.second->at(j).first << "," << i.second->at(j).second << ") ";
    //     }
    //     cout << endl;
    // }

    vector<int> dist = dijkstra(0, map);

    for(int i=0; i<dist.size(); i++) {
        cout << i << " " << dist[i] << endl;
    }

}