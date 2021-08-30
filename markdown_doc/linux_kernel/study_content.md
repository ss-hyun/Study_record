---
title: "Linux kernel : Record learning content"
---

# 목차

<br>

# Linux
## log file
---
```/var/log/kern.log``` : (원칙적으로) 커널에서 나오는 모든 메세지 기록  
```/var/log/debug``` : 커널에서 로그 레벨이 KERN_DEBUG(7)로 지정된 printk 메세지만 기록
## 명령어
---

<br>

# GCC (GNU Compiler Colllection)
## 전처리기 (define, 매크로)
---
### **# 연산자**
받아온 매크로 변수 앞에 연산자 #을 붙여 매크로 변수를 문자열로 바꾸어준다.
```c
//Example
#include <stdio.h>
#define PRINT(s) printf(#s)
#define ERR_PRINT(s) printf(s)

int main(){
    PRINT(Hello);       // == printf("Hello") > Hello print 
    ERR_PRINT(Hello);   //== printf(Hello) > error 발생
}
```

### **## 연산자**
두 개의 토큰 사이에 ## 연산자를 붙여 두 토큰을 이어준다(붙여준다).
```c
//Example
#include <stdio.h>
#define DECLARE_INT_a(n) int a##n

int main(){
    DECLARE_INT_a(0);   // == int a0 > a0 선언
    a0 = 3;
    printf("%d",a0);    // a0의 값 3 출력
}
```

<br>

## GNU C 속성 체계 : &lowbar;&lowbar;attribute__
---
### **함수 속성(Funtion attribute)**

* 사용 형식

    ```
    [return type] [function name](parameter list) __attribute__((attribute name(parameter list))) 
    ```
    ```c
    //Example
    void f() __attribute__((alias("__f")));
    int my_printf(const char *format, ...) __attribute__((format(print, 1, 2)));
    ```
* 종류

    ```c
    alias("target")
    /*
    alias 속성은 이미 존재하는 함수에 대하여 별칭(alias, 가명, 함수를 호출할 수 있는 다른 이름)을 가질 수 있도록 해준다.
    별칭으로 함수를 호출하면 컴파일러는 이 호출을 원본 함수에 대한 호출로 대체해준다.
    */

    // Example
    #include <stdio.h>

    void original_func() {
        printf("%s\n", __FUNCTION__);
        return;
    }

    void rename_func() __attribute__((alias("original_func")));
    
    int main(){
        rename_func();
        // == original_func()
        // 원본 함수를 호출, 문자열 original_func가 print된다.
    }
    ```
    ```
    aligned(alignment)
    alloc_size
    always_inline
    gnu_inline
    artifical
    bank_switch
    flatten
    error("message")
    warning("message")
    cdecl
    const
    constructor
    destructor
    constructor(priority)
    destructor(priority)
    deprecated
    deprecated(msg)
    disinterrupt
    dllexport
    dllimport
    eightbit_data
    exception_handler
    externelly_visible
    far
    fast_interrupt
    fastcall
    thiscall
    ```
    ```c
    format(archetype, string-index, first-to-check)
    /*
    format 속성은 해당 함수가 특정한 함수 인자 스타일(ex. printf, scanf, strftime, ...)을 가지는 것을 표기하여
    formatting 된 문자열에 대해 type check가 이루어지도록 한다.
    
    [parameter]
    archetype : 포맷 문자열을 해석할 방식
                printf, scanf, gnu_printf, gnu_scanf, gnu_strftime, strfmon 중 한 가지
    string-index : 포맷 문자열의 함수 인자의 위치(순서)
    first-to-check : 포맷 문자열에 대해 첫 번째로 체크할 함수 인자의 위치(순서)
    */

    // Example
    #include <stdio.h>

    void myprint(const char *format, ...) __attribute__((format(print, 1, 2)));

    // 컴파일 시 경고 메세지 출력, 속성 부분을 삭제하면 경고 문구가 사라진다.
    int main(){
        myprint("%d\n",4);
        myprint("%s\n",4); 
        // warning : format '%d' expects type 'int', but argument 2 has type 'char *'
        myprint("%s\n","abc");
        myprint("%s %d %d\n",4, 6);
        // warning : format '%s' expects type 'char *', but argument 2 has type 'int'
        // warning : toot few arguments for format
    }
    ```
    ```
    format_arg(string-index)
    function_vector
    interrupt
    ifunc
    interrupt_handler
    interrupt_thread
    isr
    kspisusp
    l1_text
    l2
    leaf
    long_call/short_call
    longcall/shortcall
    long_call/near/far
    malloc
    mips16/nomips16
    model(model-name)
    ms_abi/sysv_abi
    callee_pop_aggregate_return(number)
    ms_hook_prologue
    naked
    near
    nesting
    nmi_handler
    no_instrument_function
    no_split_stack
    noinline
    noclone
    nonull(arg-index, ...)
    noreturn
    nothrow
    optimize
    pcs
    pure
    hot
    cold
    regparm(number)
    sseregparm
    force_align_arg_pointer
    resbank
    return_twice
    saveall
    save_volatiles
    section
    sentinel
    short_call
    shortcall
    signal
    sp_switch
    stdcall    
    syscall_linkage
    target
    tiny_data
    trap_exit
    unused
    used
    version_id
    visibility
    vliw
    warn_unused_result
    weak
    weakref
    weakref("target")   
    ```    

<br>

### **변수 속성(Variable attribute)**


<br>

### **타입 속성(Type attribute)**

<br>

# 사용되는 유용한 툴
## vim 플러그인
---
vim의 플러그인을 사용하기 위해서는 이를 설치 및 관리해주는 툴인 vim vundle을 설치해야한다.
<br>

### **ctags**
ctags는 소스코드 내에 존재하는 여러 함수와 변수, 구조체들을 미리 인덱싱 해놓는다. 소스코드를 분석할 때 인덱싱 해놓은 위치로 바로 이동할 수 있도록 해주어 소스코드 분석을 돕는다. C언어 외에도 다양한 언어를 지원한다.

### **cscope**
cscope는 소스코드에 대한 데이터베이스를 만들어 검색을 빠르고 편하게 할 수 있도록 돕는다. 어떤 함수 혹은 전역변수들이 어디서 쓰이는지를 쉽게 찾을 수 있다. (cscope 도입 이전에는 터미널 창에서 grep을 이용해야 했다.)

<br>

# Makefile / Kbuild
## option
---
- ccflags-y / asflags-y / ldflags-y  

    컴파일 및 링크에 사용되는 옵션을 지정한다. EXTRA_CFLAGS, EXTRA_AFLAGS and EXTRA_LDFLAGS 와 동일하다.

<br>

### **특정 조건을 만족할 때만 컴파일**
```makefile
obj-$(OPTION) := example.o
```
위와 같은 코드에서는 옵션이 y나 m으로 설정 되어야만 소스가 컴파일된다.  
이는 Kbuild에서 접미사가 y가 m이 아닌 경우에는 해당 작업이 무시되어 컴파일 되지 않기 때문이다. 따라서 특정 조건을 만족할 때만 값을 가지도록 하는 옵션으로 컴파일 여부를 컨트롤 해줄 수 있다.

<br>

# 원격 서버 html 파일 열기
## Simple web server - python3
---
로컬에서는 html 파일에 바로 접근을 할 수 있어 쉽게 동작을 테스트할 수 있지만, 원격 서버에 저장되어 있는 파일은 바로 접근할 수 없다. 따라서 원격에 존재하는 파일을 확인하기 위해서는 remote server에 존재하는 html 파일을 가져올 수 있는 환경을 만들어주어야 한다.

이러한 테스트를 쉽게 할 수 있도록 해주는 파이썬의 http.server(pyhon3) 모듈이 존재하여서 이 모듈을 사용하면 손쉽게 테스트 서버를 열어 서버의 html 파일을 확인할 수 있다.
```
cd (열고싶은 파일이 존재하는 디렉터리)
python -m http.server (port number)
python -m SimpleHTTPServer (port number)

ex) python -m http.server 8000
```
위와 같은 명령어를 실행시킨 뒤, 로컬의 웹브라우저에서 아래와 같은 주소를 입력하면 html 파일에 접속할 수 있다.
```
(remote server 주소):(port number)

ex) xxx.xxx.xxx.xxx:8000
```
터미널에서 Ctrl + C 를 입력하면 파이썬이 종료되어 테스트 서버도 종료된다.