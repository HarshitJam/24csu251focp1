#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        int nextPrime = n + 1;
        while (true) {
            bool isNextPrime = true;
            for (int i = 2; i <= nextPrime / 2; i++) {
                if (nextPrime % i == 0) {
                    isNextPrime = false;
                    break;
                }
            }
            if (isNextPrime) {
                cout << "The next prime number greater than " << n << " is " << nextPrime << endl;
                break;
            }
            nextPrime++;
        }
    } else {
        cout << "The factors of " << n << " are: ";
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}