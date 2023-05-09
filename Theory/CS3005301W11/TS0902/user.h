#pragma once

#include <iostream>
#include <vector>

namespace Authenticate
{
	void inputUserName();
	std::string getUserName();
}

namespace
{
	bool isValid();
}