#include<iostream>
using namespace std;

int main(){
	int a[10];
	for (int i = 0; i < 10; i++){
		cin >> a[i];
	}
	
	for(int i = 1; i < 10; i++){
		if (a[i] != 0)
		{
			cout << i;
			
			a[i] = a[i] - 1;
			break;
		}
	}

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < a[i]; j++)
			cout << i;

	}

	system("pause");
	return 0;
}
