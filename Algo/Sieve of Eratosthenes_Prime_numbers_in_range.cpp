/*
video: https://www.youtube.com/watch?v=klcIklsWzrY

*/

// old method

#include<iostream>
#include<cstring>



void sieve(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int i{2}; i*i <= n; i++) {
        if (prime[i] == true) {
            for (int j{i*i}; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    for (int i{2}; i <= n; i++) {
        if (prime[i]) {
            std::cout << i << " ";
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    sieve(n);
    return 0;
}





// Updated method

#include <bitset>
#include <iostream>
using namespace std;

bitset<500001> Primes;
void SieveOfEratosthenes(int n)
{
	Primes[0] = 1;
	for (int i = 3; i*i <= n; i += 2) {
		if (Primes[i / 2] == 0) {
			for (int j = 3 * i; j <= n; j += 2 * i)
				Primes[j / 2] = 1;
		}
	}
}

int main()
{
	int n;
  cin >> n;
	SieveOfEratosthenes(n);
	for (int i = 1; i <= n; i++) {
		if (i == 2)
			cout << i << ' ';
		else if (i % 2 == 1 && Primes[i / 2] == 0)
			cout << i << ' ';
	}
	return 0;
}
