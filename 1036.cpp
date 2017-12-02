#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int round(float n){
	if(n-n/1>=0.5)
		return n/1+1;
	else
		return n/1;
}

int main(){
	int n;
	char c;
	cin>>n>>c;
	int row = round(n/2.0);
	for(int i=0;i<row;i++){
		for(int j=0;j<n;j++){

			if((j==0||j==n-1||i==0||i==row-1))
				cout<<c;
			else
				cout<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return  0;
}
