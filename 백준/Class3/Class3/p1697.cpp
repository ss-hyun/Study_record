// 백준 1697번 숨바꼭질
#include <iostream>
#include <queue>

inline int MIN(int x, int y){ return x < y ? x : y; }

using namespace std;

int cmin, n, k;
bool visit[100001];
int rec(int curr){
	if (curr <= n)
		return n - curr;
	if (curr == 1)
		return n + 1;
	if (curr & 1)
		return 1 + MIN(rec(curr - 1), rec(curr + 1));
	return MIN(1 + rec(curr >> 1), curr - n);
}

void p1697(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	queue<pair<int, int>> q; // first : 현재 위치, second : 이동 카운트

	cin >> n >> k;

	// bfs
	int curr, cnt;
	q.push({ n, 0 });
	while (true){
		curr = q.front().first; cnt = q.front().second;
		if (curr == k)
			break;
		q.pop();
		cnt++;
		if (curr+1<100001 && !visit[curr + 1]){
			q.push({ curr + 1, cnt });
			visit[curr + 1] = true;
		}
		if (curr&&!visit[curr - 1]){
			q.push({ curr - 1, cnt });
			visit[curr - 1] = true;
		}
		if (curr<50001&&!visit[(curr<<1)]){
			q.push({ (curr << 1), cnt });
			visit[(curr << 1)] = true;
		}
	}

	cout << rec(k) << endl;
	cout << cnt;

	return;
}