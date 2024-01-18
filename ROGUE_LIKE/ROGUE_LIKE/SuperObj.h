#pragma once
#include <Windows.h>
class SuperObj
{
public:
	int x;
	int y;
	char icon;
	int direct;
	int speed;
	int action;
	virtual void collision_handler();
};

