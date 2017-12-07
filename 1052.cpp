#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	
	vector<vector<string>> a;
	for(int i =0;i<3;i++){
		string s;
		//cin>>s;
		getline(cin,s);
		int j=0,k=0;
		vector<string> tmp;
		while(j<s.length()){
			if(s[j]=='['){
				k=j+1;
				while(k++<s.length()){
					if(s[k]==']')
					{
						tmp.push_back(s.substr(j+1,k-1-j));
						break;
					}
					//k++;
				}
			}
			j++;
		}
		a.push_back(tmp);
	}
	int n;
	cin >> n;
	int f1,f2,f3,f4,f5;
	int l1=a[0].size(),l2=a[1].size(),l3=a[2].size();
	for(int i=0;i<n;i++){
		cin>>f1>>f2>>f3>>f4>>f5;
		if(f1>l1||f1<1||f2>l2||f2<1||f3>l3||f3<1||f4>l2||f4<1||f5>l1||f5<1){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}else{
			cout<<a[0][f1-1]<<"("<<a[1][f2-1]<<a[2][f3-1]<<a[1][f4-1]<<")"<<a[0][f5-1]<<endl;
		}
	}
	system("pause");
	return 0;

}
