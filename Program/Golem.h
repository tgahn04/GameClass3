#pragma once
#include "Monster.h"
class Golem : public Monster
{
public:
	Golem();
	virtual void Describe() override;
	virtual ~Golem() override;
};

