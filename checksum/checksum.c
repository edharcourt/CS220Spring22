
// Compute the checksum of an integer
int checksum(int n) {
    int sum = 0;

    while (n > 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    
    return sum % 10; 
}

