#include<stdio.h>
using namespace std;
int main(){
	int c, e;
	bool iszero = true;
	while (~scanf_s("%d %d", &c, &e)){//scanf:right
		if (e == 0)
			continue;
		if (!iszero)
			printf(" ");
		else
			iszero = false;

		printf("%d %d", c*e, e - 1);

	}
	if (iszero)
		printf("0 0");

	return 0;
}
