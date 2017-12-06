#include<iostream>
using namespace std;

int main(){
	int n,d;
	double e;
	cin>>n>>e>>d;
	int f1=0,f2=0;
	for(int i=0;i<n;i++){
		int day,c=0;
		double t;
		cin>>day;
		for(int j=0;j<day;j++){
			cin>>t;
			if(t<e)
				c++;
		}
          if(c>(day/2)){
          	day>d? f2++:f1++;
          }
	}
	if(n!=0){
		printf("%.1f%% %0.1f%%",(double)f1/n*100,(double)f2/n*100);
	}

	
	system("pause");
	return 0;
}
