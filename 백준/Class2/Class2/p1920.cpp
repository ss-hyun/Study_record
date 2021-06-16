#include <iostream>
#include <vector>

using namespace std;

// ���� 1920�� �� ã��
struct node{
	int n;
	int left;
	int right;
};
void p1920(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	vector<node> tree(100001);
	
	// Ǯ�� 1
	cin >> n;
	// size : dummy node ������ node ��
	int i, temp, curr ,size = 0;
	cin >> temp;
	tree[0] = { temp, -1, -1 };
	for (i = 1; i < n; i++){
		cin >> temp;
		curr = 0;
		while (true){
			if (tree[curr].n == temp)
				break;
			else if (tree[curr].n > temp){
				if (tree[curr].left == -1){
					tree[++size] = { temp, -1, -1 };
					tree[curr].left = size;
					break;
				}
				curr = tree[curr].left;
			}
			else{
				if (tree[curr].right == -1){
					tree[++size] = { temp, -1, -1 };
					tree[curr].right = size;
					break;
				}
				curr = tree[curr].right;
			}
		}
	}

	cin >> m;
	for (i = 0; i < m; i++){
		cin >> temp;
		curr = 0;
		while (true){
			if (tree[curr].n == temp){
				cout << 1 << '\n';
				break;
			}
			else if (tree[curr].n>temp){
				if (tree[curr].left == -1){
					cout << 0 << '\n';
					break;
				}
				curr = tree[curr].left;
			}
			else{
				if (tree[curr].right == -1){
					cout << 0 << '\n';
					break;
				}
				curr = tree[curr].right;
			}
		}
	}

	// Ǯ�� 2
	/*
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
				cout << 1 << '\n';
				break;
			}
			else if (st == en){
				cout << 0 << '\n';
				break;
			}
			else if (num[en]<temp){
				cout << 0 << '\n';
				break;
			}
			else if (num[st]>temp){
				cout << 0 << '\n';
				break;
			}
			else if (num[curr]>temp){
				en = curr;
			}
			else{
				st = curr + 1;
			}
		}
	}
	*/

	return;
}