#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

#pragma region 상수
/**
▷ 상수란?
변수와 달리 저장된 데이터를 변경할 수 없는 공간에 붙여진 이름을 의미
상수는 한 번 데이터가 저장되고 나면 변경한느 것이 일반적으론 불가능 하다.

회사도 잘 알고 있는
문자 + 문자열과 같이 신입의 무덤 파트

▷ c/c++ 상수의 종류
리터럴 상수 (이름이 없는 상수 -> 임시 값이라고 지칭)
심볼릭 상수 (이름이 존재하는 상수 -> const)
const 키워드를 통해 선언이 가능하고 리터털 상수와 달리 이름을 통해서 안에 저장되어 있는 데이터를 읽어 들이는 것이 가능

※ 클래스 수업 중에 강의 예정
▷ constexpr
▷ readonly

▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷
 */
#pragma endregion 상수

void main()
{
	cout << "리터러 상수" << endl;
	cout << "정수헝: " << 10 << ", " << 10L << ", " << 10LL << endl;
	cout << "실수헝: " << 3.14F << ", " << 3.14 << endl;
	cout << "문자형: " << 'A' << endl;
	cout << '\n';

	// 변/상수는 생성과 동시에 값을 대임하는 것이 가능하다. -> 이걸 초기화
	// 변수는 살당이 가능하지만 상수는 할당이 불가능하다.

	cout << "심볼릭 상수" << endl;
	const int nValueA = 0;
	const float fValueA = 3.14F;
	const double dbValueA = 3.14;

	cout << "출력 값: " << nValueA << ", " << fValueA << ", " << dbValueA << endl;
	printf("%d, %f, %lf\n", nValueA, fValueA, dbValueA);

	// 1. 둘의 차이는 없다.
	const int cNumberA = 100;
	int const cNumberB = 100;

	int pNum1 = 100;
	int pNum2 = 200;

	// 2.
	const int* cNumberC = &pNum1;

	// 3.
	int* const cNumberD = &pNum1;

	// 4.
	const int* const cNumberE = &pNum1;

	(cNumberC)++;
	(*cNumberD)++;
}

