#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region USING STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING STD

#pragma region 조건문

/**
04일차.

▷조건문이란
프로그램이 실행되는 동안 정해저 있는 경웨 수에 맞춰 서로 다른 결과를 도출하기 위한 문법
조건문을 이용하면 다양한 결과를 출력하는 프로그램을 작성하는 것이 가능하다.

c/c++ 조건문 종류
1. if~else
2. switch~case

▷if~else 조건문
조건적 실행 (조건에 따라 실행 유무)
조건을 만족하는 if문을 발견하면 나머지 if문을 건너뛴다
if~else 만나서 이루는 문자의 수는 둘이 아니라 하나이다.
if~else 문에서 조건의 만족 여부 검사는 위에서 아래로 절차지향적으로 진행이 된다.
조건이 만족되어 해당 블록을 실행하고 나면 마지막 else문까지도 건너뛰는 특성을 가지고 있다.
조건을 만족하지 못할 시 else 문이 실행되는 구조

ex)
if(조건식1)
{
	조건식1이 참이면 실행될 코드
}
else if(조건식2)
{
	조건식2이 참이면 실행될 코드
}
else if(조건식3)
{
	조건식3이 참이면 실행될 코드
}
else
{
	위 조건이 만족되지 않으면 실행 될 코드
}

============================================================================
if(조건식1)
{
}

if(조건식2)
{
}
if(조건식3)
{
}
else
{
	위 조건이 만족되지 않으면 실행 될 코드
}

▷ switch문
스위치문을 사용하는 경우는 일일이 조건별로 세팅을 해주기가 용이하기 때문에
상태변화/조건이 많은 경우에 사용하면 좋은 효율을 낼 수 있는 문법
if문과 매우 흡사하다는 특징이 있고 스위치문으로 작성이 되는 로직은  if~else 문으로 전부 대체가 가능하다

ex)
switch(dataType value)
{
	case 1:
	.
	.
	.
	default:
}

인자 값에는 int형/ char형이 올 수 있다.
대부분 int형을 많이 사용해서 사용하는 문법이 스위치

스위치문은 if~else 문과 달리 범위에 해당하는 조건을 줄 수 없을뿐더러 조건문으로 사용될 수 있는 자료형을 정수로 제한하
컴파일러 버전


▷ 제어문의 종류
1. return
조건문 일때는 다시 돌려 보낸다. /함수에서는 값을 반환하고 -> 초기화
2. continue
조전무일 떼는 연산을 하지 않고 뛰어 넘는다. /while문에선느 바로 이전 문장으로

3. break
while 문 같은 경우 while문을 빠져 나간다.
반복문을 탈출하는 용도로 사용이 된다.
break 유무에 따라 실행 결과가 완전히 바꾸기 때문에 주의가 필요하다

4. goto
점프문이라 불리며 goto에 라벨을 지정하면 중간에 있는 흐름을 무시하고 해당 라벨로 즉시 이동



▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷

 */
#pragma endregion 조건문

void main()
{
	int nOperator;
	cout << "숫자 입력: ";
	cin >> nOperator;
	if(nOperator == 0)
	{
		cout << "6월" << endl;
	}
	else if(nOperator == 1)
	{
		cout << "7월" << endl;
	}
	else
	{
		cout << "나머지 월" << endl;
	}
	cout << '\n';



}
