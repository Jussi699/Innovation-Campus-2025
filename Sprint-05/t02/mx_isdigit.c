#include <stdbool.h>

bool mx_isdigit(int c) {
    if (c >= 48 && 57 >= c) {
        return 1;
    }
    return 0;
}
  
