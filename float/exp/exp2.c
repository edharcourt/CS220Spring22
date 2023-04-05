
double myexp(double x) {

    double sum = 1; 
    double term = 1; 

    for(int k = 1; k < 12; k++) {
       term = term * (x/k);
       sum = sum + term;
    }

    return sum;
}
