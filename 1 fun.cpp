#include <iostream>
using namespace std;

void itc_num_print(int number) {

    cout << number << endl;

}

int itc_len_num(long long number) {

    int num = 0;
    while (number > 0) {
        number = number / 10;
        num++;
    }
    return num;

}

int itc_sum_num(long long number) {

    int num;
    int sum = 0;
    while (number > 0) {
        num = number % 10;
        sum = sum + num;
        number = number / 10;
    }
    return sum;

}

long long itc_multi_num(long long number) {

    int num;
    int mult = 1;
    while (number > 0) {
        num = number % 10;
        mult = mult * num;
        number = number / 10;
    }
    return mult;

}

int itc_max_num(long long number) {

    int num;
    int maxx = 0;
    while (number > 0) {
        num = number % 10;
        if (num > maxx) {
            maxx = num;
        }
        number = number / 10;
    }
    return maxx;

}

