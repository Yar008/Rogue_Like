#pragma once
#include "Entity.h"
#include "Item.h"
class Human : public Entity 
{
public:
	virtual void collision_handler();
	void pickup(Item& it)
	{
		this->inventory.push_back(it.action);
	}
};

