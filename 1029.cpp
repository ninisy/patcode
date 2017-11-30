#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int num1[200] = {}, num2[200] = {};
	string tmp;

	for (int i = 0; i < s1.size(); i++){
		if (s1[i] >= 'a'&&s1[i] <= 'z')
			s1[i] = s1[i] - 32;
		num1[s1[i]]++;
	}
	for (int i = 0; i < s2.size(); i++){
		if (s2[i] >= 'a'&&s2[i] <= 'z')
			s2[i] = s2[i] - 32;
		num2[s2[i]]++;
	}
	for (int i = 0; i < 200; i++){
		if (num1[i] != 0 && num2[i] == 0)
			tmp.push_back((char)i);
	}
	int k = 0;
	for (int i = 0; i < s1.size(); i++){
		for (int j = 0; j < tmp.size(); j++){
			if (s1[i] == tmp[j]){
				cout << s1[i];
				tmp[j] = 999;
				k++;
				break;
			}
		}
		if (k == (tmp.size()))
			break;
	}

	system("pause");
	return 0;
}
