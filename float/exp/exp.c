
double myexp(double x) {

    double fact = 1;
    double xtok = 1;
    double sum = 0; 
    double term = 1; 

    for(int k = 1; k < 200; k++) {
       sum = sum + xtok/fact;     
       fact = fact * k;
       xtok = xtok * x;
    }

    return sum;
}
