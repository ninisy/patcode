#include<iostream>
using namespace std;

int main(){
	long int n;
	cin>>n;
	double *a = new double [n];
	for(long int i=0;i<n;i++){
		cin>>a[i];
	}
	double *b = new double[n];
	double c=0;
	for(long int i=0;i<n;i++){
		b[i] = (i+1)*(n-i);
		c = c+a[i]*b[i];
	}
	printf("%.2f\n",c);
	system("pause");
	return 0;
}
