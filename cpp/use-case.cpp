#include <iostream>
#include "novacrypt.hpp"

int main()
{
    NovaCrypt novaCrypt(9851, 987);

    std::string content = "Hello, World!";
    std::string encrypted = novaCrypt.encrypt(content);
    std::cout << "C++: Encrypted: " << encrypted << std::endl;

    std::string decrypted = novaCrypt.decrypt(encrypted);
    std::cout << "C++: Decrypted: " << decrypted << std::endl;

    return 0;
}
