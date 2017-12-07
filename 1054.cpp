#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;

int main(){
	int n;
	cin>>n;
	char a[50],b[50];
	double temp,sum=0;
	int c=0;
	for(int i=0;i<n;i++){
		scanf("%s",a);
		sscanf(a,"%lf",&temp);
		sprintf(b,"%.2lf",temp);
		int flag = 0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]!=b[j])
				flag = 1;
		}
		if(flag || temp<-1000||temp>1000)
		{
			printf("ERROR: %s is not a legal number\n",a);
			continue;
		}else{
			c++;
			sum +=temp;
		}
	}
	if(c==1)
		printf("The average of 1 number is %.2lf\n",sum);
	else if(c>1)
		printf("The average of %d numbers is %.2lf\n",c,sum/c);
	else
		printf("The average of 0 numbers is Undefined\n");

	system("pause");
	return 0;


}
