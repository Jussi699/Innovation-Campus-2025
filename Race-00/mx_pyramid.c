void mx_printchar(char c);
void mx_pyramid(int n);

void print_top_section(int base_width) {
    for (int j = 0; j < ((base_width / 2) + 1); j++) {
        mx_printchar(' ');
    }
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');
}
void print_upper_part(int n, int base_width, int* inner_space, int* outer_space) {
    for (int i = 1; i < n / 2; i++) {
        for (int j = ((base_width / 2) + 1 + 1 - i); j > 1; j--) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int j = 0; j < *inner_space; j++) {
            mx_printchar(' ');
        }
        *inner_space += 2;

        mx_printchar('\\');
        for (int j = 0; j <= *outer_space; j++) {
            mx_printchar(' ');
        }
        (*outer_space)++;
        mx_printchar('\\');
        mx_printchar('\n');
    }
}
void print_middle_and_bottom(int n, int base_width, int* inner_space, int* outer_space) {
    for (int i = n / 2; i < n; i++) {
        if (i != n - 1) {
            for (int j = n - i; j > 1; j--) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            for (int j = 0; j < *inner_space; j++) {
                mx_printchar(' ');
            }
            *inner_space += 2;

            mx_printchar('\\');
            for (int j = *outer_space + 1; j > 1; j--) {
                mx_printchar(' ');
            }
            (*outer_space)--;
            mx_printchar('|'); mx_printchar('\n');
        }
        else {
            mx_printchar('/');
            for (int j = 0; j < base_width; j++) {
                mx_printchar('_');
            }
            mx_printchar('\\');
            mx_printchar('|'); 
            mx_printchar('\n');
        }
    }
}
void mx_pyramid(int n) {
    if (n % 2 == 0 && n >= 1) {
        int inner_space = 1;
        int outer_space = 0;
        int base_width = (2 * n) - 3;
		
        print_top_section(base_width);
        print_upper_part(n, base_width, &inner_space, &outer_space);
        print_middle_and_bottom(n, base_width, &inner_space, &outer_space);
    }
}