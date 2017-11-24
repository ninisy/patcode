#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;

	string *name = new string[n];
	string *id = new string[n];
	int *score = new int[n];

	int tmp_max = 0, tmp_min = 101;
	int i_max, i_min ;
	
	for (int i = 0; i < n; i++)
	{
		cin >> name[i] >> id[i] >> score[i];
	
		if (tmp_max < score[i]){
			tmp_max = score[i];
			i_max = i;
		}
		if (tmp_min > score[i]){
			tmp_min = score[i];
			i_min = i;
		}
	}

	cout << name[i_max] << " " << id[i_max] << endl;
	cout << name[i_min] << " " << id[i_min] << endl;

	system("pause");
	return 0;
}
