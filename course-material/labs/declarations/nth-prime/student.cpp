// Start counting at 0: nth_prime(0) == 2
// (no, 1 is not a prime)
unsigned nth_prime(unsigned n)
{
    int i, y;
    unsigned primes = 0;
    unsigned getal = 0;
    bool is_prime = true;

    while (primes < n) {
        for (i = 2; i <= y / 2; ++i) {
            if (y % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime == true) {
            primes++;
        }
        getal++;
    }
    return getal;
}