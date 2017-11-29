#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin >> s;

	int len = s.length();

	if (s[0] == '-')
		cout << "-";

	int idx = 0;
	for (int i = 1; i < len; i++){
		if (s[i] == 'E'){
			idx = i;
		}
	}

	int exp = 0;
	for (int i = idx + 2; i < len; i++){
		exp =( s[i] - '0') + exp * 10;
	}
	if (s[idx + 1] == '-'){
		if (exp > 0){
			cout << "0.";
			for (int j = 0; j < exp - 1; j++)
				cout << "0";
			for (int j = 1; j < idx; j++){
				
				if (s[j] >= '0'&&s[j] <= '9')
					cout << s[j];
			}

		}
		else{
			for (int i = 1; i < idx; i++){
				if (i == 2 - exp)
					cout << ".";
				if (s[i] >= '0'&&s[i] <= '9')
					cout << s[i];
				
			}
		}
	}
	else{
		if (exp >(idx - 3)){
			if (s[1] != '0')
				cout << s[1];
			/*int t = 0;
			for (int j = 1; j < idx; j++){
				if (s[j] != '0'&&s[j]!='.')
					t = j;
			}
			if (t == 0)
				t = idx - 1;
*/
			for (int j = 3; j < idx; j++){
				if (s[j] >= '0'&&s[j] <= '9')
					cout << s[j];
			}

			for (int k = 0; k < exp - (idx - 3); k++)
				cout << "0";
		}
		else{
			if (s[1] != '0')
				cout << s[1];

			int t = 0;
			for (int j = 3; j < idx; j++){
				if (s[j] != '0')
					t = j;
			}
			if (t == 0)
				t = idx - 1;

			for (int j = 3; j < idx; j++){
				if (j == 3 + exp)
					cout << ".";
				if (s[j] >= '0'&&s[j] <= '9')
					cout << s[j];
			}

			
		}
	}
	system("pause");
	return 0;
}
