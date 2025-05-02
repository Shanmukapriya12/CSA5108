#include <stdio.h>
#define SIZE 2

void encrypt(char msg[], int key[SIZE][SIZE]) {
    int i, j, k = 0, vec[SIZE], res[SIZE];
    while (msg[k] != '\0') {
        for (i = 0; i < SIZE; i++)
            vec[i] = (msg[k] ? msg[k++] : 'X') - 'A';
        for (i = 0; i < SIZE; i++) {
            res[i] = 0;
            for (j = 0; j < SIZE; j++)
                res[i] += key[i][j] * vec[j];
            printf("%c", (res[i] % 26) + 'A');
        }
    }
}

int main() {
    int key[2][2] = {{3, 3}, {2, 5}};
    char msg[100];
    printf("Enter message: ");
    scanf("%s", msg);
    printf("Encrypted: ");
    encrypt(msg, key);
    return 0;
}

