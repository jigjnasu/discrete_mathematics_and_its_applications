/*
  Discrete Mathematics and it's Applications
  Dr. Kneeth H Rosen
  Solution 47, Chapter 4.3

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/03/2017
 */

#include <cstdio>
#include <cmath>

const int limit = 50;

bool is_prime(int n) {
    if (n < 2)
        return false;
    
    for (int i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0)
            return false;
    
    return true;
}

int gcd(int x, int y) {
    if (x % y == 0)
        return y;
    else
        gcd(y, x % y);
}

// Multiple factors means 2.2 = 4
// But 6 is okay as 6 has 2.3
bool is_multiple_factors(int n) {
    int i = 2;
    int count = 0;

    while (n > 1) {
        while (n && (n % i == 0)) {
            ++count;
            n /= i;
        }

        if (count > 1)
            return true;
            
        ++i;
        count = 0;
    }
    
    return false;
}

/*
  if prime
     1
  else
     0
 */
void solution_a() {
    for (int n = 1; n <= limit; ++n)
        if (is_prime(n))
            printf("1 ");
        else
            printf("0 ");
    printf("\n");
}

/*
  if prime number
     number
  else
     first factor which divides the number
 */
void solution_b() {
    printf("1 ");
    for (int n = 2; n <= limit; ++n) {
        if (is_prime(n)) {
            printf("%d ", n);
        } else {
            for (int i = 2; i <= std::sqrt(n); ++i) {
                if (is_prime(i) && (n % i == 0)) {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }
    printf("\n");
}

/*
  if prime number
     2
  else
     positive numbers, gcd(n, i) != 1
     factors of n
 */
void solution_c() {
    printf("1 ");
    for (int n = 2; n <= limit; ++n) {
        if (is_prime(n)) {
            printf("2 ");
        } else {
            int count = 2;
            for (int i = 2; i < n; ++i)
                if (n % i == 0)
                    ++count;
            printf("%d ", count);
        }
    }
    printf("\n");
}

/*
  if multiple factors
     0
  else
     1
 */
void solution_d() {
    printf("1 ");
    for (int n = 2; n <= limit; ++n) {
        if (is_multiple_factors(n))
            printf("0 ");
        else
            printf("1 ");
    }
    printf("\n");
}

/*
  Print the prime number till get the next one
*/
void solution_e() {
    int i = 2;
    int p = 1;
    printf("1 ");

    while (i <= limit) {
        if (is_prime(i))
            p = i;
        printf("%d ", p);
        ++i;
    }
    printf("\n");
}

/*
  Print the product of prime numbers
*/
void solution_f() {
    unsigned long long int p = 1;
    printf("1 ");
    int i = 2;
    
    while (i <= limit) {
        if (is_prime(i)) {
            p *= i;
            printf("%llu ", p);
        }
        ++i;
    }

    printf("\n");
}

int main() {
    printf("a) -- ");
    solution_a();

    printf("b) -- ");
    solution_b();
    
    printf("c) -- ");
    solution_c();

    printf("d) -- ");
    solution_d();

    printf("e -- ");
    solution_e();

    printf("f -- ");
    solution_f();            

    return 0;
}
