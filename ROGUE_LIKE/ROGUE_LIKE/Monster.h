#pragma once
#include "Entity.h"
class Monster : public Entity
{
public:
	virtual void collision_handler();
};

