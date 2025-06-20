#pragma once

namespace MAIN09
{
	void addHP(int hp, int value)
	{
		hp += value;
	}

	void Example()
	{
		int hp = 100;
		addHP(hp, 20);

		cout << "체력: " << hp << endl;
	}
}