# Fundamentals of Database Systems 7th edition

* database : 데이터베이스

    서로 연관이 있는 데이터들의 모임. 데이터는 알려진 사실(fact)로서 의미를 가지고 기록될 수 있다.
    - mini-world(작은 세계) 또는 UoD(Universe of Discourse, 논의 세계)라고 부르는 실세계의 일부분을 표현한다.
    - 어떤 특정한 의미를 가지는 데이터의 모임이다.
    - 특정한 목적을 위해서 설계, 구축, 운용된다. 즉, 데이터베이스를 사용하는 사용자 그룹들과 이들이 원하는 응용들이 미리 정해져 있다.

* DBMS, Database Management System : 데이터베이스 관리 시스템

    사용자가 데이터 베이스를 생성하고 관리할 수 있도록 하는 컴퓨터화된 시스템. 다양한 사용자와 응용들이 필요로 하는 데이터베이스를 정의, 생성, 조작, 공유할 수 있도록 편리한 기능을 제공하는 범용 소프트웨어 시스템.

    * 데이터베이스 정의

        데이터베이스에 저장되는 데이터에 대한 데이터 타입, 구조, 제약 조건(constraint)들을 명세(specification)하는 과정

    * meta-data : 메타데이터

        DBMS에 의해서 catalog나 사전의 형태로 저장된 데이터베이스의 정의 또는 데이터베이스를 설명하는 정보

    * 데이터베이스 구축 / 데이터베이스 생성

        DBMS가 관리하는 기억장치에 데이터를 저장하는 과정

    * 데이터베이스 조작 (manipulation)

        특정한 데이터를 검색하기 위한 질의, 데이터베이스의 갱신, 데이터로부터 리포트를 생성하는 기능 등
    
    * 데이터베이스 공유

        여러 사용자와 프로그램이 데이터베이스에 동시에 접근하도록 하는 기능

    또 다른 주요 기능으로는 데이터베이스 보호와 유지보수가 있다.

* dayabase system : 데이터베이스 시스템

    데이터베이스와 DBMS를 합친 소프트웨어 시스템

* program-data independence : 프로그램-데이터 독립성

    데이터 파일의 구조가 응용 프로그램과 분리되어, 데이터 파일의 구조가 변경되어도 응용 프로그램이 변하지 않는 성질

* program-operation independence : 프로그램-연산 독립성

    연산의 구현이 변경되어도 인터페이스가 유지되는 한 응용프로그램이 변하지 않는 성질

* data abstraction : 데이터 추상화

    program-data independence와 program-operation independence를 제공하는 성질

    ex) DBMS는 데이터에 대한 상세한 정보보다는 conceptual representation을 제공한다.

* veiw, 뷰

    데이터베이스의 일부이거나 데이터베이스로부터 유도되는 virtual data. veiw의 데이터는 실제로 데이터베이스에 저장되지 않는다.

* transaction, 트랜잭션

    데이터베이스 레코드를 읽거나 갱신하는 것과 같이 한 번 이상의 데이터 베이스 접근을 포함하는 프로그램, 혹은 프로세스를 수행하는 것. 각 트랜잭션은 다른 트랜잭션의 간섭 없이 완전히 수행되어야 논리적으로 올바르게 데이터베이스 접근을 실행한 것이다.

* DBMS가 지켜야 하는 transaction의 성질

    - isolation : 고립성

        각 트랜잭션이 다른 트랜잭션들로부터 고립되어 수행되는 것 처럼 보이도록 보장

    - atomicity : 원자성
    
        트랜잭션 내의 모든 데이터베이스 연산들이 수행 완료되거나, 완료되지 못했다면 아무 연산도 수행되지 않는 것을 보장

* 데이터베이스 사용자

    - DBA, Database Administrator : 데이터베이스 관리자
    - Database designer : 데이터베이스 설계자
    - End user : 최종 사용자
    
        + casual end user : 캐주얼 사용자

            데이터베이스를 가끔 접근하지만 매번 다른 정보를 찾는다. 정교한 데이터베이스 질의어 인터페이스를 사용하여 데이터를 요구하며, 대개 중상급의 관리자이다.

        + naive / parametric end user : 초보 사용자

            최종 사용자의 대부분을 차지. 미리 잘 만들어진 canned transaction들을 사용한다.

        + sophisticated end user : 전문 사용자

            복잡한 요구사항을 가진 엔지니어, 과학자, 비즈니스 분석가 등, DBMS의 고급 기능을 이용해 응용 프로그램을 구현

        + stand-alone end user : 독자적인 사용자

            메뉴나 그래픽 사용자 인터페이스를 제공하는 편리한 패키지를 사용하여 개인 데이터베이스를 유지하는 사용자.

    - 시스템 분석가 및 응용 프로그래머(소프트웨어 공학자)

* DBMS의 장점 - 1.6절 (기록 or not?)

~ 1.6 이후 기록해야됨

* data model

    데이터베이서의 구조를 명시하기 위해 사용할 수 있는 개념들의 집합. data abstraction을 달성하기 위해 필요한 수단을 제공한다. 대부분의 데이터 모델은 데이터베이스에서 검색과 갱신을 수행하는 기본 연산들의 집합을 포함한다.

    기본 연산들 외에 데이터베이스 응용의 동적 측면 또는 행동(behavior)을 명시하기 위한 개념들을 데이터 모델에 포함하는 것이 점차 일반화 되고있다.

* 저수준 / 물리적 데이터 모델

    어떻게 데이터가 컴퓨터의 저장 장치(특히, 하드디스크)에 저장되는지에 대한 세부 사항을 명시하는 개념을 제공

* conceptual data model : 고수준 / 개념적 데이터 모델

    많은 사용자들이 데이터를 인식하는 방식에 대한 개념을 제공. entity, attribute, relationship과 같은 개념을 사용.

    대표적인 conceptual data model : Entity-Relationship model

* 표현 / 구현 데이터 모델, 레코드 기반 데이터 모델 : record-based data model

    고수준 모델과 저수준 모델 사이에 존재. 일반 일반 사용자들이 쉽게 이해할 수 있는 개념을 제공하지만, 데이터가 구성되는 방식과 완전히 무관하지는 않다.

    - legacy data model
    
        + network model
        + hierarchical model

    - relational model : 관계 모델

* self-describing data model : 자기 기술성 데이터 모델

    데이터에 대한 기술(설명)과 데이터 값 자체를 결합하여 저장.

    ex) NOSQL system, XML 등

* database schema - intension

    데이터베이스의 description(기술). 데이터베이스 설계 과정에서 명시하며 자주 변경되지 않는다. 대부분의 데이터 모델은 도식적으로 스키마를 나타내는 표기법을 갖는다.

    - schema diagram

        도식화된 스키마. record들의 실제 instance는 표시하지 않고 각 record type의 구조를 나타낸다.

    - schema construct

        스키마의 각 object

* database state / snapshot - extension

    어떤 특정 시점에 데이터베이스에 들어있는 데이터. 데이터베이스 내의 occurence/instance들의 현재 집합

* schema evolution

    응용 프로그램의 요구사항에 따라 가끔씩 schema가 변할 필요가 생기는데, 이러한 스키마의 변화. 대부분의 DBMS들은 이에 필요한 연산을 DB 운영중에도 실행할 수 있도록 지원한다.


~ 2.2 부터 기록해야됨

* entity : 엔티티

    실세계에서 독립적으로 존재하는 실체. 실제로 존재하는 객체이거나(ex. 사람, 집 등) 개념적으로 존재하는 객체(ex. 회사, 직업 등). 자신을 기술하는 속성 attribute들을 가진다.

* attribute : 애트리뷰트, 속성

    엔티티를 기술하는 속성으로 각 엔티티를 설명하는 애트리뷰트 값들은 데이터베이스에 저장되는 데이터의 주요 부분이다.

* composite attribute : 복합 애트리뷰트

    더 작은 구성요소로 나눌 수 있는 애트리뷰트, 각 구성요소는 그 자체로 독립적인 의미를 가진 기본적인 애트리뷰트를 나타낸다. 계층을 형성할 수 있다.

* simple / atomic attribute : 단순 / 원자 애트리뷰트

    더 이상 나눌 수 없는 애트리뷰트

* multivalued attribute : 다치 애트리뷰트 ( <-> single valued attributle )

    한 엔티티에서 여러 값을 가질 수 있는 애트리뷰트. 각 엔티티가 가질 수 있는 값의 개수를 제한하기 위해 하한과 상한의 범위를 가질 수 있다.

* derived attributte : 유도된 애트리뷰트

    stored attribute로부터 유도된 애트리뷰트

* null values

    엔티티의 특정 애트리뷰트에 대해 적용할 값이 없는 경우가 존재한다. 혹은 특정 애트리뷰트의 값을 모르는 경우도 존재한다. 전자에서는 null이 적용할 수 없음 이라는 의미로, 후자에서는 알려지지 않음 이라는 의미로 사용된다.

* complet attribute

    복합 애트리뷰트와 다치 애트리뷰트가 중첩된 애트리뷰트. 구성요소들을 쉼표로 분리.

    composite attribute : 소괄호 () 안에 애트리뷰트들을 그룹화

    multivalued attribute : 중괄호 {} 안에 애트리뷰트들을 나타냄

        example.
        { 
            Address_phone(
                {
                    Phone(
                        Area_code, Phone_number
                    ) 
                },
                Addres( 
                    Street_address(
                        Number, Street, Apartment_number
                    )
                    , City, State, Zip
                )
            )
        }

* entitiy type

    동일한 attribute들을 갖는 엔티티들의 집합. 이름과 애트리뷰트들의 리스트로 기술

* entity set

    데이터베이스 내의 특정 엔티티 타입의 모든 엔티티의 모임. 엔티티 타입과 같은 이름을 사용하여 부른다.

* key attribute

    각 엔티티마다 서로 다른 값을 가지는 한 개 이상의 애트리뷰트. 각 엔티티를 유일하게 식별하는데 사용될 수 있다. ER 다이어그램에서 밑줄을 그어 표시

* value set / domain : 값집합

    각 엔티티에서 해당 애트리뷰트가 가질 수 있는 값들의 집합

* relationship type : 관계 타입

    n개의 엔티티 타입 E1, E2, ... , En 사이에서 관계 타입 R은 이들 엔티티 타입들에 속하는 엔티티들 간의 association들의 집합(관계 집합)

* relationship set : 관계 집합

    관계 집합 R은 relationship instance r_i들의 집합. 각 r_i는 엔티티들을 연관시키고, 각 엔티티는 엔티티 타입 집합의 원소이다.

* degree : 차수

    참여하고 있는 엔티티 타입들의 개수. 차수가 2인 관계 타입 - binary / 차수가 3인 관계 타입 - ternary. 일반적으로 관계들의 차수에는 제한이 없으나 가장 흔한 것은 binary

---
* role name : 역할 이름

* recursive / self-referencing relationship : 순환적 / 자기참조 관계

* constraint : 제약 조건

* structual constraint : 구조적 제약 조건
    
    - cadinality ratio

        1:1, 1:N, N:1, M:N

    - participation : 참여

        total : 전체참여 , partial : 부분참여

        +  existence dependency : 존재 종속성

            total participation과 같다.

---

* relational model constraint 

* uniqueness constraint : 유일성 제약 조건

    같은 값을 가지는 서로 다른 tuple이 존재하지 않는다.

* uniqueness property : 유일성 성질

    모든 relation은 적어도 하나의 superkey를 갖는다.

* superkey : 슈퍼키

    Relation schema R의 Relation state r의 어떤 두 tuple도 서로 다른 값을 갖는 attribute들의 부분 집합. 서로 다른 두 tuple은 동일한 key attribute 값을 가질 수 없다.

* key : 키

    최소의 슈퍼키(minimal superkey)이다. key는 superkey이지만, superkey는 key가 아닐 수 있다.

* candidate key : 후보키

    일반적으로 relation schema는 하나 이상의 키를 가질 수 있는데, 이 경우 각 키를 후보키라고 한다.

* prime attribute

    cadidate key의 member attribute

* primary key , PK : 기본키

    tuple들을 식별할 수 있는 후보키이다. 어떤 relation schema가 여러 개의 candidate key를 가질 때 primary key를 임의로 선택할 수 있다. 하나 또는 적은 수 의 attribute를 가진 primary key를 선택하는 것이 좋다. 밑줄을 그어 표시한다.

* secondary key : 보조키

    candidate key들 중 primary key를 제외한 나머지 key들

* unique key : 유일키

    primary key가 아닌 다른 candidate key

* foreign key , FK : 외래키

    relation schema R1과 R2에서 R2의 기본키 PK일 때, R1의 어떤 attribute의 집합 FK가 다음 규칙을 만족하면, FK는 relation R2를 reference(참조)하는 R1의 외래키
    
        1. FK의 attribute는 PK의 attribute와 동일한 도메인을 가진다.
        == FK는 relation R2를 reference(참조)한다.
        2. r1의 한 tuple t1 내의 FK 값은 r2의 어떤 tuple t2 내의 PK 값과 일치하거나 NULL 값을 가져야 한다. 일치하는 경우 t1이 t2를 reference(참조)한다.

    R1 : referencing(참조한) relation, R2 : referenced(참조된) relation  
    r1 : R1의 current state, r2 : R2의 current state

* DDL , Data Definition Language : 데이터 정의어

* integrity constraint : 무결성 제약 조건

    * entity integrity constraint : 엔티티 무결성 제약 조건
        
        어떤 기본키 값도 NULL 값이 될 수 없다.

    * referential integrity constraint : 참조 무결성 제약 조건

        한 relation에 있는 tuple이 다른 relation에 있는 tuple을 reference하려면 반드시 reference되는 tuple이 그 relation 내에 존재해야 한다.

        foreign key의 두 조건을 만족하면 R1에서 R2로의 referential integrity constraint를 만족한다.

    * semantic integrity constraint : 의미적 무결성 제약 조건

        class의 제약조건들, DDL의 일부가 아니고 다른 방법으로 명시되고 지켜져야 한다. 
        
            ex) '사원의 급여는 그의 상사의 급여를 초과해서는 안된다' or '한 사원이 주당 모든 프로젝트에서 일할 수 있는 시간은 최대 56시간이다'
        
        응용 프로그램 내에서(더 일반적) or 범용의 constraint specification lagnuage를 사용하여 정의하고 따른다.

        trigger와 assertion이라 부르는 기법이 사용
    
            ex) SQL의 CREATE ASSERTION, CREATE TRIGGER 문장

* constraint specification language : 제약 조건 명세 언어

* invalid state / valid state : 유효하지 않은 상태 / 유효한 상태

    integrity constraint를 준수하지 않는 database state / integrity constraint를 준수하는 database state

* statement : 서술문

* state constraint (static constraint) : 상태 제약 조건

    database의 valid state가 만족해야 하는 constraint, integrity constraint & key constraint & domain constraint

* transition constraint (dynamic constraint) : 전이 제약 조건

    database 내의 state 변화를 다루기 위해 정의된다.
    
        ex) '사원의 임금은 항상 증가한다'
    
    대체적으로 응용 프로그램에 의해 시행, 능동 규칙과 trigger를 사용해 명시

* operation of relational model : 관계 모델의 연산

    * retrieval : 추출

    * update : 갱신

        데이터베이스 relation의 상태를 변화시킨다. integrity constraint를 위반하지 않아야 한다.

            1. insert : 삽입
            2. delete : 삭제
            3. update or modify : 갱신 or 수정

* relational calculus : 관계 해석

    연산의 순서를 명시하지 않고 새로운 relation을 선언적으로 정의하는데 사용

* transaction : 트랜잭션

    database로부터 read, insert, delete or update 등과 같은 database operation을 수행하는 프로그램. 명세화된 모든 constraint들을 만족하는 타당한 state로 수행을 마쳐야한다.

* OLTP : 온라인 트랜젝션 프로세싱 시스템
