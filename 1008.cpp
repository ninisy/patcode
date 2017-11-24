#include<iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	while (m != 0){
		int tmp = a[n-1];
		for (int j = n-2; j >=0; j--){
			a[j + 1] = a[j];
		}
		a[0] = tmp;
		m = m - 1;
	}
	for (int i = 0; i < n-1; i++)
		cout << a[i]<< " ";
	cout << a[n - 1];
	system("pause");
	return 0;
}
