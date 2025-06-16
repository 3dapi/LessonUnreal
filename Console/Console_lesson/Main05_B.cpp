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
특정 영역에서만 접근이 가능한 변/상수지만 지역 변수와는 달리 해당 변수의 값이 항상 유지되는 변/상수

정적 글로벌 (글로벌)
전역 변수와 달리 해당 변/상수가 선언 된 파일에서만 접근이 가능한 변/상수




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
	//for(int i=0; i<10; ++i)
	//{
	//	i += 100;
	//}
	//i += 100;

	int value = 0;
	cout << "정수 입력: " << endl;
	cin >> value;
	cout << '\n';
	
	//10?
	cout << "값 증가 " << endl;
	//?
	IncreaseValue(value);
	//?
	IncreaseValue(value);

	cout << "변수 (전역)의 값(" << g_value << endl;
	cout << '\n';
	//--------------------------------------------------------------
	//?
	DecreaseValue(value);
	//?
	DecreaseValue(value);

	cout << "변수 (전역)의 값(" << g_value << endl;
	cout << '\n';

	{
		int value = 0;
		int g_constValue = 0;

		value = 100;
		g_constValue = 200;
	}
	cout << "값: " << value << endl;
	cout << "전역 값: " << g_constValue << endl;
	cout << '\n';
}

void IncreaseValue(int value)
{
	int localValue = 0;
	g_value += value;
	localValue += value;
	cout << "값 증가 지역 변수: " << localValue << endl;
}

void DecreaseValue(int value)
{
	// 함수 내에서 선언된 static
	static int localValue = 0;
	g_value -= value;
	localValue -= value;
	cout << "값 감가 지역 변수: " << localValue << endl;

	// 정적 변/상수는 특정에서만 접근이 가능한 지역 변수의 특성과 프로그램이 종료될 때까지 사라지지 않는 전역 변수의 즉징을 모두 지닌다.
	// 이러한 특성 때문에 정적 변/상수를 선언하는 해당 코드는 해당 영역이 실행되는 그 첫 순간에만 유효하다는 것을 알 수 있다.
}


#pragma region 과제
/**
과제01. 가위 바위 보
- switch 문을 이용해 만든다.
-치트 기능과 배팅 기능 추가
 초기 소지금: 10,000

- 최소 배팅은 1,000부터 가능
- 5판을 하거나 내가 가진 돈을 전부 잃으면 게임 종료
-이기면 판돈에 x3배를 얻고 지면 판돈에 x7을 잃는다.
비길 경우에는 판돈에 x5배를 얻도록 만들어 올것

과제02. 숫자 야구

- 배열 X
- 컴퓨터가 뽑은 숫자를 플레이어가 임의의 숫자 3개를 선택하여 숫자와 자릿수를 맞추는 게임
-내가 선택한 숫자가 컴퓨터 숫자와 같으나 자릿수가 다르다
-1B

-내가 선택한 숫자가 컴퓨터 숫자와 같고 자릿수가 같으면
-1S

-내가 선택한 숫자가 해당되는 숫자에 없을 때
-1Out

- 치트키 필수

타임 어택. 가위바위보 (if)
주어진 시간 안에 가위바위보 로직을 작성 후 실행하여 정상 동작하면 OK
반에서 2명이상 실패 시 매 과제 마다 타임 어택 자동으로 추가 된다.
또한 성공을 못한 인원은 2x 못한 인원 수 -> 깜지 당첨.

한줄 조사: 배열
-노트에 적어올것.
-비유할 것 생각해 온다.
ex) 배열은 000이다.
 */

#pragma endregion 상수
