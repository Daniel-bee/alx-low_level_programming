#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int rand_lim(int limit) {
/* return a random number between 0 and limit inclusive.*/

    int divisor = RAND_MAX/(limit+1);
    int retval;

    do { 
        retval = rand() / divisor;
    } while (retval > limit);

    return retval;
}

char picker(const char *charset) {
    return charset[rand_lim(strlen(charset)-1)];
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        puts("Usage: pwgen len");
        return 1;
    }
    int len = atoi(argv[1]);
    if (len <= 0) {
       puts("Length must be a positive non-zero integer"); 
       return 2;
    }
    const char* groups[] = {
        "1234567890",  
        "abcdefghijklmnoqprstuvwyz",
        "ABCDEFGHIJKLMNOQPRSTUYWVZX",  
        "!@#$%^&*(){}[]:<>?,./",    
    };
    const size_t numGroups = sizeof(groups)/sizeof(groups[0]);
    srand((unsigned int)(time(NULL)));

  
    for ( ; len; --len) {
        unsigned group = rand_lim(numGroups-1);
        putchar(picker(groups[group]));
    }
    putchar('\n');
}
