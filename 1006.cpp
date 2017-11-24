#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[3] = { 0 };
	int i = 0;
	while (n != 0){
		a[i++] = n % 10;
		n = n / 10;
	}
	for (i = 0; i < a[2]; i++){
		cout << 'B';
	}
	for (i = 0; i < a[1]; i++){
		cout << 'S';
	}
	for (i = 1; i <=a[0]; i++){
		cout << i;
	}

	system("pause");
	return 0;
}
