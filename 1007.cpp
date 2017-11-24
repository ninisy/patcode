#include<iostream>
using namespace std;

bool sushu(int n){
	for (int i = 1; i*i <= n; i++){
		if (n%i == 0 && i != 1)
			return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int num = 0;

	for (int i = 5; i <= n; i++ ){
		if (sushu(i-2)&&sushu(i)){
			num++;
		}
	}
	cout << num;
	system("pause");
	return 0;
}
