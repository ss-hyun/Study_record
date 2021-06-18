---
title: "c++ <string>"
date: 2021-06-18T20:58:47+09:00
draft: false
---

# &lt;algorithm>
[c++ &lt;alogrithm> 레퍼런스 바로가기](https://www.cplusplus.com/reference/algorithm/ "바로가기")

<br>

## 멤버 함수
---
### **Sorting**
* std :: **sort**  
    ***
    ```c++
    // default (1)
    template <class RandomAccessIterator>  
        void sort (RandomAccessIterator first, RandomAccessIterator last);
    // custom (2)
    template <class RandomAccessIterator, class Compare>
        void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
    ```
    매개 변수(first, last)로 주어지는 범위 내의 요소(element)를 오름차순으로 정렬한다.  

    비교 함수

    두 요소가 같을 때 기존의 순서를 유지해준다는 보장이 없는 [unstable sort](../error_solution.md#unstable-sort "error 기록 바로가기")이기 때문에 유의해서 사용해야 한다.    
    
    두 요소가 [동치](../용어_정리.md#동치-equivalent)일 때(equivalent elements, ) 기존의 순서를 유지해주기 위해서는 stable_sort를 사용해주거나 용도에 따라 알맞은 비교함수를 작성해주어야 한다.

    **매개 변수 (Parameters)**  
    * first & last  
    :  

    * comp  
    : 이 함수는 범위 내의 두 요소를 인수(argument)로 받아   함수에서 인수를 수정하면 안되고, 함수 포인터 또는 함수 객체일 수 있다.  

    
    **리턴 값 (Return value)**  
    None  

    **예시 (Example)**  
    ```c++
    // sort algorithm example
    #include <iostream>     // std::cout
    #include <algorithm>    // std::sort
    #include <vector>       // std::vector

    bool myfunction (int i,int j) { return (i<j); }

    struct myclass {
    bool operator() (int i,int j) { return (i<j);}
    } myobject;

    int main () {
    int myints[] = {32,71,12,45,26,80,53,33};
    std::vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33

    // using default comparison (operator <):
    std::sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33

    // using function as comp
    std::sort (myvector.begin()+4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)

    // using object as comp
    std::sort (myvector.begin(), myvector.end(), myobject);     //(12 26 32 33 45 53 71 80)

    // print out content:
    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
    }
    ```





