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