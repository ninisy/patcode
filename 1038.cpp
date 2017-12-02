#include<iostream>
using namespace std;

int main(){
	int n1;
	cin >> n1;
	int *score1=new int[n1];
	int count[101]={0};
	for(int i=0;i<n1;i++){
		cin>>score1[i];
		count[score1[i]]++;
	}
	int n2;
	cin>>n2;
	int *score2 = new int[n2];
	
	for(int i=0;i<n2;i++){
		cin>>score2[i];
		if(i!=0)
			cout<<" ";
		cout<<count[score2[i]];
	}
	

	system("pause");
	return 0;

}
