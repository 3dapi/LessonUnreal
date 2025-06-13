#include <iostream>
#include <time.h>
#include <Windows.h>

#pragma region USING_STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING_STD

#pragma region 과제
/**
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
*/
#pragma endregion 과제

// 게임 프로그램 메인
void GameMain();
// 게임 플레이 메인
void GamePlay();
// 가위, 바위, 보 승무패 결정.
void DecidePlay(int* comValue,int* myValue, int* myWin,int* myEqual,int* myLose);

//(EP)
void main()
{
	GameMain();
}

// show cheat
bool showCheat = true;
// play max number
int maxPlay = 5;

void GameMain()
{
	srand(time(NULL));
	cout << "함수와 포인터를 활용한 가위바위보 구현" << endl;
	cout << "가위 바위 보 게임을 시작합니다. 총 " << maxPlay << " 판 진행합니다." << endl;
	GamePlay();
}

void GamePlay()
{
	int comValue = 0;
	int myValue = 0;
	int myWin = 0;
	int myEqual = 0;
	int myLose = 0;
	while(0 < maxPlay--)
	{
		comValue = 1+ rand() % 3;
		if(showCheat)
		{
			cout << "치트: 컴퓨터:" << comValue << endl;
		}
		cout << "가위 바위 보를 입력 하세요. 가위: 1, 바위: 2, 보: 3" << endl;
		cin >> myValue;
		DecidePlay(&comValue,&myValue,&myWin,&myEqual,&myLose);
	}
	cout << myWin << " 승 " << myEqual << " 무 " << myLose << " 패" << endl;
	// 3승 이상만 승리로 한다. 비기거나 진 것은 실패
	if(3 <= myWin)
	{
		cout << "승리 ^^/ !!!!!" << endl <<endl;
	}
	else
	{
		cout << "패배 -_- !!!!!" << endl <<endl;
	}
}

void DecidePlay(int* comValue, int* myValue, int* myWin, int* myEqual, int* myLose)
{
	if(*comValue == 1)			// 컴퓨터: 가위
	{
		if(*myValue == 1)		// 플레이어: 가위
		{
			cout << "비겼습니다." << endl;
			++(*myEqual);
		}
		else if(*myValue == 2)	// 플레이어: 바위
		{
			cout << "이겼습니다." << endl;
			++(*myWin);
		}
		else if(*myValue == 3)	// 플레이어: 보
		{
			cout << "졌습니다." << endl;
			++(*myLose);
		}
		else					// 플레이어: 다른 값. 패배로 처리
		{
			cout << "졌습니다." << endl;
			++(*myLose);
		}
	}
	else if(*comValue == 2)		// 컴퓨터: 바위
	{
		if(*myValue == 1)		// 플레이어: 가위
		{
			cout << "졌습니다." << endl;
			++(*myLose);
		}
		else if(*myValue == 2)	// 플레이어: 바위
		{
			cout << "비겼습니다." << endl;
			++(*myEqual);
		}
		else if(*myValue == 3)	// 플레이어: 보
		{
			cout << "이겼습니다." << endl;
			++(*myWin);
		}
		else					// 플레이어: 다른 값. 패배로 처리
		{
			cout << "졌습니다." << endl;
			++(*myLose);
		}
	}
	else						// 컴퓨터: 보
	{
		if(*myValue == 1)		// 플레이어: 가위
		{
			cout << "이겼습니다." << endl;
			++(*myWin);
		}
		else if(*myValue == 2)	// 플레이어: 바위
		{
			cout << "졌습니다." << endl;
			++(*myLose);
		}
		else if(*myValue == 3)	// 플레이어: 보
		{
			cout << "비겼습니다." << endl;
			++(*myEqual);
		}
		else					// 플레이어: 다른 값. 패배로 처리
		{
			cout << "졌습니다." << endl;
			++(*myLose);
		}
	}
	cout << '\n';
}
