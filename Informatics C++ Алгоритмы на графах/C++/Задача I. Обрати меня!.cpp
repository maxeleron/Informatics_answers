// Задача I. Обрати меня!.cpp: определяет точку входа для консольного приложения.
//

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int main()
{
	int points_counter;
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	fin >> points_counter;
	vector<int> *points_list_out = new vector<int>[points_counter];
	string points_input;
	getline(fin, points_input);
	for(int i = 0; i < points_counter; i++)
	{
		getline(fin, points_input);
		for(int j = 0, point = 0; j < points_input.length(); j++)
		{
			while(points_input[j] < '0' || points_input[j] > '9')
				j++;
			point *= 10;
			point += points_input[j] - '0';
			if(points_input[j + 1] < '0' || points_input[j + 1] > '9')
			{
				points_list_out[point - 1].push_back(i + 1);
				point = 0;
			}
		}
		sort(points_list_out[i].begin(), points_list_out[i].end());
	}
	fout << points_counter << '\n';
	for(int i = 0; i < points_counter; i++)
	{
		for(int j = 0; j < points_list_out[i].size(); j++)
		{
			fout << points_list_out[i][j] << ' ';
		}
		fout << '\n';
	}
	fin.close();
	fout.close();
	return 0;
}
