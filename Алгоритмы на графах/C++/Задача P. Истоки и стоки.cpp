// Задача P. Истоки и стоки.cpp: определяет точку входа для консольного приложения.
//


#include <iostream> 
#include <vector>

using namespace std;

int main()
{
	int V;
	cin>> V;
	vector<vector<int> > graph;
	vector<int> In;
	vector<int> Out;

	int inSize = 0;
	int outSize = 0;

	graph.resize(V);
	for(int i=0; i<V; i++){
		graph[i].resize(V);
		for(int j=0; j<V; j++){
			cin >> graph[i][j];
		}
	}

	for(int i=0; i<V; i++){
		//int counterIn=0;
		bool inCheck = true;
		for(int j=0; j<V; j++){
			if( graph[i][j] == 1){
				inCheck = false;
				j=V;
			}
		}
		if( inCheck ){
			inSize++;
			In.resize(inSize);
			In[inSize-1]=i+1;
		}
		
	}
	
	for(int i=0; i<V; i++){
		bool outCheck = true;
		for(int j=0; j<V; j++){
			if( graph[j][i] == 1){
				outCheck = false;
				j=V;
			}
		}
		if( outCheck ){
			outSize++;
			Out.resize(outSize);
			Out[outSize-1]=i+1;
		}
	}
	
	cout<<outSize<<endl;
	for(int i=0; i<outSize; i++){
		cout<<Out[i]<<endl;
	}

	cout<<inSize<<endl;
	for(int i=0; i<inSize; i++){
		cout<<In[i]<<endl;
	}

	system("pause");
	return 0;
}