#include "user.h"

namespace Authenticate
{
    std::string username;

    void inputUserName()
    {
        do
        {
            std::cout << "Enter your username (8 letters only)" << std::endl;
            std::cin >> username;
        } while (!isValid());
    }

    std::string getUserName()
    {
        return username;
    }
}

namespace
{
    bool isValid()
    {
        if (Authenticate::username.length() != 8)
            return false;

        for (const char& c : Authenticate::username)
            if (!std::isalpha(c))
                return false;

        return true;
    }
}