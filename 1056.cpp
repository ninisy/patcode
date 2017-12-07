#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i = 0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum = sum+a[i]*10+a[j];
			sum = sum+a[j]*10+a[i];
		}
	}
	cout<<sum<<endl;
	system("pause");
	return 0;
}
