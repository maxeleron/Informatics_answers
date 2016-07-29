// Задача V. Транзитивность (О).cpp: определяет точку входа для консольного приложения.
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
			
	/*for(int i=0; i<V; i++){
		for(int j=0; j<V; j++)
			cout<<graph[i][j]<<" ";

		cout<<endl;
	}*/

	bool check = true;

	for(int i=0; i<V; i++){
		for(int j=0; j<V; j++)
			if(graph[i][j]==1 && i!=j){
				for(int g=0; g<V; g++){
					if(graph[j][g]==1 && g!=j && g!=i){
						if(graph[i][g] != 1){
							check = false;
							g= V;
							j= V;
							i= V;
						}
					}
				}
			}	
	}

	if (check) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	system("pause");
	return 0;
}