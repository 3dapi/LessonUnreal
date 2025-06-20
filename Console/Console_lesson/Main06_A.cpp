#include <algorithm>
#include <chrono>
#include <ctime>
#include <functional>
#include <iterator>
#include <random>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	std::random_device oRandomDevice;
	std::mt19937 rnd(oRandomDevice());
	//cout << "RandomDevice: \n" << rnd << endl;

	//int randomMin = 1;
	//int randomMax = 10;

	//// 정수
	//std::uniform_int_distribution<int>		range(randomMin, randomMax);
	//// 실수
	//std::uniform_real_distribution<float>	range(randomMin, randomMax);
	//// 정규 분포
	//std::normal_distribution<double>		range(randomMin, randomMax);

	//int nNumberA = oRandomDevice() % 10 + 1;


	vector<int> vNum;
	for (int i = 0; i < 5; ++i)
	{
		vNum.push_back(i);
	}

	// random_shuffle(vNum.begin(), vNum.end());
	//for (int i = 0; i < 5; ++i)
	//{
	//	cout << vNum[i] << endl;
	//}

	for (int i = 0; i < vNum.size(); ++i)
	{
		random_shuffle(vNum.begin(), vNum.end());
		copy(vNum.begin(), vNum.end(), ostream_iterator<int>(cout, " "));
		cout << endl;
	}

	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	auto drg = std::default_random_engine{ seed };
	std::shuffle(vNum.begin(), vNum.end(), drg);
}

/*
과제1. 주민 번호 생성기
-시작하면 원하는 생년원일을 입력 받는다
-월과 일을 입력 (2자리 or 1자리)

-예외 처리: 31일이 있는 달과 30일까지만 있는 달, 2월도 처리

-성별 처리(남자는 1/3, -> 여자는 2/4)
 다른 값을 입력하면 성별을 무작위로 설정한다

-마지막 6자리는 무작위 출력
 단, 0이 오면 안된다.

과제2. 월남뽕
- 치트: 필수
♠ 1~13까지의 카드
◆ 1~13까지의 카드
♣ 1~13까지의 카드
♥ 1~13까지의 카드

- 종류별 13장의 카드 총 52장을 사용

-예외처리
A->1 j->11 Q->12 k-13

52장의 카드를 최소 한번 램덤으로 섞고 그 후 매턴마다 3장씩 뒤집는다.

앞쪽에 배치된 두 장의 카드를 보고 최소 배팅액 이상의 금액을 배팅할 것
 자유

 배팅 후 세 번째 카드의 수가 앞서 오픈된 카드 숫자의 사이에 있다면 배팅 금의 두 배가 되어 소지금 추가

 반대라면 소지금에서 배팅한 만큼 마이너스

 ★한 턴이 끝나고 사용된 카드는 버러져 사용될 수 없음.

한 줄 조사.
사용자 정의 자료형

struct
union
enum
typdef 제외


*/