#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *src) {
    int res = 0;
    for (int i = 0; src[i] != '\0'; i++) {
        if (src[i] == '-') {
            ++i;
        }
        if (!mx_isdigit(src[i])) {
            return 0;
        }
        int temp = src[i] - 48;
        res = res * 10 + temp;
    }
    if (src[0] == '-') {
        res *= -1;
    }
    return res;
}
  
