#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct inf{
	int idx;
	int score;
	int n_c;
	int wrong;
	string s;
};

bool cmp(inf a,inf b){ 
	return a.wrong !=b.wrong? a.wrong>b.wrong:a.idx<b.idx;
}
int main(){
	int n,m;
	cin>>n>>m;
	inf *a = new inf [m];

	for(int i=0;i<m;i++){
		cin>>a[i].score>>a[i].n_c;
		getline(cin,a[i].s);
		a[i].s.erase(0,a[i].s.find_first_not_of(" "));//擦除首位的空格
		a[i].idx=i+1;
		a[i].wrong =0;
	}
	string jie;
	for(int i=0;i<n;i++){
		//cin>>jie;
          	
		getline(cin,jie);
		int len = jie.length();
		int j = 0,k=0,level=0,sum=0;
		while(j<len){
			string t;
			if(jie[j]=='('){
				k = j+1;
				while(k++<len){
					if(jie[k]==')'){
						t = jie.substr(j+1,k-j-1);
						if(t==a[level].s){
							sum = sum+a[level].score;
							level++;
							break;}
						else{
							a[level].wrong++;
							level++;
							break;}
					}
				}
				
			}
			j++;
		}
		cout<<sum<<endl;
	}
	sort(a,a+m,cmp);
	if(a[0].wrong==0)
		cout<<"Too simple"<<endl;
	else{
		cout<<a[0].wrong;
		//cout<<a[0].idx;
		for(int i = 0;i<m;i++)
		{	
			if(a[i].wrong==a[0].wrong)
				cout<<" "<<a[i].idx;
                  	if(a[i].wrong!=a[0].wrong)
                          	break;
		}
          cout<<endl;
	}

	system("pause");
	return 0;

}
