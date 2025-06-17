#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
using namespace std;

#pragma region 6일차 전처리기
/**
▷전처리기
실행 파일을 생성하는 과정에서 컴파일하기 직전, 소스 파일 내에 존재하는 선행 처리 지시문을 처리하는 작업을 의미한다.
전처리기가 실행되면 각 코드 파일에서 지시자를 찾는다.
#으로 시작해서 줄 바꿈으로 끝나는 코드

선행 처리를 위한 명령에는 맨 앞에 #기호가 붙는다는 공통점이 있다.

 
▷ c/c++ 코드를 실행하는 과정
전처리기 -> 컴파일러 -> 어셈블러 -> 링커

1. 전처리기: 헤더 파일 삽입, 코드의 주석 제거, 문법 검토, 매크로 치환
 
2. 컴파일러: 어셈블리어 파일로 변환한다.

3. 어셈블러: 어셈블리 코드를 기계어로 변환하여 오브젝트 파일로 생성

4. 링커: 각각의 오브젝트 파일을 묶어서 실행 코드 파일로 변환한다.

소 -> 바 -> 실

▷ 선행 처리를 위한 명령
전처리문 = 전처리기 연산자
파일 처리를 위한 전처리문

1. #include
  #include <파일이름> -> 미리 정의된 include 폴더에서 파일을 찾는다.
  #include "파일이름" -> 현재의 소스 코드가 저장되어 있는 폴더에서 먼저 찾고 -> 없다면 미리 정의 된 include 폴더에서 찾는다.

형태 정의를 위한 전처리문

1. #define 키워드는 매크로 상수 또는 매크로 함수를 정의하는 역할을 한다.

2. #undef
정의한 매크로를 해제하는 용도

조건부 컴파일을 위한 전처리문
1. #if, #ifdef, #ifndef, #else, #elif, #endif
#ifdef 매크로명
-코드

#endif

2. #pragma 
컴파일러 기능 확장 문법 -> 주로 어떤 동작을 정해주기 위해 사용한다.
컴파일러 버전에 따라 동작성이 유동적
OS에도 영향을 받는다. -> 윈도우 != 리눅스
ex)
#pragma once

#pragma region
#pragma endregion

#pragma message("메시지 입니다")

매크로 상수를 정의할 때 주의점
1. #define 문은 코드를 생성하는 명령이 아니며 매크로의 이름도 일종의 명칭이기 때문에 명치 규약에 따라야 한다.
매크로 이름에는 공백이 들어갈 수 없지만 매크로 실제 값을 공백을 가질 수 있다.
ex: #define MESSAGE "똑바로 합시다."

2. 문자열 상수 내에 있는 ㅁ크로나 다른 명칭의 일부로 포함된 경우는 치환되지 않는다.
ex) #define NUM 5   -> NUM을 찾아 5로 치환

3. 매크로는 중첩이 가능하다.
ex) #define A 3
 #define B ( A * 3)

 4. 또한 값을 가지지 않는 매크로도 정의가 가능하다.
 매크로 상수 자체만 존재할 뿐이다. (EX: #define ABC)

 5. 매크로 상수는 단순히 컴파일 전에 코드를 튜닝하기 위한 전처리기에 의해서 처리되는 상수 이기 때문에 컴파일러 입장에서는
 리터럴 상수와 동일 시 된다. -> 이는 곧 컴파일러는 매크로 상수의 존재를 알지 못한다.


▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷
 */

#pragma endregion 6일차 전처리기


// 매크로 표기법
// 모두 대문자. 단어 분리는 _로

#define EXAMPLE_1 1
#define EXAMPLE_2 1

#undef EXAMPLE_2
#define EXAMPLE_2 2

#define TRUE	1
#define FALSE	0

// 매크로 함수
#define ADD(a) ((a) *(a))

void GetMultipleVale(int numA);


#pragma message("TODO: 수정할 코드 입니다")
void main()
{
	cout << ADD(5) << endl;
	GetMultipleVale(5);
}

void GetMultipleVale(int numA)
{
	cout << numA * numA << endl;
}
