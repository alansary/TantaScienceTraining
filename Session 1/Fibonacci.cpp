#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Recursive solution
// O(2^n)
long long fibonacci(int n) {
    if (n <= 1) return n; //n >= 0
    else return fibonacci(n-1) + fibonacci(n-2);
}

// Iterative solution
// 2n + 2 lines of code are to be executed
// O(n)
long long fibonacciFast(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else {
        long long twoBack = 0;
        long long oneBack = 1;
        while (n--) {
            long long temp = oneBack;
            oneBack += twoBack;
            twoBack = temp;
        }
        return twoBack;
    }
}

int main() {
    int n;
    cin >> n;
    // Each call it takes the time it spent in all the previous call
    // plus the time to calculate the last addition result
    //for (int i = 0; i <= n; i++)
//	cout << "F(" << i << "): " << fibonacci(i) << endl;
    // fibonacciFast
    for (int i = 0; i <= n; i++) { //Fibonacci from 0 to n, inclusive
        cout << "F(" << i << "): " << fibonacciFast(i) << endl;
    }
    return 0;
}
