#include <Windows.h>
#include <iostream>
#include "problem_list.h"

using namespace std;

int main(){

	cout << "�����ų ���� ��ȣ �Է� : ";
	
	int problem;
	cin >> problem;

	switch (problem)
	{
	case 4153:
		cout << problem << "�� ���� �ַ�� ���� ����\n";
		p4153();
		break;
	default:
		cout << problem << "�� ���� �����Դϴ�.\n";
		break;
	}

	system("pause");

	return 0;
}

//���� ����� format
/*
// ��� ��� & ���� �Լ� �Է�

int main(){
	//������ȣ �Լ� ����
	return 0;
}

*/