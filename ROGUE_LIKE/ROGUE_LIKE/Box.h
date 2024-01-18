#pragma once
template<typename t>
class Box
{
public:
	t& obj;    
	int x;
	int y;
	int speed;
	int put(t obj);
	t& get();
};

