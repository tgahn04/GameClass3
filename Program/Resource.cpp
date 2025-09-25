#include "stdafx.h"
#include "Resource.h"

Resource::Resource()
{
	cout << "Created_Resource" << endl;
}

Resource::~Resource()
{
	cout << "Destroy_Resource" << endl;
}

void Share(shared_ptr<Resource> texture)
{
	
}
