#include <iostream>

using namespace std;

// ���� 1018�� ü���� �ٽ� ĥ�ϱ�
void p1018(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	// �־��� ������ ���� �� �𼭸��� white�� ������ �� �������� ü���� ����
	// �ڽź��� ��/�Ʒ��� 8ĭ���� ü���� ���� ���� �ٽ� ĥ�ؾ� �ϴ� ���� ����
	int w_change[50][50];

	cin >> n >> m;
	char tmp;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> tmp;
			// �ڽ��� �ٽ� ĥ�ؾ� �ϴ���
			if ((i+j)%2==0)
				w_change[i][j] = tmp != 'W' ? 1 : 0;
			else
				w_change[i][j] = tmp != 'B' ? 1 : 0;
		}
	}

	// �� ���� �ٽ� ĥ�ؾ� �ϴ� ���� ���� update
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m - 7; j++){
			for (int k = 1; k < 8; k++){
				w_change[i][j] += w_change[i][j + k];
			}
		}
	}

	// �� + �� �ջ� �ٽ� ĥ�ؾ� �ϴ� ���� ���� update
	for (int j = 0; j < m - 7; j++){
		for (int i = 0; i < n - 7; i++){
			for (int k = 1; k < 8; k++){
				w_change[i][j] += w_change[i + k][j];
			}
		}
	}

	// �ٽ� ĥ�ؾ� �ϴ� ������ �ּ� ���� search
	int min = 100000, temp;
	for (int i = 0; i < n - 7; i++){
		for (int j = 0; j < m - 7; j++){
			// ���忡�� 8*8 ü������ ���� 32�� �̻��� �ٽ� ĥ�ؾ� �Ѵٸ�
			// ���� ���� ���������� �Ͽ� ĥ�ϴ� ���� �� ���� ���� ���带 ĥ�Ѵ�.
			if (w_change[i][j]>32)
				w_change[i][j] = 64 - w_change[i][j];
			if (min>w_change[i][j])
				min = w_change[i][j];
		}
	}

	cout << min;

	return;
}