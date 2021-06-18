#include <Windows.h>
#include <iostream>
#include "problem_list.h"

using namespace std;

int main(){
	 
	cout << "실행시킬 문제 번호 입력 : ";
	
	int problem;
	cin >> problem;

	switch (problem)
	{
	case 4153:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p4153();
		break;
	case 1259:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p1259();
		break;
	case 2798:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p2798();
		break;
	case 10250:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p10250();
		break;
	case 11050:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p11050();
		break;
	case 1018:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p1018();
		break;
	case 1181:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p1181();
		break;
	case 1920:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p1920();
		break;
	case 1978:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p1978();
		break;
	case 2164:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p2164();
		break;
	default:
		cout << problem << "은 없는 문제입니다.\n";
		break;
	}

	system("pause");

	return 0;
}

//백준 제출용 format
/*
// 헤더 목록 & 문제 함수 입력

int main(){
	//문제번호 함수 실행
	return 0;
}

*/