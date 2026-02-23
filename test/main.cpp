
#include "calculator.h"

#include <stdio.h>
#include "assert.h"

#define TEST(expression) \
do {\
    if(!(expression)){ \
        fprintf(stderr,"\e[0;31mTEST %s FAILED: %s:%d \e[0m",#expression,__FILE__,__LINE__); \
    }\
    else{ \
        fprintf(stdout,"\e[0;32mTEST %s PASSED\e[0m",#expression); \
    }\
} while(0)

int main(int argc, char** argv){
    TEST(add(34,35) == 70);
}