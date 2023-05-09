#pragma once

#include <iostream>
#include <vector>

namespace Authenticate
{
	void inputPassword();
	std::string getPassword();
}

namespace
{
	bool isValid();
}