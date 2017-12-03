#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;
	long long int len = s.length();
	long long int count=0;
	long long int min_a=100001;
	long long int c_p=0,c_t=0;

	for(long long int i=0;i<len;i++){
		if(s[i]=='T'){
			c_t++;
		}
	}

	for(long long int i=0;i<len;i++){
		if(s[i]=='P')
			c_p++;
		if(s[i]=='T')
			c_t--;
		if(s[i]=='A')
			count = count+c_p*c_t;
		
	}
	cout<<(count%1000000007);

	system("pause");
	return 0;
}
