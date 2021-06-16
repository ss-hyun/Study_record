#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 백준 1920번 수 찾기
void p1920(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	vector<int, int> num;

	cin >> n;
	int i, temp;
	for (i = 0; i < n; i++){
		cin >> temp;
		num.push_back(temp);
	}
	sort(num.begin(), num.end());
	
	cin >> m;
	int st, en, curr;
	for (i = 0; i < m; i++){
		cin >> temp;
		st = 0, en = n - 1;
		while (true){
			curr = (st + en) / 2;

			if (num[curr] == temp){
				cout << 1 << endl;
				break;
			}
			else if (st == en){
				cout << 0 << endl;
				break;
			}
			else if (num[en]<temp){
				cout << 0 << endl;
				break;
			}
			else if (num[st]>temp){
				cout << 0 << endl;
				break;
			}
			else if (num[curr]>temp){
				en = curr - 1;
			}
			else{
				st = curr + 1;
			}
		}
	}

	return;
}