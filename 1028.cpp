#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct inf{
	string name;
	int date;
	int y;
	int m;
	int d;

};
bool cmp(inf a, inf b){ return a.date > b.date; }

int main(){
	int n;
	cin >> n;
	inf *a= new inf[n];
	
	string s;
	string num;

	int i = 0;
	for ( i = 0; i < n; i++){
		cin >> a[i].name;
		scanf_s("%d/%d/%d", &a[i].y, &a[i].m, &a[i].d);
		a[i].date = a[i].y * 10000 + a[i].m * 100+ a[i].d;

		if (a[i].date>20140906 || a[i].date < 18140906){
			n--;
			i--;
			
			continue;
		}
		/*for (int j = 0; j < s.size(); j++){
			if (s[j] != '/'){
				num.push_back(s[j]);
			}
		}
		if (stoi(num)>20140906 || stoi(num) < 18140906){
			n--;
			i--;
			num.clear();
			continue;
		}
		else{
			a[i].date = stoi(num);
		}
		num.clear();
		*/
	}
	sort(a, a + i,cmp);
	if (i == 0)
		cout << 0;
	else
		cout << n <<" "<< a[i-1].name <<" "<< a[0].name;
	system("pause");
	return 0;

}
