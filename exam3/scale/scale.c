void scale(double factor, double *vec, int n) {
    int i = 0;
    while (i < n) {
        vec[i] = vec[i] * factor;
        i++;
    }
}
