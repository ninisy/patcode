#include<iostream>
using  namespace std;

bool isprime(int n){
	for (int i = 2; i*i <= n; i++){//i*i
		if (n%i == 0)
			return false;
	}
	return true;
}

int main(){
	int m, n;
	cin >> m >> n;
	int x = 2, c = 0, sc = 0;
	int a[100];
	while (true){
		if (isprime(x))
		{
			c++;
			if (c >= m)
			{
				a[sc] = x;
				sc++;
				if (sc == n - m + 1)
					break;
			}
			
		}
		x++;
	}

	
	for (int i = 0; i < sc-1; i++){
		
		if ((i + 1) % 10 == 0)
			printf("%d\n", a[i]);
		else 
			printf("%d ", a[i]);

	}
	printf("%d", a[sc - 1]);
	system("pause");
	return 0;

}
