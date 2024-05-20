#include <iostream>
#include "middle.h"
using namespace std;

void itc_num_print(int number) {

    cout << number << endl;
}

int itc_len_num(long long number) {
    
    int num = 0;

    if (number == 0) {
        num = 1;
    }
    while (number != 0) {
        number = number / 10;
        num++;
    }  
    return num;

}

int itc_sum_num(long long number) {
    
  int num = 0;
    
    while (number != 0) {
        num = num + number % 10;
        number = number / 10;
    }
    
    if (num < 0) {
        num = num * (-1);
    }
    
    return num;

}

long long itc_multi_num(long long number) {


    if (number == 0){
        return -1;
    }
    
    if (number < 0){
        number = number * (-1);
    }
    
    int num = 1;
    int mult = 1;
    while (number > 0){
        num = number % 10;
        mult = mult * num;
        number /= 10;
    }
    return mult;
    
}


int itc_max_num(long long number) {
 
 int maxx = 0;
 long long num;
    
    if (number == 0){
        return 0;
    }
    
    while (number != 0) {
        num = number % 10;
        if (num > maxx) {
            maxx = num;
        }
        number = number / 10;
    }
    return maxx;

}

