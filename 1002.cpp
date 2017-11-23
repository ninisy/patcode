#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string n;
	cin >> n;
	int len = n.length();
	int *a = new int[len];//因为len是变量，所以不能直接a[len]
	int sum = 0;
	char *pin[10]={ "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	string *res = new string[len];
	int count = 0;

	for (int i = 0; i < len; i++){
		a[i] = n[i] - '0';
		sum += a[i];
	}

	while (sum != 0){
		
		int temp = sum % 10;
		res[count++] = pin[temp];
		sum /= 10;
	}

	while (count != 0){
		if (count != 1)
			cout << res[--count] << " ";
		else
			cout << res[--count];
	}
	system("pause");
	return 0;
}
