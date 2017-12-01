#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){return a>b;}

int main(){
	int n;
	cin>>n;
	int *data=new int [n]();
	int num,score,k=0;
	for(int i=0;i<n;i++){
		
		cin>>num>>score;
		data[num]+=score;
		if(k<num)
			k=num;
	}
	int maxi=0,max=0;
	for(int i=0;i<k+1;i++){
		if(max<data[i]){
			maxi=i;	
			max = data[i];
		}
	}
	cout<<maxi<<" "<<max<<endl;

	system("pause");
	return 0;
	
}
