// Задача G. Матрица к Списку (О).cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
#include <vector>

using namespace std;

int main()
{
	int V;
	cin>> V;
	vector<vector<int> > graph;
	graph.resize(V);
	for(int i=0; i<V; i++){
		graph[i].resize(V);
		for(int j=0; j<V; j++){
			cin >> graph[i][j];
		}
	}

	for(int i=0; i<V; i++){
		//cout  << " ";
		for(int j=0; j<V; j++){
			if(graph[i][j]==1) cout<< i+1 <<" "<< j+1 << endl;
		}
	}
	system("pause");
	return 0;
}