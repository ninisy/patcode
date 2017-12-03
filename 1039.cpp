#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	string a,b;
	cin>>a;
	cin>>b;
	int len1 = a.length();
	int len2 = b.length();
	int c1[256]={0};
	int c2[256]={0};
	for(int i=0;i<len1;i++){
		c1[a[i]]++;
	}
	for(int i=0;i<len2;i++){
		c2[b[i]]++;
	}
	bool flag=true;
	int que = 0;
	for(int i=0;i<256;i++){
		if(c1[i]<c2[i]){
			flag = false;
			que = que+(c2[i]-c1[i]);
		}
	}
	if(flag){
		cout<<"Yes "<<len1-len2;
	}else{
		cout<<"No "<<que;
	}

}
