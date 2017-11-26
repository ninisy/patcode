#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct score{
	int id;
	int de;
	int cai;
};

int com(struct score a, struct score b){
	if ((a.de + a.cai) != (b.de + b.cai)){
		return (a.de + a.cai) > (b.de + b.cai);
	}
	else if (a.de != b.de){
		return (a.de  > b.de);
	}
	else{
		return (a.id < b.id);
	}
}

int main(){
	int n, l, h;
	scanf_s("%d %d %d", &n, &l, &h);

	score temp;
	vector<score> v[4];
	int all = n;
	for (int i = 0; i < n; i++){

		scanf_s("%d %d %d", &temp.id, &temp.de, &temp.cai);
		if (temp.de<l || temp.cai<l)
			all--;
		else if (temp.de >= h&&temp.cai >= h){
			v[0].push_back(temp);
		}
		else if (temp.de >= h&&temp.cai < h){
			v[1].push_back(temp);
		}
		else if (temp.de < h&&temp.cai < h && (temp.de >= temp.cai)){
			v[2].push_back(temp);
		}
		else
			v[3].push_back(temp);
	}
	printf("%d\n", all);
	for (int i = 0; i < 4; i++){
		sort(v[i].begin(), v[i].end(), com);
		for (int j = 0; j < v[i].size(); j++){
			printf("%d %d %d\n", v[i][j].id, v[i][j].de, v[i][j].cai);
		}
	}
	system("pause");
	return 0;
}
