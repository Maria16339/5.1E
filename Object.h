#pragma once
#include <exception>
#include "myerror.h"
#include "myerror_base.h"
class Object
{
private:
	static unsigned int count;
public:
	static unsigned int Count() { return count; };
	Object() { ++count; };
	~Object() { --count; };
};

