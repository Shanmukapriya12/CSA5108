#include <stdio.h>
#include <string.h>

int main() {
    char msg[100], rail1[100], rail2[100];
    int i, j = 0, k = 0;
    printf("Enter message: ");
    scanf("%s", msg);
    for (i = 0; msg[i] != '\0'; i++) {
        if (i % 2 == 0)
            rail1[j++] = msg[i];
        else
            rail2[k++] = msg[i];
    }
    rail1[j] = '\0';
    rail2[k] = '\0';
    printf("Encrypted: %s%s\n", rail1, rail2);
    return 0;
}

