#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
/*

����ü ���� ���α׷��� OOP
�ڵ��� �� ��뼺�� ���� �ڵ��� ������ �����ϴ�
�ŷڼ��� ���� ���α׷����� �����ϰ� �Ѵ�

����ü���� 4�� Ư¡

1. ĸ ��ĸ�����̼�
2. �� ���츮�Ͻ�
3. �� ȣ�������
4. ��


��5�� ���� ��Ģ

SOLID
SRP	- Single Responsibility Principle			���յ� ������
OCP - Open/Closed Principle
LSP - (LSP - Liskov Substitution Principle
ISP - Interface Segregation Principle
DIP - Dependency Inversion Principle

������
������
���������̽�
������

�߻�Ŭ����
���� �����Լ��� 1�� �̻� �ִ� Ŭ����

�������̽�
�Ľ�Į + �밡����
	

class MainGame_02
{
public:
	static void main()
	{

	}
};

��Ʈ ������ �ĺ��� ����
����濡 �ø� ��
�ĺ� 3�� �߸��� ���� ���� �ۼ�
�� �ĺ��� �ֿ� ��� �ۼ�
������ ���� ������ ��Ʃ�� ��ũ
���� ���� ����


��/�� => ������Ƽ

LLL - low level language
LHL
MHL
HLL	- high level language c++



*/

__interface IGameClass
{
	virtual void idle() =0;
	virtual void walk() =0;
};


class MainGame_02
{
public:
	static void main()
	{
		int c;
		c = 0;
	}
};