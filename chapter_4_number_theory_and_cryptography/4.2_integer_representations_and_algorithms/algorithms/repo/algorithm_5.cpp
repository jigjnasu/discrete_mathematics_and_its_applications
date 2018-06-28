/*
  Discrete Mathematics and It's Applications.
  By: Kneeth H Rosen
  Algorithm 5, Chapter 4.2
  Author: Rakesh Kumar, cpp.rakesh@gmail.com
  Date: March 7th, 2017
 */

#include <cstdio>

int modular_exp(int base, int exp, int mod) {
    base %= mod;
    int x = 1;

    while (exp > 0) {
        if (exp & 1)
            x = (x * base) % mod;
        
        base = (base * base) % mod;
        exp >>= 1;
    }

    return x;
}

int main() {
    int n = 3;
    int k = 644;
    int m = 645;

    printf("[%d] ^ [%d] mod [%d] == [%d]\n",
           n, k, m, modular_exp(n, k, m));
    
    return 0;
}
