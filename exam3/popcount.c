int popcount(unsigned int n) {
    if (n == 0)
        return 0;
    else
        return popcount(n >> 1) + (n & 1);
}
