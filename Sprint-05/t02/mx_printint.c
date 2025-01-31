void mx_printchar(char c);

void mx_printint(int n) {
    if (n == -2147483648) {
        mx_printchar('-');
        mx_printint(214748364);
        mx_printchar('8');
        return;
    }
    if (n < 0) {
        mx_printchar('-');
        n = n * -1;
    }
    if (n > 9) {
        mx_printint(n / 10);
    }
    mx_printchar(n % 10 + 48);
}

