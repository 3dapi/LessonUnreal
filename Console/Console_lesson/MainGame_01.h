#pragma once
#include <iostream>

using namespace std;


#pragma region 클래스
/**
객체지향 프로그래밍

절차 지향
객체지향: 서로 상호 작용하는 객체를 기본단위로 구성하는 방법론
물리적인 하드 웨어의 발전이 빠르게 이뤄졌고 소프느웨어의 중요성이 올라감
기존 절차지향 방식은 복장합 구조에 대한 설계가 힘들고 대처가 힘들기  때무에 객체지향의 방식 대안이 되었다.

객제치향의 장단점
장점
1. 객체 단위로 관리하기 때문에 유지 보수 용이함
2. 항속을 통한 코드의 재사용성이 좋음
3. 잘 설계된 클래스를 만들어서 독립적인 객체를 사용함으로 생산성 향상

단점
1. 절차 지향언어에 비해 상대적으로 실행 속도면에서는 불리함
2. 신중해야 하며 설계가 매우 중요해 진다. (이는 개발 시간이 늘어난다는 이야기)

EX)
class CUnit
{
}

▷클래스 
클래스에 포함된 함수에서만 접근 허용
이 속성을 가지는 멤버는 액세스 할 수 없으며 구조체의 멤버 함수만 액세스 할 수  있다.
외부에서는 

public
protected
private

@. internal

▷▷▷▷▷▷▷

 */
#pragma endregion 클래스



class MainGame_01
{
public:
	void output();
	void showPosition(void);
	void movePosition(void);
	void setPositon(int x, int y);

	// 함수의 상수화
	void FunctionA(const int a);
	void FunctionB() const;
	const int FunctionC();
	int const FunctionD();
	const int FunctionE() const;

	MainGame_01();
	~MainGame_01();
};

