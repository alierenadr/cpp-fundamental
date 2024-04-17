#include <iostream>
#include <string>
using namespace std;

void check_prime() {
    int num;
    
    cout << "Enter a positive integer to check: ";
    cin >> num;

    bool is_prime = true;;
    for(int i = 2; i <= num/2; ++i) {
        if(num % i == 0) {
            is_prime = false;; 
            break;
        }
    }

    if (is_prime) {
        cout << num << " is a prime number.";
    }
    else {
        cout << num << " is not a prime number.";
    }
}

int main() {
    check_prime();
    return 0;
}
