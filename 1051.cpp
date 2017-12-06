#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main(){
	double r1,p1,r2,p2;
	cin>>r1>>p1>>r2>>p2;

	double a1=0,b1=0,a2=0,b2=0;
	a1 = r1*cos(p1);
	b1 = r1*sin(p1);
	a2 = r2*cos(p2);
	b2 = r2*sin(p2);
	double a = a1*a2-b1*b2;
	double b = a1*b2+a2*b1;
	/*if((a1*b2+a2*b1)<0)
		printf("%.2f%.2fi\n",(a1*a2-b1*b2),(a1*b2+a2*b1));
	else if((a1*b2+a2*b1)>0)
		printf("%.2f+%.2fi\n",(a1*a2-b1*b2),(a1*b2+a2*b1));
	else
		printf("%.2f\n",(a1*a2-b1*b2));*/
	if(a+0.005>=0&&a<0)//加0.005，因为存在四舍五入，所以当本身为负，但舍了之后就为正的情况，需要考虑
		printf("0.00");
	else
		printf("%.2f",a);
	if(b+0.005>=0&&b<0)
		printf("+0.00i");
	else if(b>=0)
		printf("+%.2fi",b);
	else
		printf("%.2fi",b);

	system("pause");
	return 0;

}
