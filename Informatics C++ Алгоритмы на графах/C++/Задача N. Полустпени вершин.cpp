// Задача N. Полустпени вершин.cpp: определяет точку входа для консольного приложения.
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
		int counterIn=0;
		for(int j=0; j<V; j++){
			counterIn += graph[j][i];
		}
		cout<< counterIn << endl;
		int counterOut=0;
		for(int j=0; j<V; j++){
			counterOut += graph[i][j];
		}
		cout<< counterOut << endl;
	}

	system("pause");
	return 0;
}