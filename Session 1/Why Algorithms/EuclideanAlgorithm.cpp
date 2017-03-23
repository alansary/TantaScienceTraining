/************************************************************************
 * Definition								*
 * For integers, a and b, their greatest common divisor or gcd(a, b) is *
 * the largestt integer d so that d divides both a and b.		*
 * Compute GCD
 * Input: Integers a, b >= 0.
 * Output: gcd(a, b).
 * Key Lemma
 * Let a' be the remainder when a is divided by b, then
 * gcd(a, b) = gcd(a', b) = gcd(b, a').
 ************************************************************************/
// The Euclidean Algorithm
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

long long FastGCD(long long a, long long b) {
    if (b < a) { //swap
        long long temp = a;
        a = b;
        b = temp;
    }
    for (long long i = a; i >= 1; i--)
        if ((a % i == 0) && (b % i == 0))
            return i;
}

long long GCD(long long a, long long b) {
    if (a < b) { //swap
	long long temp = a;
	a = b;
	b = temp;
    }
    while ((a % b) != a) {
	a %= b;
    }
    return FastGCD(a, b);
}

// log(ab) steps
// O(log(n))
long long EuclidGCD(long long a, long long b) {
    if (b == 0) return a; // By definition
    a %= b;
    return EuclidGCD(b, a);
}

int main() {
    int i = 1;
    while (true) {
        cout << "TestCase# " << i++ << endl;
        long long a = rand() % 9223372036854775807 + 1;
        long long b = rand() % 9223372036854775807 + 1;
        //long long a = rand() % 1000000 + 1;
        //long long b = rand() % 1000000 + 1;
/*
        if (GCD(a, b) != FastGCD(a, b)) {
            cout << "Wrong! " << a << ' ' << b << endl;
            cout << GCD(a, b) << ' ' << FastGCD(a, b) << endl;
            break;
        }
*/
/*
	if (EuclidGCD(a, b) != GCD(a, b)) {
	    cout << "Wrong! " << a << ' ' << b << endl;
	    cout << EuclidGCD(a, b) << ' ' << GCD(a, b) << endl;
	}
*/

	cout << "EuclidGCD(" << a << ", " << b << ") = " << EuclidGCD(a, b)
	     << endl;

/*
	cout << "GCD(" << a << ", " << b << ") = " << GCD(a, b)
	     << endl;
*/
/*
	cout << "FastGCD(" << a << ", " << b << ") = " << FastGCD(a, b)
	     << endl;
*/

/*
        cout << "OK" << '\n';
        cout << a << ' ' << b << endl;
*/
    }
/*
    long long a, b;
    cin >> a >> b;
    cout << NaiveGCD(a, b) << endl;
    cout << FastGCD(a, b) << endl;
*/
    return 0;
}
