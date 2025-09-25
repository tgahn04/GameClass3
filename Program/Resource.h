#pragma once
class Resource
{
public:
	Resource();
	~Resource();
};

void Share(shared_ptr<Resource> texture);