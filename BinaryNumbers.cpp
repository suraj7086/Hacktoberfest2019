#include <iostream>
using namespace std;
int k=0;
int main(){
int n;
  cin>>n;
  if (n>0){
    while (n>1){
  k=k+n%2;
    n=n/2;}
    if(k==0){
      cout<<"YES";
    }
    else {cout<<"NO";
         }
  }
else 
  cout<<"NO";
}