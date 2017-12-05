#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int j1,j2,y1,y2;
	int j=0,y=0;
	for(int i=0;i<n;i++){
		cin>>j1>>j2>>y1>>y2;
		if(j2==(j1+y1)&&y2!=(j1+y1))
			j++;
		else if(y2==(j1+y1)&&j2!=(j1+y1))
			y++;
	}
	cout<<y<<" "<<j<<endl;
	system("pause");
	return 0;

}
