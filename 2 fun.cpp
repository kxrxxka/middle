#include <iostream>
using namespace std;

int itc_min_num(long long number) {

    if (number == 0){
        return -1;
    }
    
    if (number < 0){
        number = number * (-1);
    }
    
    int num;
    int minn = 9;

    while (number > 0) {
        num = number % 10;
    
        if (num < minn) {
            minn = num;
        }
        number = number / 10;
    }
    return minn;
}

int itc_rev_num(long long number) {
    
    if (number == 0){
        return -1;
    }
    
    if (number < 0){
        number = number * (-1);
    }
   
   long long num;
   long long numn;
   numn = 0;
     
   while(number > 0) {
       num = number % 10;
       numn = numn * 10;
       numn = numn + num;
       number = number / 10;
       
   }
   
   return numn;
}
