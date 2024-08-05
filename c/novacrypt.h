#ifndef NOVACRYPT_H
#define NOVACRYPT_H

#include <string.h>

typedef struct
{
    int secureKey;
    int salt;
} NovaCrypt;

void NovaCrypt_init(NovaCrypt *nc, int SECURE_KEY, int SALT)
{
    nc->secureKey = SECURE_KEY;
    nc->salt = (SALT == 0) ? 9 : SALT;
}

void encrypt(NovaCrypt *nc, const char *content, char *encrypted_content)
{
    int i;
    for (i = 0; i < strlen(content); i++)
    {
        int genSpecCode = (content[i] + (nc->secureKey * nc->salt) + nc->salt) % 256;
        encrypted_content[i] = (char)genSpecCode;
    }
    encrypted_content[i] = '\0';
}

void decrypt(NovaCrypt *nc, const char *encrypted_content, char *decrypted_content)
{
    int i;
    for (i = 0; i < strlen(encrypted_content); i++)
    {
        int decSpecCode = (encrypted_content[i] - nc->salt - (nc->secureKey * nc->salt)) % 256;
        if (decSpecCode < 0)
        {
            decSpecCode += 256;
        }
        decrypted_content[i] = (char)decSpecCode;
    }
    decrypted_content[i] = '\0';
}

#endif