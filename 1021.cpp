#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin >> s;
	//int *a = new int[s.length()];
//	memset(a, 0, s.length()*sizeof(a));
	int a[10] = { 0 };
	for (int i = 0; i < s.length(); i++){
		a[s[i] - '0']++;
	}
	for (int i = 0; i < 10; i++){
		if (a[i] != 0){
			cout << i << ":" << a[i] << endl;
		}
	}

	system("pause");
	return 0;
}
