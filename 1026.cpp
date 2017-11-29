#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t1, t2;
	cin >> t1 >> t2;


	float h, m, s;
	float tmp = (t2 - t1) / 100.0;
	h = floor(tmp / 3600.0);
	m = floor((tmp - 3600.0 * h) / 60.0);
	s=round( tmp - 3600.0 * h - 60.0 * m);
	
	printf("%02.f:%02.f:%02.f",h,m,s);

	system("pause");
	return 0;
} 
