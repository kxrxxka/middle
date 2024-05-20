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

