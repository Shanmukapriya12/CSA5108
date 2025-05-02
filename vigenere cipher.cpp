#include <stdio.h>
#include <string.h>

int main() {
    char msg[100], key[100], cipher[100];
    int i, len;
    printf("Msg: "); scanf("%s", msg);
    printf("Key: "); scanf("%s", key);
    len = strlen(msg);
    for (i = 0; i < len; i++)
        cipher[i] = ((msg[i]-'A') + (key[i % strlen(key)]-'A')) % 26 + 'A';
    cipher[len] = '\0';
    printf("Encrypted: %s\n", cipher);
    return 0;
}

