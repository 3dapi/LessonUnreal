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

// 게임 플레이어 입력값 유효 확인
bool IsvalidPlayerValue(int gameValue);

// 가위, 바위, 보 승무패 결정.
// 0: 패배, 1: 비김, 2: 승리
int DecidePlay(int comValue, int myValue);
// 가위, 바위, 보 승무패 메시지.
void DecidePlayMessage(int playResult);	// 0: 패배, 1: 비김, 2: 승리
// 게임플레이 결과 메시지.
void PlayEndMessage(int resultWin, int resultEqual, int resultLose);

//(EP)
void main()
{
	GameMain();
}

// play max number
int maxPlay = 5;

void GameMain()
{
	srand(time(NULL));
	cout << "함수와 포인터를 활용한 가위바위보 구현" << endl;
	cout << "가위 바위 보 게임을 시작합니다. 총 " << maxPlay << " 판 중에 " << (maxPlay/2) +1 << "판을 이겨야 승리합니다." << endl;
	GamePlay();
}

void GamePlay()
{
	int comValue = 0;
	int myValue = 0;
	int myWin = 0;
	int myEqual = 0;
	int myLose = 0;
	int cheatValue;
	cout << "치트 활성화 하려면 1 을 입력하세요" << endl;
	cin >> cheatValue;

	while (0 < maxPlay)
	{
		cout << '\n';
		comValue = 1 + rand() % 3;
		if (1 == cheatValue)
		{
			cout << "치트: 컴퓨터:" << comValue << endl;
		}
		cout << "가위 바위 보를 입력 하세요. 가위: 1, 바위: 2, 보: 3" << endl;
		cin >> myValue;
		if (!IsvalidPlayerValue(myValue))
		{
			cout << "유효하지 않은 가위 바위 보 입력 값입니다. " << endl;
			continue;
		}
		else
		{
			--maxPlay;
		}
		int playResult = DecidePlay(comValue, myValue);
		if (2 == playResult)
		{
			++myWin;
		}
		else if (1 == playResult)
		{
			++myEqual;
		}
		else
		{
			++myLose;
		}
		DecidePlayMessage(playResult);
	}
	PlayEndMessage(myWin, myEqual, myLose);
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
bool IsvalidPlayerValue(int gameValue)
{
	if (1 > gameValue || gameValue > 3)
		return false;
	return true;
}

// 0: 패배, 1: 비김, 2: 승리
int DecidePlay(int comValue, int myValue)
{
	if (comValue == 1)			// 컴퓨터: 가위
	{
		if (myValue == 1)		// 플레이어: 가위
		{
			return 1;
		}
		else if (myValue == 2)	// 플레이어: 바위
		{
			return 2;
		}
		else if (myValue == 3)	// 플레이어: 보
		{
			return 0;
		}
		else					// 플레이어: 다른 값. 패배로 처리
		{
			return 0;
		}
	}
	else if (comValue == 2)		// 컴퓨터: 바위
	{
		if (myValue == 1)		// 플레이어: 가위
		{
			return 0;
		}
		else if (myValue == 2)	// 플레이어: 바위
		{
			return 1;
		}
		else if (myValue == 3)	// 플레이어: 보
		{
			return 2;
		}
		else					// 플레이어: 다른 값. 패배로 처리
		{
			return 0;
		}
	}
	else						// 컴퓨터: 보
	{
		if (myValue == 1)		// 플레이어: 가위
		{
			return 2;
		}
		else if (myValue == 2)	// 플레이어: 바위
		{
			return 0;
		}
		else if (myValue == 3)	// 플레이어: 보
		{
			return 1;
		}
		else					// 플레이어: 다른 값. 패배로 처리
		{
			return 0;
		}
	}
	cout << '\n';
}

void DecidePlayMessage(int playResult)
{
	switch (playResult)
	{
	case 0: cout << "졌습니다." << endl;			break;
	case 1:	cout << "비겼습니다." << endl;		break;
	case 2:	cout << "이겼습니다." << endl;		break;
	default:
		break;
	}
}

void PlayEndMessage(int resultWin, int resultEqual, int resultLose)
{
	cout << resultWin << " 승 " << resultEqual << " 무 " << resultLose << " 패" << endl;
	// 3승 이상만 승리로 한다. 비기거나 진 것은 실패
	if (3 <= resultWin)
	{
		cout << "승리 ^^/ !!!!!" << endl << endl;
	}
	else
	{
		cout << "패배 -_- !!!!!" << endl << endl;
	}
}