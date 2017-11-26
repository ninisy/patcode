#include<iostream>
#include<string>
using namespace std;

int main(){
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	int lena = a.length();
	int lenb = b.length();
	int lenc = c.length();
	int lend = d.length();
	int min1 = lena < lenb ? lena : lenb;
	int min2 = lenc < lend ? lenc : lend;


	int t[2];
	int j;
	for (int i = 0; i < min1; i++){
		if (a[i] == b[i] && (a[i] <= 'G'&&a[i] >= 'A')){
			t[0] = a[i] - 'A';
			j = i;
			break;
		}
	}
	//string shi = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N' };

	for (int i = j+1; i < min1; i++){
		if (a[i] == b[i] && ((a[i] >= 'A'&&a[i] <= 'N' )|| (a[i] >= '0'&&a[i] <= '9'))){
			t[1] = a[i];
			break;
		}
/*			for (int k = 0; k < 24; k++){
				if (a[i] == shi[k]){
					t[1] = k;
					break;
				}
			}
			*/
		
	}
	for (int i = 0; i < min2; i++){
		if (c[i] == d[i] && ((c[i] <= 'z'&&c[i] >= 'a') || (c[i] <= 'Z'&&c[i] >= 'A'))){
			t[2] = i;
			break;
		}
	}
	switch (t[0]){
	case 0:printf("%s ", "MON"); break;
	case 1:printf("%s ", "TUE"); break;
	case 2:printf("%s ", "WED"); break;
	case 3:printf("%s ", "THU"); break;
	case 4:printf("%s ", "FRI"); break;
	case 5:printf("%s ", "SAT"); break;
	case 6:printf("%s ", "SUN"); break;
	}

	int m;
	if (t[1] >= '0' && t[1] <= '9') {
		m = t[1] - '0';
	}
	else {
		m = t[1] - 'A' + 10;
	}
	if (m< 10)
		printf("0%d:", m);
	else
		printf("%d:", m);
	
	if (t[2] < 10)
		printf("0%d", t[2]);
	else
		printf("%d", t[2]);

	system("pause");
	return 0;

}
