#include <stdio.h>
#include "novacrypt.h"

int main()
{
    NovaCrypt nc;
    NovaCrypt_init(&nc, 9851, 987);

    char content[] = "Hello, World!";
    char encrypted[256];
    char decrypted[256];

    encrypt(&nc, content, encrypted);
    printf("C: Encrypted: %s\n", encrypted);

    decrypt(&nc, encrypted, decrypted);
    printf("C: Decrypted: %s\n", decrypted);

    return 0;
}
