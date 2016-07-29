// Задача H. От Списка к Матрице (О).cpp: определяет точку входа для консольного приложения.
//

#include <iostream> 
#include <vector>

using namespace std;

int main()
{
	int V;
	cin>> V;
	int n;
	cin>> n;
	vector<vector<int> > graph;
	graph.resize(V);
	for(int i=0; i<V; i++){
		graph[i].resize(V);
		for(int j=0; j<V; j++){
			graph[i][j]=0;
		}
	}

	for(int k=0; k<n; k++){
		int i;
		int j;
		cin >> i; 
		cin	>> j;
		graph[i-1][j-1]=1;
	}

	for(int i=0; i<V; i++){
		for(int j=0; j<V; j++)
			cout<<graph[i][j]<<" ";

		cout<<endl;
	}
	system("pause");
	return 0;
}