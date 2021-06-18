#include <iostream>
#include <cmath>

using namespace std;

// ���� 2609�� �ִ������� �ּҰ����
void p2609(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int a, b, i;
	cin >> a >> b;
	// a�� b ���μ� ����
	// �� index�� ���� ���μ����� �� �� index�� �μ��� �� �� ������ �ִ��� ����
	int a_prime_fac[10001] = { 0, }, b_prime_fac[10001] = { 0, };
	for (i = 2; i<=(a>b ? a : b); i++){
		if (a == 1 && b == 1)
			break;
		while (a%i == 0){
			a /= i;
			a_prime_fac[i]++;
		}
		while (b%i == 0){
			b /= i;
			b_prime_fac[i]++;
		}
	}

	int mul = 1, div = 1;	// mul : �ִ�����, div : �ִ�����
	for (int j = 2; j < i; j++){
		if (a_prime_fac[j] && b_prime_fac[j]){
			mul *= (int)pow((float)j, (float)a_prime_fac[j]>b_prime_fac[j] ? a_prime_fac[j] : b_prime_fac[j]);
			div *= (int)pow((float)j, (float)a_prime_fac[j]<b_prime_fac[j] ? a_prime_fac[j] : b_prime_fac[j]);
		}
		else if (a_prime_fac[j]){
			mul *= (int)pow((float)j, (float)a_prime_fac[j]);
		}
		else if (b_prime_fac[j]){
			mul *= (int)pow((float)j, (float)b_prime_fac[j]);
		}
	}
	cout << div << '\n' << mul << '\n';

	return;
}