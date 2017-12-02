#include<iostream>
using namespace std;

int* min(int *a,int *p){
	int l[3]={0};
	int w[2]= {17,29};
	for(int i=2;i>=0;i--){
		if(a[i]-p[i]>=0){
			l[i] = a[i]-p[i];
		}
		else{
			if(i!=0){
				l[i] = a[i]+w[i-1]-p[i];
				a[i-1]=a[i-1]-1;
			}else{
				l[i]= a[i]-p[i];
			}
		}
	}
	return l;
}

int main(){
	int p[3],a[3];
	scanf("%d.%d.%d %d.%d.%d",&p[0],&p[1],&p[2],&a[0],&a[1],&a[2]);
	bool flag = true;
	int *l = {0};
	if(p[0]>a[0]){
		flag=false;
		l = min(p,a);
	}else if(p[0]==a[0]&&p[1]>a[1]){
		flag=false;
		l = min(p,a);
	}else if(p[0]==a[0]&&p[1]==a[1]&&p[2]>a[2]){
		flag=false;
		l = min(p,a);
	}
	else{
		l = min(a,p);
	}
	if(flag){
		
		printf("%d.%d.%d",l[0],l[1],l[2]);
	}
	else
		printf("-%d.%d.%d",l[0],l[1],l[2]);
	
	system("pause");
	return 0;

}
