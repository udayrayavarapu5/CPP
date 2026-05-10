#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int> adj[],int x,int y){
	adj[x].push_back(y);
	adj[y].push_back(x);
}
void display(vector<int> adj[],int v){
	for(int i=0;i<v;i++){
		cout<<"Vertex:"<<i;
		for(int neighbour:adj[i]){
			cout<<"->"<<neighbour;
		}
	}
}
int main(){
	int v=6;
	vector<int> adj[v] ;
	addEdge(adj,1,0);
	addEdge(adj,3,4);
	addEdge(adj,1,5);
	addEdge(adj,1,3);
	display(adj,v);
	return 0;
}
