#include "Example04.h"

#define EXAMPLE_TYPE_STRUCT		1
#define EXAMPLE_TYPE_ENUM		2
#define EXAMPLE_TYPE_UNION		3
#define EXAMPLE_TYPE_CLASS		4

#define EXAMPLE_TYPE		EXAMPLE_TYPE_UNION

namespace EXAMPLE_4
{
	struct tagFamily
	{
		string name		;
		int    age		;
		int	   height	;
		float  weight	;
		bool   wedding	;
	};
	struct tagPlayer
	{
		int   hp;
		int   mp;
		int   atk;
		int   def;
		float speed;
	};

	struct tagUnit
	{
		string name;
		int    hp;
		float  atk;
		bool   die;
	};

	enum EColor_Type
	{
		RED,
		GREEN,
		BLUE = 100,
		BLACK,
		WHITE,
	};
	enum EMotion_Type
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN,
	};

	union STData
	{
		int   m_nDataA;
		int   m_nDataB;
		float m_fData;
	};

	void Example()
	{
#if    EXAMPLE_TYPE  ==	EXAMPLE_TYPE_STRUCT

		// c-style
		//struct tagFamily family;
		// c++ style
		tagFamily family;

		family.name		 = "가족이름";
		family.age		 = 30;
		family.height	 = 180;
		family.weight	 = 70.1234567890123456789F;
		family.wedding	 = false;
		cout << boolalpha;
		cout.precision( 14 );
		cout.width(20);
		cout << family.name		 << ' '
			<< family.age		 << ' '
			<< family.height	 << ' '
			<< family.weight	 << ' '
			<< family.wedding	 << endl;

#elif  EXAMPLE_TYPE  == EXAMPLE_TYPE_ENUM
#elif  EXAMPLE_TYPE  == EXAMPLE_TYPE_UNION
		STData stData;

		stData.m_nDataA = 100;
		stData.m_nDataB = 100;
		stData.m_fData  = 3.14f;

		cout << " == 공용체 == "	 << endl;
		cout << stData.m_nDataA	 << endl;
		cout << stData.m_nDataB	 << endl;
		cout << stData.m_fData	 << endl;

#elif  EXAMPLE_TYPE  == EXAMPLE_TYPE_CLASS
#endif
	}
}

/**
과제1. 월남뽕 완성

과제2. 구조체를 사용한 데이터베이스 만들기
- 게임 타이틀명, 평점, 가격, 점수, 특이 사항
- 배열을 반드시 사용해야 하고 출력까지 되면 OK

과제3. 짝 맞추기
사이즈: 5x4
☆★◇◆♤♠♡♥♧♣

1. 치트키를 누르면 패을 전부 오픈 시켜 플레이어에게 보여주고 5초후에 다시 원상 복귀
2. 치트키를 누르면 한 쌍의 카드를 제외하고 전부 오픈 -> 사용자가 마지막 한쌍을 맞추면서 게임이 종료된다.

열심히 조사. 포인터
느낌만 잘 느끼고 인 쪽 보 오면 베스트

*/