#include<iostream>
#include<string>
#include<vector>
using namespace std;


bool func(string num);
int main(){
	int n;
	cin >> n;
	string num;
	bool flag = true;
	int k = 0;
	for (int i = 0; i < n; i++){
		cin >> num;
		if (!func(num))//不能用～
			flag = false;
	}
	if (flag == true)
		cout << "All passed";
	system("pause");
	return 0;
}
bool func(string num){
	int sum = 0, z = 0;
	int w[17] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
	string map = "10X98765432";
	for (int j = 0; j < 17; j++){
		if (num[j] >= '0'&&num[j] <= '9'){
			sum = sum + (num[j] - '0')*w[j];
		}
		else{
			cout << num<<endl;
			return false;
		}
	}
	z = sum % 11;
	if (map[z] != num[17])
	{
		cout << num<<endl;
		return false;
	}
	else
		return true;
	
}
