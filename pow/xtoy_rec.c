
int xtoy(int x, int y) {
    if (y == 0)
        return 1;
    else
        return x*xtoy(x, y-1);
}
