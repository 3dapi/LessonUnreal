#include <iostream>
// string: 메모리 블록이나 문자열을 다룰 수 있는 함수들을 포함(STL)
// 유니코드  -> wchar.h

#include <string>
#include <time.h>
#include <Windows.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
- 14시까지 -
일주차 과제 제출
01. 메일로 제출(star_marker@naver.com)
02. 메일 내용에 특이 사항 기입

- 양식
메일 제목: 언리얼 1기_콘솔 1주차 과제_이름.zip
압축 파일명: 언리얼 1기_콘솔 1주차 과제_이름.zip
메일 내용: 특이 사항 기입

실행이 되게 보낸다.
용량 최적화 해서 보낼 것
 */


#pragma region 5일차 함수
/**
▷함수
구조적 프로그래밍에 선봉 (대표 문법)
함수의 비유는 일반적으로 음료수 자판기라고 많이들 이야기 한다.

▷ 함수 사용 이유
중복 로직 제거
관리 용이함
가독성 향상
편리성 또한 챙길 수 있다.

함수를 선언하 방법
ex)
[반환] [자료형] [함수 이름] ([입력 자료형 (인자)])
{ <- 함수 시작
	함수 내용

} <- 함수 끝


-설명
함수 이름: 말 그대로 함수의 이름 (함수를 실행할 때 사용이 된다.)
인수(인자); 함수가 해야 할 일의 세부 사항을 지정하여 함수의 작업거리라고 할 수 있다.
반환 자료형: 함수가 반환하는 값의 데이터 형이며 함수의 작업 결과
함수 내용: {} 안에 함수의 실제 코드가 존재

함수의 이름은 기본적으로 유일해야 한다
동일한 이름의 함수를 N개 이상 선언하는 것은 불가능 하다.

▷ void형 함수란?
반환할 값이 없는 함수
삼수의 입력 또는 출력이 없을 경우 void 키워드를 통해서 해당 입/출력이 없다라는 것을 명시하자.

우리가 알게 모르게 사용한 것들
rand(): 랜덤 값을 뽑는 함수
Sleep(1000): 1초간 몸추게 만드는 함수

함수 선언은 기본적으로 메인 함수 윗쪽에 선언한다.

c/c++ 언어의 함수 선언이 필요한 이유
-컴파일러의 특성
기본적으로 파일의 내용을 위에서 아래로 해석
이 때 컴파일러가 이미 지나친 라인에서 포함되어 있지 않은 함수를 호출 할 경우 컴파일러가 이에 대한 내용을 모르기때문에
에러가 발생한다.
그렇기 때문에 함수의 선언을 통해서 컴파일러에게 해당 함수가 파일 어딘가에 존재한다는 여부를 알려야 한다.
즉, 함수의 선언과 정의가 반드시 동일한 파일에 존재하지 않아도 된다는 것을 의미
또한 함수의 선언은 중복으로 명시하는 것이 가능하지만 함수의 정의는 반드시 유일해야 한다.



▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷
 */
#pragma endregion 5일차 함수


// 함수 선언
void outputValueA();
void outputValueB(int numA);
void outputValueC(int numA, int numB);

void outputString(string str);
string GetStringFunc(string strA, string strB);
int  checkingString(string strA, string strB);

int getAddValue(int numA, int numB);
int getSubValue(int numA, int numB);
int getMultipleValue(int numA, int numB);
float getDivideValue(int numA, int numB);


// 반환 자료형 함수 이름
void main()
{
	outputValueA();
	outputValueB(5);
	outputValueC(1, 9);
	outputString("과제가 너무 쉽다");

	int nResultA = getAddValue(18, 25);
	outputValueB(nResultA);

	string sResultB = GetStringFunc("쉽다", "쉬워");
	outputString(sResultB);

	nResultA = checkingString("재밌는 과제", "재밌는 과제");
	outputValueB(nResultA);

	int numL = 0;
	int numR = 0;
	cout << "정수(2개) 입력: " << endl;
	cin >> numL >> numR;
	printf("%d + %d = %d\n", numL, numR, getAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, getSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, getMultipleValue(numL, numR));
	printf("%d / %d = %f\n", numL, numR, getDivideValue(numL, numR));


	/**
	함수 유형
	함수는 다양한 유형을 가지고 있다.
	입력 O, 출력 O
	입력 O, 출력 X
	입력 X, 출력 O
	입력 X, 출력 x

	ex);
	void ShowInfo(int nAge, char psName);
	int GetRandomVaule(void);
	void SomeFunction(void);
	 */
}

void outputValueA()
{
	cout << "내가 바로 함수다" << endl;
}

void outputValueB(int numA)
{
	cout << numA << endl;

}
void outputValueC(int numA, int numB)
{
	cout << numA << numB << endl;
}

void outputString(string str)
{
	cout << "str :" << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	// 함수는 return 키워드를 통해 함수의 종료 또는 결과 값을 반환하는 것이 가능하다.
	// 함수의 결과 값은 입력과는 달리 하나의 결과만을 "일반적"으로 반환한다
	return strA.append(strB);
	return strA + strB;
}

int  checkingString(string strA, string strB)
{
	return strA == strB;
}

int getAddValue(int numA, int numB)
{
	return numA + numB;
}

int getSubValue(int numA, int numB)
{
	return numA - numB;
}

int getMultipleValue(int numA, int numB)
{
	return numA * numB;
}

float getDivideValue(int numA, int numB)
{
	return numA / (float)numB;
}


