#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	long int len = s.length(),cP=0,cA=0,cT=0,ce=0,cs=0,ct=0;
	int c[6]={0};
	for(long int i=0;i<len;i++){
		if(s[i]=='P')
			c[0]++;
		if(s[i]=='A')
			c[1]++;
		if(s[i]=='T')
			c[2]++;
		if(s[i]=='e')
			c[3]++;
		if(s[i]=='s')
			c[4]++;
		if(s[i]=='t')
			c[5]++;
	}
	int cc[6];
	for(int i=0;i<6;i++)
		cc[i]=c[i];
	sort(cc,cc+6);
	int n = cc[5];
	while(n!=0){
		if(c[0]!=0){
			cout<<"P";
			c[0]--;
		}
		if(c[1]!=0){
			cout<<"A";
			c[1]--;
		}
		if(c[2]!=0){
			cout<<"T";
			c[2]--;
		}
		if(c[3]!=0){
			cout<<"e";
			c[3]--;
		}
		if(c[4]!=0){
			cout<<"s";
			c[4]--;
		}
		if(c[5]!=0){
			cout<<"t";
			c[5]--;
		}
		n--;
	}
	system("pause");
	return 0;
}
