#include "stdafx.h"
#include "Cabinet.h"

Cabinet::Cabinet()
{
	cout << "Created_Cabinet" << endl;
}

void Cabinet::Interact()
{
	cout << "The Cabinet open" << endl;
}

Cabinet::~Cabinet()
{
	cout << "Destroy_Cabinet" << endl;
}
