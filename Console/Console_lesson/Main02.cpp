
#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

#pragma region 자료형 + 변수 선언
/**

▶ 자료형
- 변수의 종류를 의미하며 기초 자료형이라고 생각하면 된다.
ㄴ data type
* 변수란?
- 변할 수 있는 숫자나 데이터를 의미하고 컴퓨터로 하여금 값을 저장할 수 있는 메모리 공간에 붙는 이름
- 변술르 이용하면 특정 값을 저장 후 해당 값을 이용한 여러가지 연산을 처리하는 것이 가능하다.


▷ c/c++ 언어에서 지원하는 자료형
- 정수형: 소수점이 없는 수를 표현하기 위한 자료형
- 실수형: 소수점이 존재하는 수를 표현하기 위한 자료형
- 문자형: 문자를 표현하기 위한 자료형
- 논리형: T/F -> 참 / 거짓을 판별하는 자료형

▷ c/c++ 언어에서 지원하는 정수형 종류
- short			(2byte)
- int			(4byte)
- long			(4~8byte)
- long long		(8byte)

▷ c/c++ 언어에서 지원하는 실수형 종류
- float		(4byte)
- double	(8byte)

▷ c/c++ 언어에서 지원하는 문자형 종류
- char		(1byte)

▷ c/c++ 언어에서 지원하는 논리형 종류
- bool		(1byte -> 0(거짓) 1(참))

- c 언어는 노리형에 해당하는 자료형이 예전에는 별도로 존재하지 않았다.
ㄴ 때문에 언어 버전마다 일반적으로 정수 0을 거짓 / 0을 제외한 정수를 참으로 인지하기도 했다.

- c++ 언어는 참 또는 거짓을 나타내는 키워드를 추가함으로서ㅓ 효율적으로 표현하는 것이 가능하다.
ㄴ true / false


- c/c++ 자료형ㅇ은 기본적으로 음술르 표현하는 것이 가능하지만 경우에 따라서 음수를 표현하지 않는 대신
양수를 좀더 크게 표현을 하는 것이 가능하다. (ssigned / unsigned ( 음수X-> 양수만))

※ bool 자료형은 정수가 와야 할 위치에 오게 되면 각각 1 과 0으로 반환이 될 뿐 각각 정수 0/1 이 아니다
int -> 정수형: 1, 10, 100, 245
float -> 실수형: 1.2.3.5.6.7f, 0.234
bool -> 논리형: 0 (거짓) / 1(참)

▷자료형 크기
1. 정수형
자료형 타입				크기		범위
short					2byte		0~65535
unsigned short			2byte		-32768 ~ 32767
int						4byte		-2,147,483,648 ~ 2,147,483,647
unsigned int			4byte		약 43억
long					4byte		약 -21억 ~21억
unsigned long			4byte		약 43억
long long				8byte		-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
unsigned long long		8byte		0~18,446,744,073,709,551,615

2. 실수형
자료형 타입				크기		범위
float					4byte		일반적으로 소수점 6자리
double					8byte		일반적으로 소수점 15자리

3. 문자형
자료형 타입				크기		범위
char					1byte		-128~127	정수를 담는다. (문자)
unsigned char			1byte		0~255		양의 정수를 담는다 (문자)

4. 논리형
자료형 타입				크기		범위
bool					1byte		0 (f) / 1(t)

▷ 변수 선언(decleararation)
변수 선언이란? 
ㄴ 값을 저장할 수 있는 메모리 공간에 이름을 정의하는 것을 뜻한다.
기본 형식: 변수 형태(종류) 변수명

ex)
int num;
int num_2 = 20;
ㄴ 변수의 선언으로 num_2 라는 이름으로 "메모리" 공간이 할당

 */


#pragma endregion 자료형 + 변수 선언


namespace A
{
	namespace B
	{
		namespace C
		{
			int num;
		}
	}
}
namespace ABC = A::B::C;

int main()
{
	//INT64_MAX;
	// __ 비공식
	// __int64	//

	int num;
	A::B::C::num;
	ABC::num;

	int testNumA = true;
	int testNumB = false;
	int testResulst = testNumA  + testNumB;

	cout << "boolean: " << testResulst <<endl;
	cout <<endl;

	// 변수 초기화 방법

	int num0;

	// 선언과 동시 초기화
	int num1 = 3;
	int num2 = 6;
	int total;

	// 선언 이후 값 할당
	num0 = 10;

	int num3 = 100;
	int num4 = 100;
	int num5 = 100;

	int num6, num7, num8;
	num6 = num7 = 100;

	cout << "정수 1 사이즈: " << sizeof(1) << endl;
	cout << "정수 2 사이즈: " << sizeof(2) << endl;
	cout << "true 사이즈 : " << sizeof(true ) << endl;
	cout << "false 사이즈: " << sizeof(false) << endl;
	cout <<endl;

	int nValue = 0;
	// c++
	cout << "숫자 입력: " <<endl;
	cin >> nValue;
	cout << "숫자 입력: " << nValue << endl;
	cout <<endl;

	// c
	printf("숫자 입력: ");
	scanf_s("%d", &nValue);
	cout <<endl;

	short     valueA = 10;
	int       valueB = 210;
	long      valueC = 10;
	long long valueD = 10;
	float     fValue = 10;
	double    dbValue = 10;

	printf("C언어 short    : %d, %d,\n"  , valueA, sizeof(valueA));
	printf("C언어 int      : %d, %d,\n"  , valueB, sizeof(valueB));
	printf("C언어 long     : %ld,%d,\n"  , valueC, sizeof(valueC));
	printf("C언어 float    : %f, %d,\n"  , fValue, sizeof(fValue));
	printf("C언어 double   : %f, %d,\n"  , dbValue, sizeof(dbValue));
	cout << endl;

	cout << "C++ short    : " << valueA << ", 사이즈 " << sizeof(valueA) << endl;
	cout << "C++ int      : " << valueB << ", 사이즈 " << sizeof(valueB) << endl;
	cout << "C++ long     : " << valueC << ", 사이즈 " << sizeof(valueC) << endl;
	cout << "C++ long long: " << valueD << ", 사이즈 " << sizeof(valueD) << endl;
	cout << "C++ float    : " << fValue << ", 사이즈 " << sizeof(fValue) << endl;
	cout << "C++ double   : " << dbValue<< ", 사이즈 " << sizeof(dbValue) << endl;
	cout << endl;
	cout << '\n';
	cout << "\n";
	printf("\n");

	// \n과 endl 차이는?
	// 문자열을 다루지 않는 것이 더 좋다.

	/**
	▷ 변수 표기법(convention)
	한글, a,b,c 등 단순한 의미없는 이름, 제외

	1. 헝가리안(1)
	ㄴ 절차지향 방식에서 유용한 변수 표기법
	ㄴ 언리얼에서 사용
	ex)
	int num			->	nNum
	float valueA	->	fValueA
	double valueB	->	dbValueB
	char letter		->	chLetter

	2. 카멜(베이스)
	ㄴ 객체지향적 방식의 코딩으로 바뀌면서 가독성을 살린 표기법
	ex)
	int playerselectnumber	->	playerSelectNumber

	3. 파스칼 케이스(쓰지 말자)
	PlayerSelectNumber

	4. 스네이크(쓰지 말자)
	playerselectnumber	->	player_select_Number
	 */

	return 0;
}

