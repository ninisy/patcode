#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
struct inf{
	string name;
	int h;
};
bool cmp(inf a, inf b){
	if(a.h>b.h)
		return a.h>b.h;
	if(a.h==b.h&&a.name!=b.name)
		return a.name<b.name;
	return false;
}

int main(){
	int n,k;
	cin>>n>>k;

	inf *a = new inf [n];
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].h;
	}
	sort(a,a+n,cmp);
	int max=0;
	for(int i=0;i<k;i++){
		int m=0;
		if(i==0)
			m = n/k+n%k;
		else
			m=n/k;
		if(m==1){
			cout<<a[max].name;
		}else{
			int t=2*(m/2)-1;
			while(t>0)
			{
				cout<<a[max+t].name<<" ";
				t-=2; 
			}
			if(max==max+2*(m-1-m/2))
				cout<<a[max].name;
			else
				cout<<a[max].name<<" ";
			t=2;
			while(t<=2*(m-1-m/2))
			{
				if(t!=2*(m-1-m/2))
					cout<<a[max+t].name<<" ";
				else
					cout<<a[max+t].name;
				t+=2;
			}
		}
		cout<<endl;
		max = max+m;
	}
	system("pause");
	return 0;
}

