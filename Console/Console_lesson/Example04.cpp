//▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷
#include <iostream>
#include <time.h>
//Sleep()을 사용하기 위해
// Sleep(1000): 1초 동안 멈춘다
// Sleep(500) : 0.5초 동안 멈춘다
#include <Windows.h>

#pragma region USING STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING STD

#pragma region 연습04

/**
up / down 게임

1. 복사 수행
표준 lib

2. 사이클
지역 구분

3. 묶는다
접근성/효율

4. 필요한 변수 선언
내가 만들려고 하는 로직 기준

5. 필요하는 변수 선언 했으면
필요에 따라 초기화
진행과정에서 할당

6. 반복

7. 로직
판정

8. 프로그램 종료
방안

*/
#pragma endregion 연습 04

// 접근성 좋으나 메모리 효율이 안좋음.
int number = 100;

void main()
{
	// 접근성 로컬
	int number = 100;
	srand(time(NULL));

	int comNumber;
	int myNumber;

	comNumber = rand() %100 + 1;
	cout << "치트: " << comNumber << endl;
	while(true)
	{
		cout << "업다운 게임 시작" << endl;
		cout << "0~100까지 숫자 중 하나를 선택하시오." <<endl;
		cin >> myNumber;
		Sleep(1000);

		if(myNumber == comNumber)
		{
			cout << "== 찾았다 == " <<endl;
			Sleep(3000);
			system("cls");
			break;
		}
		else if(myNumber > comNumber)
		{
			cout << "- 더 작은 수를 생각해 보시오." << endl;
		}
		else
		{
			cout << "- 더 큰 수를 생각해 보시오." << endl;
		}
	}
	cout << "프로그램 종료\n";
}

// 접근성 최악
//int number = 100;


/**
과제01. 가위 바위 보 게임
if문을 이용해 만든다.
	스위치 문은 사용하지 않는다
게임의 진행 횟수는 총 5판
	이후에는 게임 종료
필수:치트

과제02. 반복문 숙달
정수 하나를 입력받아 -5씩 반복적으로 연산되는 식을 만든다.
종료 조건: -15를 넘어가면 탈출
조건: 입력 받은 값은 -10~10 사이의 숫자여야 하고 이외의 값 입력 시 프로그램 종료
while문 + do~while문 두 가지 버전으로 만들어 올 것

과제03.일 수 출력기
if or switch 중에 본인이 판단해 효율 적인 것을 선택
시작 하면 사용자의 입력을 받고 입력한 숫자에 따라 ?? 일 인지 출력
1월부터 12월까지 확인이 가능해야 하고 이외의 숫자는 예외 처리
총 5번을 입력하면 프로그램 종료

도전과제1. 함수와 포인터를 활용한 가위바위보 구현
양식 수정 불가 -> 메인함수에서는 함수 호출 이외에 어떤 코드도 작성할 수 없다.
void Function(int*a, int**b, int***c)
{
	// 작성 내용
}

void main()
{
	Function(a, b, c...);
}


한 줄 조사. 함수
노트에 적어 온다
비유할 것을 생각해 온다.

 */