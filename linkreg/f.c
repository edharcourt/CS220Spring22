int h(int z) {
   return z * 2;
}


int g(int x, int y) {
    return h(x + y);
}

int f(int a, int b, int c) {
    return h(2) * g(a, b+c);
}
