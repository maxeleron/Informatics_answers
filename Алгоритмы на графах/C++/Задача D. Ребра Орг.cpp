// Задача D. Ребра Орг.cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
#include <vector>

using namespace std;

int main()
{
	int V;
	cin>> V;
	vector<vector<int> > graph;
	int counter = 0;
	graph.resize(V);
	for(int i=0; i<V; i++){
		graph[i].resize(V);
		for(int j=0; j<V; j++){
			cin >> graph[i][j];
			counter += graph[i][j];
		}
	}
			
	cout << counter;

	system("pause");
	return 0;
}