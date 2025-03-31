#include "rdpmc_portal.h"
#include <unistd.h>

const int MAX_INTEGERS = 100000000;

int main(){

    PMUreset();
    PMUstart();

    int buf[80000];
    for(int j = 0; j<80000;j++){
        buf[j] = j*2;
    }

    volatile int i=0;
    do {
        ++i;
  } while (__builtin_expect((i<MAX_INTEGERS),1));
    

    u_int64_t a = programmableCounterValue(1);
    u_int64_t b = programmableCounterValue(2);
    /*    int buf[8000];
    for(int j = 0; j<8000;j++){
        buf[i] = j*2;
    }
*/


    printf("a: %ld\n",a);
    printf("b: %ld\n",b);
    return 0;
}
