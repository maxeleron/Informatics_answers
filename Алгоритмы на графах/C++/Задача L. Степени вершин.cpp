// Задача L. Степени вершин.cpp: определяет точку входа для консольного приложения.
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
		int counter=0;
		for(int j=0; j<V; j++){
			counter += graph[i][j];
		}
		cout<< counter << endl;
	}

	system("pause");
	return 0;
}