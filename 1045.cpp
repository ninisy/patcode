#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long int n;
	cin >>n;
	long long int tmp;
	long long int *a = new long long int[n];
	long long int *b = new long long int[n];
	for(long int i=0;i<n;i++){
		cin>> tmp;
		a[i] = tmp;
		b[i] = tmp;
	}
	sort(a,a+n);
	int count =0,max=0;
	long long int *res = new long long int[n];
	for(int i=0;i<n;i++){//仅考虑位置是否正确是不行的，万一其他的错了呢
		if(a[i] == b[i]&&b[i]>max){
			res[count] = b[i];
			count++;
		}	
		if(b[i]>max)
			max = b[i];
	}
	cout<<count<<endl;
	//sort(b,b+count);
	for(int i=0;i<count;i++){
		if(i!=0)
			cout<<" ";
		cout<<res[i];
	}
	cout<<endl;//必须加这一行，否则会格式错误。以后在最后输出最好还是加个换行
	system("pause");
	return 0;
}
