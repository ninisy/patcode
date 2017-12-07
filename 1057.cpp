#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int len = s.length();
	int sum=0;
	for(int i=0;i<len;i++){
		if(s[i]>='a'&&s[i]<='z'){
			sum = sum+s[i]-'a'+1;
			continue;
		}
		if(s[i]>='A'&&s[i]<='Z'){
			sum = sum+s[i]-'A'+1;
			continue;
		}
	}
	int n0=0,n1=0;
	while(sum!=0){
		int tmp = sum%2;
		if(tmp==0){
			n0++;
		}
		if(tmp==1){
			n1++;
		}
		sum = sum/2;
	}
	cout<<n0<<" "<<n1;
	system("pause");
	return 0;
}
