#include<iostream>
#include<vector>

using namespace std;
int main(){
	int a, b, n;
	cin >> a >> b >> n;
	int c = a + b;
	vector<int> yu;
	
	do{
		yu.push_back(c%n);
		c /= n;
	} while (c != 0);
	for (int i = yu.size()-1; i >= 0; i--){
		printf("%d", yu[i]);
	}

	system("pause");
	return 0;

}
