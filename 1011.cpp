#include<stdio.h>
using namespace std;

int main(){
	int T;
	scanf_s("%d", &T);
	long int n1, n2, n3;
	for (int i = 0; i < T; i++){
		scanf_s("%ld %ld %ld", &n1, &n2, &n3);

		if ((n1 + n2)>n3)
			printf("Case #%d: true\n",i+1);
		else
			printf("Case #%d: false\n",i+1);

	}
	return 0;
}
