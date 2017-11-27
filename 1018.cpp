#include<iostream>
#include<string>
#include<algorithm>
#include <cstring>
using namespace std;

int cmp(char a, char b){
	if (a == 'C'&&b == 'J')
		return true;
	if (a == 'C'&&b == 'B')
		return false;
	if (a == 'J'&&b == 'B')
		return true;
	if (b == 'C'&&a == 'J')
		return false;
	if (b == 'C'&&a == 'B')
		return true;
	if (b == 'J'&&a == 'B')
		return false;
}
int com(int a, int b){ return a > b; }

int main(){
	int n;
	scanf_s("%d", &n);
	char a, b;
	char s = 'CBJ';
	int y_a = 0, y_b = 0, p = 0, an[3] = { 0 }, bn[3] = {0};
	
	for (int i = 0; i < n; i++){
		//scanf_s("%s %s\n", &a[i], &b[i]);why?
		cin >> a >> b;
		if (a == b)
			p++;
		else{
			if (cmp(a, b)){
				y_a++;
				if (a == 'C')
					an[0]++;
				else if (a == 'B')
					an[1]++;
				else
					an[2]++;
			}
			else {
				if (b == 'C')
					bn[0]++;
				else if (b == 'B')
					bn[1]++;
				else
					bn[2]++;
				y_b++;

			}	
		} 
	} 
	printf("%d %d %d\n", y_a, p, y_b);
	printf("%d %d %d\n", y_b, p, y_a);

	char aa, bb;
	int na[3] = {0};
	int nb[3] = {0};
	for (int i = 0; i < 3; i++){
		na[i] = an[i];
		nb[i] = bn[i];
	}
	sort(an,an+3,com);
	sort(bn, bn+3,com);

	if (na[2] == an[0])
		aa = 'J';
	if (na[0] == an[0])
		aa = 'C';
	if(na[1] == an[0])
		aa = 'B';
	

	if (nb[2] == bn[0])
		bb = 'J';
	if (nb[0] == bn[0])
		bb = 'C';
	if (nb[1] == bn[0])
		bb = 'B';
	


	printf("%c %c",aa,bb);
	

	system("pause");
	return 0;
}
