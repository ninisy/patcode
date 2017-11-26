#include<iostream>
#include<math.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int num;
	
	int A1 = 0, A3 = 0, A5 = 0, i = 0, l = 0, A2 = 0, p = -1, j = 0,k=0,kk=0;
	double A4 = 0;

	for (i = 0; i < n; i++){

		cin >> num;

		if (num % 10 == 0){
			kk++;
			A1 = A1 + num;
		}

		if (num % 5 == 1){
			j = j + 1;
			p = -p;
			A2 = A2 + num * p;
		}

		if (num % 5 == 2){
			A3 = A3 + 1;
		}

		if (num % 5 == 3){
			l = l + 1;
			A4 = A4 + num;
		}
		if (num % 5 == 4){
			k = k + 1;
			if (num > A5)
				A5 = num;
		}
	}

	if (kk == 0)
		printf("%s ","N");
	else
		printf("%d ", A1);
		
	if (j == 0){
		printf("%s ", "N");
	}
	else
		printf("%d ", A2);

	if (A3 == 0)
		printf("%s ", "N");
	else
		printf("%d ", A3);

	if (l == 0)
		printf("%s ", "N");
	else
		printf("%.1f ", A4/l);

	if (k == 0)
		printf("%s", "N");
	else
		printf("%d", A5);

	system("pause");

	return 0;
}
