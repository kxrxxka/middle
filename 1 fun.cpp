#include <iostream>
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

      int mult = 1;
    
    if (number == 0) {
        mult = 0;
    
    }
    
     while (number != 0) {
        mult = mult * (number % 10);
        number = number / 10;
    }
    
    if (number < 0) {
        number = number * (-1);
    }
    
    return mult;
   

}


int itc_max_num(long long number) {

  int maxx = -1;
    long long num;
    
    if (number == 0) {
        maxx = 0;
    }
    
    if (number < 0) {
        number = number * (-1);
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


}

