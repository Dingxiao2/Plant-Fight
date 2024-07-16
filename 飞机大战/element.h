#pragma once
#include "common.h"
#include "point.h"
class Element 
{
public:
	Element(int x, int y, string name, bool live, int hp = 0);
	int& GetX();
	int& GetY();
	bool& GetLive();
	int& GetHp();
	int GetWidth();
	int GetHeight();
	void DrawElement(int index=0);
	void MoveElement(int speed, Point::Dir dir);

private:
	Point point;
	string name;
	bool live;			//存活标记
	int hp;				//飞机和敌机血量
};