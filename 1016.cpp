#include<iostream>
#include<vector>
using namespace std;

int main(){
	int a, da, b, db;
	scanf_s("%d %d %d %d",&a,&da,&b,&db);

	vector<int> v[2];
	int i = 1,j=1;
	while (a != 0){
		
		if (a % 10 == da){
			v[0].push_back((a % 10)*i);
			i *=10;
		}
		a /= 10;
	}
	while (b != 0){
		if (b % 10 == db){
			v[1].push_back((b % 10)*j);
			j *= 10;
		}
		b /= 10;
	}
	int ra = 0, rb = 0;
	if (v[0].size() != 0){
		for (int k = 0; k < v[0].size(); k++)
			ra = ra + v[0][k];
	}
	if (v[1].size() != 0){
		for (int k = 0; k < v[1].size(); k++)
			rb = rb + v[1][k];
	}
	printf("%d",ra+rb);
		
	system("pause");
	return 0;
}
