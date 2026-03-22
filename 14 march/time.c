#include <stdio.h>
#include <time.h>

int main() {

    time_t t;

    t = time(NULL);

    printf("Current time in seconds since Jan 1 1970: %ld\n", t);

    return 0;
}