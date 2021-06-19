#include <iostream>

using namespace std;

// 백준 11866번 요세푸스 문제 0
void p11866(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, k; bool is_trash[1001] = { false, };

	cin >> n >> k;
	int curr = 0, card_num = n;
	cout << '<';
	while (card_num){
		for (int i = 0; i < k; i++){
			curr++;
			if (curr > n)
				curr = 1;
			while (is_trash[curr]){
				curr++;
				if (curr > n)
					curr = 1;
			}
		}
		is_trash[curr] = true;
		cout << curr;
		card_num--;
		if (card_num)
			cout << ", ";
	}
	cout << '>';

	return;
}