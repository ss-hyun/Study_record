---
title: "c++ <string>"
date: 2021-06-07T20:57:24+09:00
draft: false
---

# **&lt;string>**
string을 다루는 클래스이다. c언어의 char를 이용한 문자열과 달리 문자열 끝에 NULL('\0')이 들어있지 않다.

## **생성자**
---
```c++
string str1("문자열");

string str2;
str2 = "문자열";

/* 다른 문자열을 복사해서 생성 */
// str을 통째로 복사
string str3(str);
// str의 n번째 값부터 끝 값까지 복사
string str4(str, n);
// str의 n1번째 값부터 n2번째 값까지 복사
string str5(str, n1, n2);
```

## **멤버함수**
---
### **Access 관련 함수**

### **Size 관련 함수**

### **iterator 반환 함수**
||begin()||end()|
|---|---|---|---|
|원형|iterator begin();||iterator end();|
||const_iterator begin(); const||const_iterator end() const;|
|사용방법|string.begin();||string.end();|
|설명| 문자열의 첫 번째 문자를 가리키는 반복자를 반환||문자열의 마지막의 바로 뒤를 가리키는 반복자를 반환|  
<br>

### **기타 함수**
||to_string())|
|---|---|
|원형|string to_string(int num);|
||string to_string(long num);|
||string to_string(long long num);|
||string to_string(unsigned num);|
||string to_string(unsigned long num);|
||string to_string(unsigned long long num);|
||string to_string(float num);|
||string to_string(double num);|
||string to_string(long double);|
|사용 방법|string.to_string(num);|
|설명|숫자 타입의 데이터를 string 타입으로 변환하여 반환|
