#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//int n, p;
	//cin >> n >> p;
	int n;
	long long p;
	scanf("%d%lld", &n, &p);
	int *a = new int[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int result = 0;
	for (int i = 0; i < n; i++){
		for (int j = i + result; j <n; j++){//
			if (a[i] * p >= a[j]){
				if (result<j - i + 1)
					result = j - i + 1;
			}
			else
				break;
		}

	}

	cout << result;

	system("pause");
	return 0;

}
