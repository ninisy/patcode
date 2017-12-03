#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct wf{
	char c;
	int count;
};
bool cmp(wf a,wf b){
	if(a.count >b.count)
		return a.count >b.count;
	else if(a.count ==b.count&&a.c!=b.c){
		return (a.c-'0')<(b.c-'0');
	}
	return false;
	
}
int main(){
	string s;
	getline(cin,s);
	//cin>>s;
	//scanf("%s",&s);
	wf a[256] = {0};
	int len = s.length();
	for(int i=0;i<len;i++){
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
			if((s[i]>='A'&&s[i]<='Z'))
				s[i] = s[i]+32;
			a[s[i]].count++;
			a[s[i]].c = s[i];
		}
		
	}
	sort(a,a+256,cmp);
	cout<<a[0].c<<" "<<a[0].count;

	system("pause");
	return 0;
}
