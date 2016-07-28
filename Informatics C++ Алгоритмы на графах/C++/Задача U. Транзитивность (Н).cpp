// Задача U. Транзитивность (Н).cpp: определяет точку входа для консольного приложения.
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
		graph[j-1][i-1]=1;
	}

	/*for(int i=0; i<V; i++){
		for(int j=0; j<V; j++)
			cout<<graph[i][j]<<" ";

		cout<<endl;
	}*/

	bool check = true;

	for(int i=0; i<V; i++){
		for(int j=0; j<V; j++)
			if(graph[i][j]==1){
				for(int g=0; g<V; g++){
					if((graph[j][g]==1) && (graph[i][g]==0) && g!=i){
						check = false;
						g= V;
						j= V;
						i= V;
					}
				}
			}
	}

	if (check) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	system("pause");
	return 0;
}