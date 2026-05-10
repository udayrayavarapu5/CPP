#include<iostream>
#include<vector>
using namespace std;
class Graph{
	int v;
	vector<vector<int>>adjmatrix;
	public:
		Graph(int vertices){
		 v=vertices;
			adjmatrix.resize(v,vector<int>(v,0));
		}
		void addEdge(int u,int v){
			adjmatrix[u][v]=1;
			adjmatrix[v][u]=1;
		}
		void displaymatrix(){
			for(int i=0;i<v;i++){
				for(int j=0;j<v;j++){
					cout<<adjmatrix[i][j]<<" ";
				}
					cout<<endl;
			}
		
		}
};
int main()
{
	Graph g(8);
	g.addEdge(1,3);
	g.addEdge(4,5);
	g.addEdge(6,7);
	g.displaymatrix();
	return 0;
}
