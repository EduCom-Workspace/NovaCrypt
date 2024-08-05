#ifndef NOVACRYPT_HPP
#define NOVACRYPT_HPP

#include <string>

class NovaCrypt
{
public:
    NovaCrypt(int SECURE_KEY, int SALT)
    {
        secureKey = SECURE_KEY;
        salt = (SALT == 0) ? 9 : SALT;
    }

    std::string encrypt(const std::string &content)
    {
        std::string encrypted_content;
        for (char c : content)
        {
            int genSpecCode = (static_cast<int>(c) + (secureKey * salt) + salt) % 256;
            encrypted_content += static_cast<char>(genSpecCode);
        }
        return encrypted_content;
    }

    std::string decrypt(const std::string &encrypted_content)
    {
        std::string decrypted_content;
        for (char c : encrypted_content)
        {
            int decSpecCode = (static_cast<int>(c) - salt - (secureKey * salt)) % 256;
            if (decSpecCode < 0)
            {
                decSpecCode += 256;
            }
            decrypted_content += static_cast<char>(decSpecCode);
        }
        return decrypted_content;
    }

private:
    int secureKey;
    int salt;
};

#endif // NOVACRYPT_HPP
