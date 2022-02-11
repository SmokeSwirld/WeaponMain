#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <ctime>
using namespace std;

class Weapon abstract
{
protected:
	unsigned int bullets = 0;
public:

	virtual void Action1()
	{
		cout << "FAST SHOOTING\n";
	}
	virtual void Action2()
	{
		cout << "SLOW SHOOTING\n";
	}
	virtual void Aiming()
	{
		cout << "Aiming\n";
	}
	virtual void ReloadingBullets()
	{
		cout << "SOME RELOADING BULLETS";
	}
};

class Knife : virtual public Weapon
{
public:

	virtual void Action1() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(h, 10);
		cout << "FAST HIT KNIFE\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Action2() override 
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 14);
		cout << "NOTHING HAPPENS\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Aiming()
	{
		for (int i = 0; i < 2; i++)
		{
			cout << "Aiming ";
			Sleep(200);
		}
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << "EXELENT\n";
		SetConsoleTextAttribute(h, 7);
	}
};
class Revolver : virtual public Weapon
{

public:

	virtual void Action1() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		for (int i = 0; i < bullets ; i++)
		{
			cout << "FAST SHOOTING ";
			Sleep(500);
		}
		cout << "NO BULLETS\n";
		bullets = 0;
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Action2() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		if (bullets != 0) 
		{
			cout << "ONE SHOOT\n";
			bullets--;
		}
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Aiming() override
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Aiming ";
			Sleep(500);
		}
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << "EXELENT\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void ReloadingBullets() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 9);
		for (int i = bullets; i < 6; i++)
		{
			cout << "AND ONE Reloading Bullets ";
			Sleep(500);
		}
		SetConsoleTextAttribute(h, 7);
		cout << "FULL BULLETS REVOLVER - 6\n";
		bullets = 6;
	}
};
class Pistol : virtual public Weapon
{

public:

	virtual void Action1() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		for (int i = 0; i < bullets; i++)
		{
			cout << "FAST SHOOTING ";
			Sleep(100);
		}
		cout << "NO BULLETS\n";
		bullets = 0;
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Action2() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		if (bullets != 0)
		{
			cout << "ONE SHOOT\n";
			bullets--;
		}
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Aiming() override
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Aiming ";
			Sleep(500);
		}
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << "EXELENT\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void ReloadingBullets() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 9);
		for (int i = bullets; i < 10; i++)
		{
			cout << "AND ONE Reloading Bullets ";
			Sleep(200);
		}
		SetConsoleTextAttribute(h, 7);
		cout << "FULL BULLETS PISTOL - 10\n";
		bullets = 10;
	}
};
class Shotgun : virtual public Weapon
{

public:

	virtual void Action1() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		for (int i = 0; i < bullets; i++)
		{
			cout << "FAST SHOOTING ";
			Sleep(1500);
		}
		cout << "NO BULLETS\n";
		bullets = 0;
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Action2() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		if (bullets != 0)
		{
			cout << "ONE SHOOT\n";
			bullets--;
		}
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Aiming() override
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Aiming ";
			Sleep(500);
		}
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << "EXELENT\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void ReloadingBullets() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 9);
		for (int i = bullets; i < 15; i++)
		{
			cout << "AND ONE Reloading Bullets ";
			Sleep(500);
		}
		SetConsoleTextAttribute(h, 7);
		cout << "FULL BULLETS SHOTGUN - 15\n";
		bullets = 15;
	}
};
class AssaultRifle : virtual public Weapon
{

public:

	virtual void Action1() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		for (int i = 0; i < bullets; i++)
		{
			cout << "FAST SHOOTING ";
			Sleep(40);
		}
		cout << "NO BULLETS\n";
		bullets = 0;
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Action2() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		if (bullets != 0)
		{
			cout << "ONE SHOOT\n";
			bullets--;
		}
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Aiming() override
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Aiming ";
			Sleep(500);
		}
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << "EXELENT\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void ReloadingBullets() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 9);
		for (int i = bullets; i < 30; i++)
		{
			cout << "AND ONE Reloading Bullets ";
			Sleep(500);
		}
		SetConsoleTextAttribute(h, 7);
		cout << "FULL BULLETS assault rifle - 30\n";
		bullets = 30;
	}
};
class SniperRifle : virtual public Weapon
{

public:

	virtual void Action1() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		for (int i = 0; i < bullets; i++)
		{
			cout << "FAST SHOOTING ";
			Sleep(1500);
		}
		cout << "NO BULLETS\n";
		bullets = 0;
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Action2() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		if (bullets != 0)
		{
			cout << "ONE SHOOT\n";
			bullets--;
		}
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Aiming() override
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Aiming ";
			Sleep(1000);
		}
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << "EXELENT\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void ReloadingBullets() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 9);
		for (int i = bullets; i < 10; i++)
		{
			cout << "AND ONE Reloading Bullets ";
			Sleep(700);
		}
		SetConsoleTextAttribute(h, 7);
		cout << "FULL BULLETS sniper rifle - 10\n";
		bullets = 10;
	}
};
class Javelin : virtual public Weapon
{

public:

	virtual void Action1() override
	{

		cout << "NOTHING HAPPENED\n";
	}
	virtual void Action2() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		if (bullets != 0)
		{
			cout << "ONE SHOOT\n";
			bullets--;
		}
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Aiming() override
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Aiming ";
			Sleep(1000);
		}
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << "EXELENT\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void ReloadingBullets() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 9);
		for (int i = bullets; i < 1; i++)
		{
			cout << "AND ONE Reloading Bullets ";
			Sleep(10000);
		}
		SetConsoleTextAttribute(h, 7);
		cout << "FULL BULLETS Javelin - 1\n";
		bullets = 1;
	}
};
class MachineGun : virtual public Weapon
{

public:
	virtual void Action1() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		for (int i = 0; i < bullets; i++)
		{
			cout << "FAST SHOOTING ";
			Sleep(5);
		}
		cout << "NO BULLETS\n";
		bullets = 0;
		SetConsoleTextAttribute(h, 7);
	}
	
	virtual void Action2() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		if (bullets != 0)
		{
			cout << "ONE SHOOT\n";
			bullets--;
		}
		SetConsoleTextAttribute(h, 7);
	}
	virtual void Aiming() override
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Aiming ";
			Sleep(1000);
		}
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << "EXELENT\n";
		SetConsoleTextAttribute(h, 7);
	}
	virtual void ReloadingBullets() override
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 9);
		for (int i = bullets; i < 1; i++)
		{
			cout << "AND Reloading Bullets ";
			Sleep(10000);
		}
		SetConsoleTextAttribute(h, 7);
		cout << "FULL BULLETS machine gun - 1500\n";
		bullets = 5000;
	}
};