#include <stdio.h>
#include <time.h>

int main() {

    time_t t;

    t = time(NULL);

    printf("Current time: %s", ctime(&t));

    return 0;
}