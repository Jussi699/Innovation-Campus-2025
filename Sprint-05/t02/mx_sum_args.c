int mx_atoi(const char *src);

void mx_printchar(char c) ;

void mx_printint(int n);

int main(int args, char *argv[]) {
    if (args > 1) {
        int sum = 0;
        for (int i = 1; i < args; i++) {
            sum += mx_atoi(argv[i]);
        }
        mx_printint(sum);
        mx_printchar('\n');
    } else {
        mx_printint(0);
        mx_printchar('\n');
    }
    return 0;
}
  
