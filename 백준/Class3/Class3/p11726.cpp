// 백준 11726번 2*n 타일링
#include <iostream>

using namespace std;

void p11726(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	float n, horiz, before_rem = 1;
	int  n_method = 1;
	cin >> n;

	for (horiz = 1; horiz * 2 < n + 1; horiz++){
		before_rem = 1;
		for (int i = 0; i < horiz; i++){
			before_rem = before_rem * (n - horiz - i) / (horiz - i);
		}
		n_method += (int)before_rem % 10007;
		if (n_method > 10007)
			n_method -= 10007;
	}

	cout << n_method << '\n';

	return;
}