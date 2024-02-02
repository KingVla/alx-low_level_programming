#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generate_key(char *username, char *key) {
    int i;
    for (i = 0; i < strlen(username); i++) {
        sprintf(key + strlen(key), "%d", username[i]);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./keygen5 username\n");
        return 1;
    }

    char *username = argv[1];
    char key[100] = {0}; // Make sure to adjust the size as necessary

    generate_key(username, key);
    printf("%s\n", key);

    return 0;
}

