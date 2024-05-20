#include <iostream>
using namespace std;

int itc_min_num(long long number) {

 
 int minn = 9;
 long long num;
    
    if (number == 0){
        minn = 0;
    }
    
    if (number < 0){
    number = number * (-1);
}
    
    while (number != 0) {
        
        num = number % 10;
        if (num < minn) {
            minn = num;
        }
        
        number = number / 10;
    }
    return minn;

}


int itc_rev_num(long long number){
    
int n = 0;
long long num = 0;

if (number <= 0) {
    return -1;
}

while (number > 0){
    
    num = number % 10;
    n = n * 10;
    n = n + num;
    number = number / 10;
}

return itc_len_num(n);

}

itc_null_count(long long number){
    
int num = 0;

if (number < 0) {
    number = number * (-1);
}

if (number == 0){
    num = 1;
}

while (number > 0){
    
    if (number % 10 == 0){
        num ++;
    }
    number = number / 10;
}

return num;

}

itc_mirror_num(long long number){
    
int n = 0;
long long num = 0;
long long number1 = number;

while (number != 0){
    n = number % 10;
    num = num * 10;
    num = num + n;
    number = number / 10;
}

if (num == number1){
    return 1;
}

else {
    return 0;
}

}

int itc_mirror_count(long long number) {
long long n = 1;
int num = 0;
while (n <= number) {
    if (itc_mirror_num(n)) {
        num++;
    }
    n++;
}

return num;
}

