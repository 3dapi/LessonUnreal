#include <iostream>
#include <time.h>
#include <Windows.h>
using std::cin;
using std::cout;
using std::endl;

#pragma region 연산자
/**
▷ 연산자란?
프로그램이 동작할 때 정해져 있는 특정 역할을 수행한느 키워드를 연산자라고 한다.
연산자를 이용하면 다양한 프로그램 로직을 만들어 내는 것이 가능하다.

기본적인 연산자의 종류
산술 연산자
+
-
*
/ : 몫만 남기고 나머지 out
% : 나머지 남기고 몫 out

비교
num
num
num
num
num
num
num
num
num

num == num1 -> num이 num1과 같다.
num != num1 -> num이 num1과 같지 않다.
num <  num1 -> num이 num1보다 작다.
num >  num1 -> num이 num1보다 크다. 
num <= num1 -> num이 num1보다 작거나 같다. 
num >= num1 -> num이 num1보다 크거나 같다.

할당 연산자
=
+=
-=
*=
/=
%=

비트 연산자
- 왜 써야 하는가?
- peformance: 빠른 계산. 플래그 마스크

&
|
^
~
<<
>>

논리 연산자
bool num;
num				
num && num2 -> num과 num2 참이어야 실행
num || num2 -> num과 num2 둘 중에 하나만 참이면 실행
!num : 논리부정


형변환 연산자
(특정 DataType) 변수명
	int val = 0;
		(float)val

c/c++ 언어는 형변환 연산자를 이용하면 간단하게 해당 변수의 자료형을 변경하는 것이 가능

()로 이루어지는 형변환 연산자는 잠재적 리스크를 가지고 있기 때문에 사용할 때 주의가 필요하다.

강제 형변환 (명시적 형변환) -> 가독성면에서 문제가 발생한다.

☆☆☆☆☆
그렇기 때문에 안정성을 우선시 한다면 캐스팅 연산자를 사용한다.
static_cast<int>(obj) -> obj를 type로 바꾼다
dynamic_cast<int>(obj)
reinterpret_cast<int>(obj)


반복문
프로그램의 특정 부분을 일정 횟수 이상 반복해서 실행하기 위한 문법
반복적으로 발생되는 구간을 효율적으로 처리 가능 -> 편리함 + 효율성 수직 상승 / 퍼포먼스 이슈


c/c++ 반복문의 종류
for
while
do while

range for
for_each

		



*/
#pragma endregion 연산자

int main()
{
/**
▷ 변수 이름의 특징
기본적으로 변수의 이름은 알파벳, 숫자, _로 구성된다
한글을 사용할 수 있지만 X

c 언어는 대소문자를 구분하며 Num/num 은 다른 변수로 인식한다

1. 변수의 이름은 숫자로 시작할 수 없다.
2. 키워드도 변수 이름으로 사용할 수 없다.
3. 이름 사이에 공백 또한 삽입될 수 없다.
ex)
int Num0;
int Num1;
int _Num2;
int 6Num;
int Num0 look;
int bool;
▷
▷
▷
▷
▷
▷
▷
▷
 */
	// 랜덤시드 초기화
	srand(time(NULL));

	int numR;
	numR = rand() % 5;
	cout << numR << endl;


	int weaponA = 0;
	// 20 ~ 25
	weaponA = 20 + rand() % (5+1);
	cout  << "무기 데미지의 값: " << weaponA  << endl;

	RAND_MAX;



	/**
	01. for 문
	초기식
	조건식
	증감식

	for(초기식; 조건식; 증감식)
	{
		반복이 되는 문장
	}
	초기 값은 맨 처음에 한 번만 수행 되고 조건식이 참인 동안만 명령문을 반복 수행
	 */
	int i;
	for(i=0; i<10; ++i)
	{
		cout << "[ " << i << "] 번 째 for 문" <<endl;
	}
	cout <<'\n';

	int number = 0;
	for(;number<5; number++)
	{
		cout << "이건..? " << number << endl;
	}
	cout <<'\n';
	/**
	초기화 생략: for(; i<10 ; ++i)
	조건식 생략: for(i=1; ; ++i)
	모두  생략: for(; ; )				==> while문
	 */

	int j=1;
	for(int i=0; i<5; ++i)
	{
		cout << ++j << endl;
		cout << j++ << endl;
	}

	/**
	 반복문은 기본적으로 반복해서 실행하는 것이 가능하기 때문에 반복문에 안에 반복문을 넣는 것이 가능하다
	 이를 중첩 반복문이라고 부른다
	 편리함 + 효율성 수직 상승/ 퍼포먼스 이슈
	 */

	/*for(int i=2; i<10; ++i)
	{
		for(int j=1; j<10; ++j)
		{
			for (int k=0; k<10; ++k)
			{
				cout <<"[" << i << ", "<< j<< ", "<< k << "]" << endl;
			}
		}
	}*/
	for(int i=1; i<10; i +=3)
	{
		printf("%2d단,          %2d 단,         %2d단\n", i+0, i+1, i+2);
		for(int j=2; j<10; ++j)
		{
			printf("%2d x %2d = %3d, %2d x %2d = %3d, %2d x %2d = %3d\n", i+0, j+0, (i+0)*(j+0), i+1, j+0, (i+1)*(j+0), i+2, j+0, (i+2)*(j+0) );

			//printf(  "%2d x %2d = %3d", i+0, j+0, (i+0)*(j+0));
			//printf(", %2d x %2d = %3d", i+1, j+0, (i+1)*(j+0));
			//printf(", %2d x %2d = %3d", i+2, j+0, (i+2)*(j+0));
		}
		cout <<'\n';
	}


	/**
	 02. while
	 - 무한 (Loop)
	 - 반복 조건에 참이 들어갈 경우 무한 루프
	 - 조건이 참일 때만 동작
	 - 제어문으로 강제 거짓을 만드는 것이 가능
	 - while문은 특정 조건을 주고 그 조건을 만족하는 동안 특정 영역을 반복하는 구조
	 */

	int playerHP = 1000;
	while(playerHP>0)
	{
		int hit = 100;
		playerHP -= hit;
		cout << "체력: " << playerHP << endl;
	}
	cout << '\n';

	int numC = 0;
	while(numC < 5)
	{
		cout << "반복문 출력 " << endl;
		numC++;
	}
	cout << '\n';
	cout << "While문 구구단" <<endl;

	int valueA = 1;
	int valueB = 2;
	while(valueA <= 9)
	{
		valueB = 2;
		while(valueB <= 9)
		{
			printf("%2d x %2d = %3d, %2d x %2d = %3d, %2d x %2d = %3d\n", valueA+0, valueB+0, (valueA+0)*(valueB+0), valueA+1, valueB+0, (valueA+1)*(valueB+0), valueA+2, valueB+0, (valueA+2)*(valueB+0) );
			valueB++;
		}
		valueA +=3;
		cout << '\n';
	}
	/**
 
	03. do~while
	while 문가 차이점: 조건을 검사하는 시점이 다르다.
	일단 무조건 한 번 실행 후 while 문의 조건을 검사하여 do~while 문안의 문장을 실행 할 것인지 판다.
	do
	{
	}while(조건식);

	 */

	int numD = 0;
	do 
	{
		cout << "do while문 " <<endl;
		numD++;
	} while (numD < -1);
	cout <<'\n';

	do 
	{
		cout << "do while문 두번째" <<endl;
		numD++;
	} while (numD < 3);
	cout << '\n';

	int total=0, num = 0;
	do 
	{
		cout<< "숫자를 입력하시오." <<endl;
		cout << "입력 된 숫자는 모두 더하여 프로그램 종료를 누루면 결과 값을 출력한다."<< endl;
		cout << "0을 입력하면 종류" << endl;
		cin >> num;
		total += num;
	} while (num !=0);
	cout << "입력한 숫자의 합계: " << total << "이다. "<<endl;


	/**
	 while문과 do~while문
	 반복의 횟수가 정해져 있거나 특정할 수 있다면 while < -> do~while 문이 자연스럽게 바뀌지만
	 반목의 횟수가 정해져 있지 않고 언제 종료가 될 지 모른다면 고민이 필요하다.
	 */

	return 0;
}

