#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}


int main(){
	int N;
	cin>>N;
	int *a = new int[N];
	//vector<int> a(N);
	for(int i=0;i<N;i++)
		cin>>a[i];

	sort(a,a+N,cmp);
	//sort(a.begin(),a.end(),cmp);
	int m,n;

	for(int i = sqrt((double)N);i>=1;i--){
		if(N%i==0){
			n=i;
			break;
		}
	}
	m = N/n;

	vector<vector<int>> b(m,vector<int>(n));//定义二维数组,因为下表是变量，所以这样最方便

	int level = m/2+m%2;//有几圈
	int t= 0;
	for(int i=0;i<level;i++){
		for(int j=i;j<=n-i-1&&t<=N-1;j++){//右
			b[i][j] = a[t++];
		}
		for(int j=i+1;j<=m-2-i&&t<=N-1;j++){//下
			b[j][n-1-i] = a[t++];
		}
		for(int j = n-i-1;j>=i&&t<=N-1;j--){//左
			b[m-i-1][j] = a[t++];
		}
		for(int j = m-2-i;j>=i+1&&t<=N-1;j--){//上
			b[j][i] = a[t++];
		}
	}
	   
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j!=0)
				printf(" ");
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;

}
