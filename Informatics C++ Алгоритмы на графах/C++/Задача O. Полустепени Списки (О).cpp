// Задача O. Полустепени Списки (О).cpp: определяет точку входа для консольного приложения.
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
	vector<int> DegreesIn;
	vector<int> DegreesOut;
	DegreesIn.resize(V);
	DegreesOut.resize(V);
	graph.resize(V);
	for(int i=0; i<V; i++){
		DegreesIn[i]=0;
		DegreesOut[i]=0;
	}

	for(int k=0; k<n; k++){
		int i;
		int j;
		cin >> i; 
		cin	>> j;
		DegreesIn[j-1]++;
		DegreesOut[i-1]++;
	}

	for(int i=0; i<V; i++){
		cout<<DegreesIn[i]<<endl;
		cout<<DegreesOut[i]<<endl;
	}
	system("pause");
	return 0;
}