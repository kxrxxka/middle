#include <iostream>
#include "middle.h"
using namespace std;

int itc_second_max_num(long long number) {

int n = 0;
int maxx1 = -1;
int maxx2 = -1;

if (number < 0) {
    number = number * (-1);
}

if (number / 10 == 0) {
    return - 1;
}

else {
    while (number > 0) {

        n = number % 10;

        if (maxx1 <= n) {
            maxx2 = maxx1;
            maxx1 = n;
        }

        if ((n < maxx1) && (n > maxx1)) {
            maxx2 = n;
        }

        number = number / 10;
    }

return maxx2;

}

}


long long itc_bin_num(long long number) {
    
long long ost = 0;
long long dv = 10;
long long num = 0;

while (number > 0) {
    
    ost = number % 2;
    number = number / 2;
    num = (dv * ost) + num;
    dv = dv * 10;
}

return num / 10;

}

long long itc_oct_num(long long number) {
    
long long ost = 0;
long long dv = 10;
long long num = 0;

while (number > 0) {
    
    ost = number % 8;
    number = number / 8;
    num = (dv * ost) + num;
    dv = dv * 10;
}

return num / 10;

}

