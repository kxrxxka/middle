#include <iostream>
using namespace std;

int itc_min_num(long long number) {

     if (number <= 0) {
        return -1;
    }

    int num;
    int minn = 9;

    while (number > 0) {
        num = number % 10;
    }
        if (num < minn) {
            minn = num;
        }
        number = number / 10;
    }
    return minn;
}
