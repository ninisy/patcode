#include <iostream>
#include <algorithm>
using namespace std;

int compare(int y, int x){ 
	return y > x; 
}

int main(){
	int k;
	cin >> k;
	int *set = new int [k];
	for (int i = 0; i < k; i++){
		cin >> set[i];
	}
	
	for (int i = 0; i < k; i++){
		int tmp = set[i];
		while (tmp != 1 && tmp != 999)
		{
			if (tmp % 2 == 0)
				tmp = tmp / 2;
			else
				tmp = (3 * tmp + 1) / 2;
			for (int j = 0; j < k; j++){
				if (tmp == set[j] && j != i)
					set[j] = 999;
			}
		}
	}
	sort(set, set + k, compare);
	for (int i = 0; i < k-1; i++){
		if (set[i] != 999)
			cout << set[i] <<" ";
	}
	cout << set[k - 1];
	system("pause");
	return 0;
}
