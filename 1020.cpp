#include<iostream>
#include<algorithm>
using namespace std;

struct goods{
	float num;
	float price;
	float dj;
};
bool cmp(goods a, goods b){ return a.dj > b.dj; }

int main(){
	int n, max;
	cin >> n >> max;
	goods *cake = new goods[n];

	for (int i = 0; i < n; i++){
		cin >> cake[i].num;
	}
	for (int i = 0; i < n; i++){
		cin >> cake[i].price;
		
	}
	for (int i = 0; i < n; i++){
		cake[i].dj = cake[i].price / cake[i].num;
	}

	sort(cake, cake + n, cmp);
	float earn=0;

	for (int i = 0; i < n; i++){
		if (cake[i].num <= max)
		{
			earn = earn + cake[i].num*cake[i].dj;
		}
		else{
			earn = earn + max*cake[i].dj;
			break;
		}
		max = max - cake[i].num;
	}

	printf("%.2f",earn);


	system("pause");
	return 0;
}
