/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 10, 2023
Last Update: May 10, 2023
Describition: Explores how the unnamed namespace works
*/

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