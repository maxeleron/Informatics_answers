// Задача J. Проверка на парал. р. (Н).cpp: определяет точку входа для консольного приложения.
//

	
#include <iostream> 
#include <vector> 
using namespace std; 


int main() 
{ 
	int V, m, i, j; 
	cin >> V >> m; 
	bool check = false; 
	vector<vector<int> >graph; 
	graph.resize(V); 
	
	for (int g=0; g<V; g++)
		graph[g].resize(V);

	for (int g = 0; g < m; g++) 
	{ 
		cin >> i >> j; 
		if (graph[i - 1][j - 1] >= 1) 
		{ 
			check = true; 
			cout <<"YES"<<endl; 
			g = m; 
		} 
		graph[i - 1][j - 1] += 1; 
		graph[j - 1][i - 1] += 1; 
	} 
	if (!check) 
		cout <<"NO"<<endl; 
	system("pause"); 
	return 0; 
}