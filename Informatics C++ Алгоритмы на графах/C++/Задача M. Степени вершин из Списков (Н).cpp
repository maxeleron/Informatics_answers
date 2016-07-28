// Задача M. Степени вершин из Списков (Н).cpp: определяет точку входа для консольного приложения.
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
	vector<int> Degrees;
	Degrees.resize(V);
	graph.resize(V);
	for(int i=0; i<V; i++){
		Degrees[i]=0;
	}

	for(int k=0; k<n; k++){
		int i;
		int j;
		cin >> i; 
		cin	>> j;
		Degrees[i-1]++;
		Degrees[j-1]++;
	}

	for(int i=0; i<V; i++){
		cout<<Degrees[i]<<endl;
	}
	system("pause");
	return 0;
}