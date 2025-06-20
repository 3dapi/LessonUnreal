#pragma once

#include <iostream>
#include <string>
#include <time.h>
#include <Windows.h>

using namespace std;

/**
▷사용자 정의 자료형 종류
구조체 특정 데이터의 집합을 정의하는 자료형
열거형 심볼릭 상수를 정의하는 자료형
공용체 특정 데이터의 집합을 정의하는 자료형
클래스 OOP에서 특정 객체를 생성하고 관리하는 자료형
  c: 구조체 c++ 클래스 (구조체 확장)

▷구조체
하나 이상의 변수를 묶어서 새로운 자료형을 정의
c++에 클래스가 도입되었지만  c언어와의 호환성으로 구조체를 그대로 사용할 수 있다
c++의 구조체는 c언어 구조체에 기능을 확장하여 기존의 클래스와 동일한 구조와 기능을 가진다는 특징

struct STUintData
{
};

▷열거형

enum EUnitType
{
	UNIT_TYPE_A,
	UNIT_TYPE_B,
	UNIT_TYPE_C,
};

▷공용체

union USTColor
{
	unsigned int c;
	unsigned char b[4];
};


구조체 vs 공용체
구조체: 각각의 필드 -> 별개의 메모리 사용
공용체: 하나의 메모리 -> 각각의 필드가 서로 공유 -> 마지막으로 할당한 필드의 값만 유효 ( 몰랐음)

▷클래스

class CUserData
{
};





▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷▷

 */

namespace EXAMPLE_4
{
	void Example();
}