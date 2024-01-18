#include "Box.h"
template<typename t>
int put(t obj2)
{
	this->obj = obj2;
}
template<typename t>
t& get()
{
	return this->obj;
}