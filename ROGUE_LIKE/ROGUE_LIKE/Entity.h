#pragma once
#include "SuperObj.h"
#include <iostream>
#include <string>
#include <vector>
class Entity : public SuperObj
{
public:
	int life;
	int damage;
	std::vector<int>inventory;
	virtual void collision_handler();
	int hit();
	COORD move(char side)
	{
		COORD obj;
		switch (side)
		{
		case 'w':
			if (this->x >= this->speed)
			{
				obj.X = this->x - this->speed;
			}
		case 's':
			obj.X = this->x + this->speed;
		case 'a':
			if (this->y >= this->speed)
			{
				obj.Y = this->y - this->speed;
			}
		case 'd':
			obj.Y = this->y + this->speed;
		}
		return obj;
	}

};

