int ft_pow(int base, int power) {
    int result = 1;
    int i = 0;
    while (i < power) {
        result *= base;
        i++;
    }
    return result;
}
