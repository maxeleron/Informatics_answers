// ������ B. �����.cpp: ���������� ����� ����� ��� ����������� ����������.
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
			cin>>graph[i][j];
		}
	}

	bool check = true;

	for(int i=0; i<V && check; i++)
		if(graph[i][i]==1) check=false;
			

	if(check) 
		cout<<"NO";

	else cout<<"YES";

	system("pause");
	return 0;
}

