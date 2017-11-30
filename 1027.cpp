#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){
	int a;
	string b;
	cin >> a >> b;

	int x=0;
	//int i = 0;
	//while ((i*i) < (16 + 8 * (a - 1))){
	//	i++;
	//}

	for (int j = 0; j < a; j++){
		if ((2*j*(j + 2) + 1)>a){
			x = j - 1;
			break;
		}
	}

	//x = (-4 + i) / 4;
	int shen = a - (2 * (x*x) + 4 * x+1);
	int *s = new int[2 * x + 1];
	for (int j = 0; j <= x; j++)
	{
		s[j] = 2 * (x - j) + 1;
		s[2 * x - j] = s[j];
	}

	for (int j = 0; j < 2 * x + 1; j++){
		if (s[j] < 2 * x + 1){
			for (int k = 0; k < (2 * x + 1 - s[j]) / 2;k++)
				cout << " ";
		}
		while (s[j] > 0){
			cout << b;
			s[j]--;
		}
		cout << endl;
	}
	cout << shen;

	system("pause");
	return 0;
}
