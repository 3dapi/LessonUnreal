#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>
using std::cin;
using std::cout;
using std::endl;
using std::string;

#pragma region 함수 + 변/상수 + 사이클
/**
▷ 변수와 상수 영역이란
변/상수 가 프로그램에서 걸쳐서 영향을 미칠 수 있는 범위를 의미한다
변/상수의 종류에 따라서 해당 변/상수에 접근할 수 있는 범위가 달라진다는 예기
바궈 말하면 서로 다른 영역에서만 유효한 동일한 이름을 지닌는 변/상수가 존재할 경우 각각 변/상수는 별개라는 의미

c/c++ 언어는 {}의 조합을 통해 특정 영역의 시작과 끝을 명시하는 것이 가능

▷ 종류
로컬 (지역)
  특정 영역에서만 접근이 가능한 변/상수
  ex) 멤버, 지역 등등...

글로벌 (전역)
  프로그램 전체에서 접근이 가능한 변/상수

정적 로컬 (지역)
정적 글로벌 (글로벌)




▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷
 */
#pragma endregion 상수

void IncreaseValue(int value);
void DecreaseValue(int value);


// 전역 공간
// 전역 변수에 선언된 static
//   선언된 파일 내에세 참조 허용
static int g_value = 0;
const int g_constValue = 0;

void main()
{
	//const int g_constValue = 0;
	for(int i=0; i<10; ++i)
	{

	}
	while(int i=100)
	{

	}
}

void IncreaseValue(int value)
{

}

void DecreaseValue(int value)
{
}

