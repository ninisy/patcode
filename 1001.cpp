#include <iostream>
using namespace std;

int main(){

	int a ;
	int num_step = 0;
	cin >> a;

	while (a != 1)
	{
		if (a % 2 == 0){
			a = a / 2;
		}
		else{
			a = (3 * a + 1) / 2;
		}
		num_step++;

	}

	cout  << num_step << endl;

	system("pause");
	return 0;
}
