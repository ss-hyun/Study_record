#include <Windows.h>
#include <iostream>
#include "class3_problem_list.h"

using namespace std;

int main(){

	cout << "실행시킬 문제 번호 입력 : ";

	int problem;
	cin >> problem;

	switch (problem){
	case 1012:
		cout << problem << "번 문제 솔루션 실행 시작\n";
		p1012();
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