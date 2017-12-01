#include<iostream>
#include<string>
using namespace std;

int main(){
	string bad;
	string sample;
	//cin>>bad;
	//	cin>>sample;
	getline(cin,bad);//为了防止第一行为空，所以不能用cin而要用getline
	getline(cin,sample);
	int len1 = bad.length();
	int len2 = sample.length();
	int k=0;
	for(int i=0;i<len2;i++){
		bool flag = true;
		bool is = true;
		for(int j=0;j<len1;j++){
			if((sample[i]==bad[j])||((sample[i]>='a'&&sample[i]<='z')&&sample[i]==(bad[j]+32))||(sample[i]>='A'&&sample[i]<='Z'&&bad[j]=='+')){
				flag = false;
				k++;
				break;
			}
		}
		if(flag)
			cout<<sample[i];
		if(k==len2-1)
			cout<<endl;
	}
	system("pause");
	return 0;
}
