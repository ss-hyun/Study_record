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
	case 1259:
		cout << problem << "�� ���� �ַ�� ���� ����\n";
		p1259();
		break;
	case 2798:
		cout << problem << "�� ���� �ַ�� ���� ����\n";
		p2798();
		break;
	case 10250:
		cout << problem << "�� ���� �ַ�� ���� ����\n";
		p10250();
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