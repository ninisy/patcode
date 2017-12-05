#include<iostream>
#include<string>
using namespace std;

int main(){
	string a,b;
	cin>>b;
	cin>>a;
	int lena = a.length();
	int lenb = b.length();
	int max = lena>lenb?lena:lenb;
	string ca,cb;
	if(lenb>lena){
		
		for(int i=0;i<lenb;i++){
			if(i<(lenb-lena))
				ca.push_back('0');
			else
				ca.push_back(a[i-(lenb-lena)]);
		}
		cb =b;
	}
	else if(lena>lenb){
		for(int i=0;i<lena;i++){
			if(i<(lena-lenb))
				cb.push_back('0');
			else
				cb.push_back(b[i-(lena-lenb)]);
		}
		ca =a;
	}
	else{
		ca=a;
		cb=b;
	}
	for(int i=max-1;i>=0;i-=2){
		int t = ((ca[i]-'0')+(cb[i]-'0'))%13;
		if(t==10)
			ca[i]='J';
		else if(t==11)
			ca[i]='Q';
		else if(t==12)
			ca[i]='K';
		else
			ca[i] = ((ca[i]-'0')+(cb[i]-'0'))%13+'0';

		if(i-1>=0)
		{
			int tmp = (ca[i-1]-'0')-(cb[i-1]-'0');
			if(tmp<0)
				tmp = tmp+10;
			ca[i-1] = tmp +'0';
		}
	}
	cout<<ca<<endl;

	system("pause");
	return 0;
}
