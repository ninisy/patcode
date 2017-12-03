#include<iostream>
#include<string>
using namespace std;

struct inf{
	string num1;
	int num3;
};

int main(){
	int n;
	cin>>n;
	inf *a = new inf[1001];
	string t_s;
	int t_num2,t_num3;;
	for(int i= 0;i<n;i++){
		cin>>t_s>>t_num2>>t_num3;
		a[t_num2].num1 = t_s;
		a[t_num2].num3 = t_num3;
	}
	int n1;
	cin>>n1;
	int tmp;
	for(int i=0;i<n1;i++){
		cin>>tmp;
		cout << a[tmp].num1<<" "<<a[tmp].num3<<endl;
	}

	system("pause");
	return 0;
}
