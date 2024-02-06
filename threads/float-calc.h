#define f_format (1<<14)

int itof(int n) {
    return n * f_format;
} 

int xtoi_round_zero(int x) {
    return x /f_format;
}

int xtoi_round_nearest(int x) {
    if(x >= 0) {
        return (x + f_format / 2) / f_format;
    }

    return (x - f_format / 2) / f_format;
} 

int f_add(int x, int y) {
    return x + y;
}

int f_subtract(int x, int y) {
    return x - y;
}

int add_f_i(int x, int n) {
    return x + n * f_format;
}
int subtract_f_i(int x, int n) {
    return x - n * f_format;
}

int multiply_f(int x, int y) {
    return ((int64_t)x) * y / f_format;
}
int multiply_f_i(int x, int n) {
    return x * n;
}
int divide_f(int x, int y) {
    return ((int64_t)x) * f_format / y;
}

int divide_f_i(int x, int n) {
    return x / n;
}
