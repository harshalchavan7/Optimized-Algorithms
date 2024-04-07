#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isPrime(num)) cout<<num<<" is prime."<<endl;
    else cout<<num<<" is not prime."<<endl;
    return 0;
}

/*This function first handles some special cases: if the number is less than or equal to 1, it returns false; if it's 2 or 3, it returns true. Then, it checks divisibility by 2 and 3 to eliminate even numbers. After that, it checks for divisibility by numbers in the form of 6k ± 1 up to the square root of the input number, as this covers all possible factors.

what is the time complexity of this code:
The time complexity of the provided code to check if a number is prime is O(sqrt(n)). This means that the time it takes to determine whether a number is prime or not grows roughly in proportion to the square root of the input number 'n'.

Here's a breakdown of the time complexity:
The code first handles some constant-time checks for small values of 'n' (<= 3).
The loop iterates from 5 to the square root of 'n' (i * i <= n) in steps of 6. This loop is the primary factor in the time complexity. Since the loop only goes up to the square root of 'n', it runs in O(sqrt(n)) time.
Within the loop, there are a few constant-time operations (modulus and addition).

Overall, the most significant factor affecting the time complexity is the loop that iterates up to the square root of 'n', making the time complexity of the code O(sqrt(n)) in terms of the input number 'n'.
*/