#include <stdio.h>

int main() {

    char input[200];
    char par[100];
    char value[100];

    int i = 0, j = 0, k = 0;

    scanf("%199s", input);

    while (input[i] != '=' && input[i] != '\0') {
        par[j++] = input[i++];
    }

    par[j] = '\0';

    i++;  // skip '='

    while (input[i] != '\0') {
        value[k++] = input[i++];
    }

    value[k] = '\0';

    printf("Par: %s\n", par);
    printf("Value: %s\n", value);

    return 0;
}