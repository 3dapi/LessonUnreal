﻿#pragma region 과제:좋아하는 캐릭터

/**
과제 01: 좋아하는 캐릭터 출력 흑백
과제 02: 좋아하는 캐릭터 출력 컬러
 */
#pragma endregion USING_STD

#include <iostream>
#include <Windows.h>

void TextColor(int font, int backGround);

#pragma region USING_STD
using std::cin;
using std::cout;
using std::endl;
#pragma endregion USING_STD

void main()
{
	cout << "과제 01: 좋아하는 캐릭터 출력" << endl;
	cout << "□■■□□□□□□□□□□□□□□□□□□□□□□□□■■□□□" << endl;
	cout << "□■▧■■□□□□□□□□□□□□□□□□□□□□■■▧■□□□" << endl;
	cout << "□■▧▧▧■□□□□□□□□□□□□□□□□□□■▧▧▧■□□□" << endl;
	cout << "□■▧▧▧▧■■□□□□□□□□□□□□□□■■▧▧▧▧■□□□" << endl;
	cout << "□□■▧▧▧▧▧■□□□□□□□□□□□□■▧▧▧▧■■□□□□" << endl;
	cout << "□□■▧▧▧▧▧▧■■□□□□□□□□■■▧▧▧▧▧■■□□□□" << endl;
	cout << "□□□■▧▧▧▧▧▧▧■■□□□□■■▧▧▧▧▧▧▧■□□□□□" << endl;
	cout << "□□□■▧▧▧▧▧▧▧▧▧■■■■▧▧▧▧▧▧▧▧▧■□□□□□" << endl;
	cout << "□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■□□□□□□" << endl;
	cout << "□□□□□■▧■▧▧▧▧▧▧▧▧▧▧▧▧▧▧■▧■□□□□□□□" << endl;
	cout << "□□□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■□□□□□□□□" << endl;
	cout << "□□□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■□□□□□□□□" << endl;
	cout << "□□□□□■▧▧▧■■▧▧▧▧▧▧▧▧■■▧▧▧■□□□□□□□" << endl;
	cout << "□□□□□■▧▧■◇■■▧▧▧▧▧▧■◇■■▧▧■□□□□□□□" << endl;
	cout << "□□□□□■▧▧■■■■▧▧▧▧▧▧■■■■▧▧■□□□□□□□" << endl;
	cout << "□□□□□■▧▧▧■■▧▧▧■■▧▧▧■■▧▧▧■□□□□□□□" << endl;
	cout << "□□□□■▧▧▥▥▧▧▧▧▧▧▧▧▧▧▧▧▥▥▧▧■□□□□□■" << endl;
	cout << "□□□□■▧▥▥▥▥▧▧■▧■■▧■▧▧▥▥▥▥▧■□□□□■▧" << endl;
	cout << "□□□□■▧▥▥▥▥▧▧▧■■■■▧▧▧▥▥▥▥▧■□□□■▧▧" << endl;
	cout << "□□□□□■▧▥▥▧▧▧▧■▥▥■▧▧▧▧▥▥▧■□□□■▧▧▧" << endl;
	cout << "□□□□□□■▧▧▧▧▧▧■▥▥■▧▧▧▧▧▧■□□□□□■▧▧" << endl;
	cout << "□□□□□□□■■▧▧▧▧▧■■▧▧▧▧▧■■□□□□□□□■▧" << endl;
	cout << "□□□□□□□□□■■■▧▧▧▧▧▧■■■▧▧■□□□□□□□■" << endl;
	cout << "□□□□□□□■■▧▧▧■■■■■■▧▧▧▧▧▧■□□□□□■▧" << endl;
	cout << "□□□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■□□□■▧▧" << endl;
	cout << "□□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■■■▧▧▧" << endl;
	cout << "□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■▧▧▧" << endl;
	cout << "□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■▧▧" << endl;
	cout << "□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■▧" << endl;
	cout << "□□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧■" << endl;
	cout << "□□□□□□■▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧▧" << endl;
	cout << endl;

	cout << "과제 02: 좋아하는 캐릭터 출력(colorful) : 꼬부기" << endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 7, 7);TextColor( 0, 0);TextColor(15,15);TextColor(15,15);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor(15,15);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor(15,15);TextColor( 0, 0);TextColor(15,15);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor(15,15);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 5, 5);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 5, 5);TextColor( 0, 0);TextColor( 5, 5);TextColor(15,15);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor(15,15);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 1, 1);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 7, 7);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor(15,15);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 5, 5);TextColor(15,15);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor(15,15);TextColor(15,15);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor(15,15);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 7, 7);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 7, 7);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 7, 7);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 7, 7);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 5, 5);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 7, 7);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 5, 5);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 5, 5);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 5, 5);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 7, 7);TextColor( 7, 7);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);cout <<endl;
	TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 8, 8);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 0, 0);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 5, 5);TextColor( 0, 0);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);TextColor( 0, 0);TextColor( 7, 7);TextColor( 0, 0);TextColor( 1, 1);TextColor( 1, 1);TextColor( 1, 1);cout <<endl;
}

void TextColor(int font, int backGround)
{
	int color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	std::cout << "■";
	color = 7 + 0 * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}