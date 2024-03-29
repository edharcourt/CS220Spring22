
int factor2(int n) {
    for (int i = 2; i <= n; i++) 
        if (n % i == 0)
            return i;
}

int factor(int n) {

    int i = 2;

    while (i <= n) {
        if (n % i == 0)
            return i;
        i++;
    }

}

int is_prime(int n) {
    int i = 2;

    while (i < n/2) {
        if (n % i == 0)
            return 0;
        i++;
    }

    return 1;
}
