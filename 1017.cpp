#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	int b;
	cin >> a >> b;
	//scanf_s("%s %d",&a,&b);
	int s = (a[0] - '0') / b;
	int r = (a[0] - '0') % b;
	if (a.length() == 1 || (a.length() != 1 && s != 0))
		printf("%d", s);

	int tmp_q, tmp_r;

	for (int i = 1; i < a.length(); i++){
		
		tmp_q = (r * 10 + a[i] - '0') / b;
		tmp_r = (r * 10 + a[i] - '0') % b;

		r = tmp_r;

		printf("%d", tmp_q);
	}
	tmp_r = r;
	printf(" %d", tmp_r);


	system("pause");
	return 0;
}
