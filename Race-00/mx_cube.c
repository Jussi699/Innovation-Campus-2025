void mx_printchar(char c);

void print_first_line(int size, int* space) {
    for (int i = 0; i < *space; i++) {
        mx_printchar(' ');
    }
    mx_printchar('+');

    for (int i = 0; i < size * 2; i++) {
        mx_printchar('-');
    }
        mx_printchar('+');
        mx_printchar('\n');
}
void print_upper_part(int size, int* space, int* inside_space) {
    for (int i = 0; i < size / 2; i++) {
        (*space)--;
        (*inside_space)++;
        for (int j = 0; j < *space; j++) {
            mx_printchar(' ');
        }
        mx_printchar('/');

        for (int j = 0; j < size * 2; j++) {
            mx_printchar(' ');
        }
            mx_printchar('/');
        for (int j = 0; j < *inside_space - 1; j++) {
            mx_printchar(' ');
        }
            mx_printchar('|');
            mx_printchar('\n');
    }
}
void print_middle_part(int size, int* inside_space) {
    mx_printchar('+');
    for (int i = 0; i < size * 2; i++) {
        mx_printchar('-');
    }
        mx_printchar('+');

    for (int i = 0; i < *inside_space; i++) {
        mx_printchar(' ');
    }
        mx_printchar('|');
        mx_printchar('\n');

    int middle_part_height = (size % 2 == 0) ? size / 2 - 1 : size / 2;

    for (int i = 0; i < middle_part_height; i++) {
            mx_printchar('|');

        for (int j = 0; j < size * 2; j++) {
            mx_printchar(' ');
        }
            mx_printchar('|');
        for (int j = 0; j < *inside_space; j++) {
            mx_printchar(' ');
        }
            mx_printchar('|');
            mx_printchar('\n');
    }
}
void print_lower_part(int size, int* inside_space) {
    mx_printchar('|');
    for (int i = 0; i < size * 2; i++) {
            mx_printchar(' ');
    }
        mx_printchar('|');
    for (int i = 0; i < *inside_space; i++) {
            mx_printchar(' ');
    }
        mx_printchar('+');
        mx_printchar('\n');
    for (int i = 0; i < size / 2; i++) {
        (*inside_space)--;
            mx_printchar('|');
        for (int j = 0; j < size * 2; j++) {
            mx_printchar(' ');
        }
            mx_printchar('|');
        for (int j = 0; j < *inside_space; j++) {
            mx_printchar(' ');
        }
            mx_printchar('/');  mx_printchar('\n');
    }
}
void mx_cube(int size) {
    if (size < 2) {
        return;
    }
    int space = size / 2 + 1;
    int inside_space = 0;

    print_first_line(size, &space);
    print_upper_part(size, &space, &inside_space);
    print_middle_part(size, &inside_space);
    print_lower_part(size, &inside_space );
    mx_printchar('+');
    for (int i = 0; i < size * 2; i++) {
        mx_printchar('-');
    }
        mx_printchar('+');
        mx_printchar('\n');
}