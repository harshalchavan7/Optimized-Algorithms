#include <iostream>
using namespace std;

//To count no of set bits
int count(uint32_t n) {
	return n==0?0:(n&1)+count(n>>1);
}

int main()
{
    cout<<count(5);
    return 0;
}
/*
// Define a function 'count' that takes an unsigned 32-bit integer 'n' as input and returns an integer.
int count(uint32_t n) {
    // Check if 'n' is equal to 0. If true, return 0 (base case for recursion).
    if (n == 0) {
        return 0;
    } else {
        // If 'n' is not 0:
        
        // 'n & 1' performs a bitwise AND operation between 'n' and 1.
        // It checks if the least significant bit (LSB) of 'n' is 1 or 0.
        // If 'n' is odd, 'n & 1' equals 1; if 'n' is even, 'n & 1' equals 0.

        // Recursively call 'count' with 'n' right-shifted by 1 ('n >> 1').
        // This shifts the bits of 'n' to the right by 1 place, effectively dividing 'n' by 2.
        // It continues until 'n' becomes 0, using the base case to stop the recursion.

        // Return the count of set bits for 'n' (number of 1s) by adding the LSB (n & 1)
        // with the count of set bits for the remaining bits obtained by shifting 'n' to the right.
        return (n & 1) + count(n >> 1);
    }
}
This function uses recursion to count the number of set bits (1s) in the binary representation of the given unsigned 32-bit integer 'n'. It continuously shifts 'n' to the right, checking the LSB each time until 'n' becomes 0 (base case), effectively counting the set bits recursively.
*/