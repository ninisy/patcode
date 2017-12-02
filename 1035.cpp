#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >>n;
	int *a=new int[n];
	int *b=new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int i,j;
	for(i=0;b[i]<=b[i+1]&&i<n;i++);
	for(j=i+1;a[j]==b[j]&&j<n;j++);
	if(j==n){
		cout<<"Insertion Sort"<<endl;
		sort(a,a+i+2);
	}else{
		cout<<"Merge Sort"<<endl;
		int k=1;
		bool flag = true;
		while(flag){
			flag=false;
			k=k*2;
			for(int l=0;l<n;l++){
				if(a[l]!=b[l])
					flag = true;
			}
			for(int l=0;l<n/k;l++){
				sort(a+l*k,a+(l+1)*k);
			}
			sort(a+(n/k*k),a+n);
		}


	}
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<endl;
	
	system("pause");
	return 0;
}
