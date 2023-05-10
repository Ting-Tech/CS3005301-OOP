/*
Author: ¾G°·§Ê(B11130225@mail.ntust.edu.tw)
Date: May 10, 2023
Last Update: May 10, 2023
Describition: Explores how the unnamed namespace works
*/

#include "password.h"
#include "user.h"

#include <iostream>

using namespace Authenticate;
using namespace std;

int main()
{
    inputUserName();
    inputPassword();
    cout << "Your username is " << getUserName()
        << " and your password is: " << getPassword() << endl;

    return 0;
}