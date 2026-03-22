#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string with spaces: ");
    // Read up to 99 characters or until a newline, storing the newline
    fgets(str, sizeof(str), stdin); 
    printf("You entered: %s", str);
    return 0;
}
