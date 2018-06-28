/*
  Discrete Mathematics and it's Applications
  Dr. Kneeth H Rosen
  Solution 48, Chapter 4.3

  Rakesh Kumar, cpp.rakesh(at)gmail.com
  Date: 25/03/2017
 */

#include <cmath>
#include <vector>
#include <cstdio>

const int limit = 50;

bool is_prime(int n) {
    if (n < 2)
        return false;
    
    for (int i = 2; i <= std::sqrt(n); ++i)
        if (n % i == 0)
            return false;
    
    return true;
}

std::vector<int> all_primes(int n) {
    std::vector<int> primes;
    for (int i = 0; i <= n; ++i)
        primes.push_back(i);

    for (std::size_t i = 2; i < primes.size(); ++i)
        if (i == primes[i])
            for (std::size_t j = i * i; j < primes.size(); j += i)
                primes[j] = 0;

    std::vector<int> result;
    for (std::size_t i = 2; i < primes.size(); ++i)
        if (primes[i])
            result.push_back(primes[i]);

    return result;
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

std::vector<int> unique_factors(int n) {
    std::vector<int> factors;
    int i = 2;
    
    while (n > 1) {
        if (n > 1 && n % i == 0) {
            while (n % i == 0)
                n /= i;
            factors.push_back(i);
        }
        ++i;
    }
    
    return factors;
}

/*
  print a prime number till find next one.
 */

void solution_a() {
    const std::vector<int> primes = all_primes(limit * 2);
    printf("%d ", primes[0]);
    int p = 0;

    for (int i = 1; i <= limit; ++i) {
        printf("%d ", primes[p]);
        if (primes[p] == i)
            ++p;
    }

    printf("\n");
}

/*
  start with zero increment when have a prime number
 */
void solution_b() {
    int number = 0;
    for (int i = 1; i <= limit; ++i) {
        if (is_prime(i))
            ++number;
        printf("%d ", number);
    }
    
    printf("\n");
}

/*
  if prime number
     0
  else
     1
 */
void solution_c() {
    for (int i = 1; i <= limit; ++i)
        if (is_prime(i))
            printf("0 ");
        else
            printf("1 ");
    printf("\n");
}

/*
  if prime  number   -1
  if unique factor    1
  if multiple factos  0
 */
void solution_d() {
    for (int i = 1; i <= limit; ++i)
        if (is_prime(i))
            printf("-1 ");
        else if (is_multiple_factors(i))
            printf("0 ");
        else
            printf("1 ");
    printf("\n");
}

/*
  if (more than one factor)
     0
  else
     1
 */
void solution_e() {
    for (int i = 1; i <= limit; ++i)
        if (unique_factors(i).size() > 1)
            printf("0 ");
        else
            printf("1 ");
    printf("\n");
}

/*
  Print square(prime number)
 */
void solution_f() {
    const std::vector<int> primes = all_primes(limit * 2);
    for (std::size_t i = 0; i < primes.size(); ++i)
        printf("%d ", primes[i] * primes[i]);
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

    printf("e) -- ");
    solution_e();

    printf("f) -- ");
    solution_f();                
    
    return 0;
}
