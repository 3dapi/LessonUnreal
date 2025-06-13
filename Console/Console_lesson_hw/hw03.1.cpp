#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region 과제
/**
과제 01. 연산자 활용
a. 두 개의 정술르 받아 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성
b. 3개의 정수 num, num2, num3 를 받아 다음 연산의 결과를 출력하는 프로그램 작성
(num1+num2) * (num3 + num1) % num1 = ?
c. 입력받은 두 정수를 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성
7과 2가 인풋 -> 묷으로 3/ 나머지 1이 출력 되면 OK

*****
****
***
**
* 
**
***
****
*****

과제 02. 반복문 숙달 (별찍기)
       *
while *** for
     *****
    *******
     *****
while *** for
       *

도전 과제. for문 한줄로
	   *
      ***
	 *****
	*******
	 *****
      ***
	   *


조건문 조사
노트에 적어 온다.
*/


#pragma endregion 과제

#pragma region USING_STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING_STD

void main()
{
	cout << "\n과제01. 연산자 활용\n";
	cout << "a. 두 개의 정수를 받아 두 수의 덧샘과 뺌샘의 결과를 출력하는 프로그램 작성\n";
	cout << "두 수가 0이면 프로그램 종료 입니다.\n";
	int valueA = 0;
	int valueB = 0;
	cout << "연산할 첫 번째 숫자를 입력하세요.\n";
	cin >> valueA;
	cout << "연산할 두 번째 숫자를 입력하세요.\n";
	cin >> valueB;

	while(valueA && valueB)
	{
		int resultAdd = valueA + valueB;
		int resultSub = valueA - valueB;
		printf("덧셈: %d + %d = %d, 뺄셈: %d - %d = %d\n\n"
			, valueA, valueB, resultAdd
			, valueA, valueB, resultSub);
		cout << "연산할 첫 번째 숫자를 입력하세요.\n";
		cin >> valueA;
		cout << "연산할 두 번째 숫자를 입력하세요.\n";
		cin >> valueA;
	}
	cout << "과제01.a 끝!!\n";

	cout << "b. 3개의 정수 num,num2,num3 를 받아 다음 연산의 결과를 출력하는 프로그램 작성\n";
	cout << "(num1+num2)* (num3 + num1) % num1 = ?\n";
	cout << "첫 번째 수가 0이면 프로그램 종료 입니다.\n";
	int nNum1 = 0;
	int nNum2 = 0;
	int nNum3 = 0;
	cout << "연산할 첫 번째 숫자를 입력하세요.\n";	cin >> nNum1;
	cout << "연산할 두 번째 숫자를 입력하세요.\n";	cin >> nNum2;
	cout << "연산할 세 번째 숫자를 입력하세요.\n";	cin >> nNum3;

	while(nNum1)
	{
		int result = (nNum1 + nNum2) * (nNum3 + nNum1) % nNum1;
		printf("(%d + %d) * (%d + %d) %% %d = %d\n\n"
				, nNum1, nNum2, nNum3, nNum1, nNum1, result);
		cout << "첫 번째 수가 0이면 프로그램 종료 입니다.\n";
		cout << "연산할 첫 번째 숫자를 입력하세요.\n";	cin >> nNum1;
		cout << "연산할 두 번째 숫자를 입력하세요.\n";	cin >> nNum2;
		cout << "연산할 세 번째 숫자를 입력하세요.\n";	cin >> nNum3;
	}
	cout << "과제01.b 끝!!\n";
}
