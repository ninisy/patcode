#include<iostream>
#include<algorithm>
using namespace std;
struct inf{
	long int number;
	int score;
};

bool cmp(inf a,inf b){
	return a.score>b.score;
}

int main(){
	long int n;
	cin >> n;
	int n2,t_score;
	long int n1;
	inf a[1001] = {0};
	for(long int i =0;i<n;i++){
		scanf("%ld-%d %d",&n1,&n2,&t_score);
		a[n1].number = n1;
		a[n1].score  =a[n1].score+ t_score;
	}
	sort(a,a+1001,cmp);
	cout<<a[0].number<<" "<<a[0].score<<endl;
	
	system("pause");
	return 0;

}
