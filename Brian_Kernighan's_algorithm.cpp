#include <iostream>
#include <vector>
using namespace std;

//Brian Kernighan's algorithm
vector<int> countBits(int n)
{
    vector<int> ans(n + 1, 0);
    for (int i = 1; i <= n; ++i) ans[i] = ans[i >> 1] + (i & 1);
    return ans;
}

int main()
{
    vector<int> result = countBits(5);
    for (int i = 0; i < result.size(); ++i) cout << result[i] << " ";
    return 0;
}

/*
Example 1:
Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0 = 0 set bits
1 --> 1 = 1 set bits
2 --> 10 = 1 set bits

Example 2:
Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0 = 0 set bits
1 --> 1 = 1 set bits
2 --> 10 = 1 set bits
3 --> 11 = 2 set bits
4 --> 100 = 1 set bits
5 --> 101 = 2 set bits
*/

/*
// Define a function countBits that takes an integer n as input and returns a vector of integers.
vector<int> countBits(int n)
{
    // Create a vector 'ans' of size (n + 1) initialized with all 0s.
    vector<int> ans(n + 1, 0);

    // Iterate through each number from 1 to n.
    for (int i = 1; i <= n; ++i)
    {
        // Calculate the number of set bits for the current number 'i'.

        // The expression 'i >> 1' shifts the bits of 'i' to the right by 1 place.
        // This operation effectively divides 'i' by 2, ignoring any remainder.
        // For example: 5 (101 in binary) becomes 2 (10 in binary) after the right shift.

        // 'i & 1' performs a bitwise AND operation between 'i' and 1.
        // It checks if the least significant bit (LSB) of 'i' is 1 or 0.
        // For example: 5 (101 in binary) & 1 results in 1 (since the LSB is 1).

        // 'ans[i >> 1]' fetches the count of set bits for 'i / 2' from the 'ans' array.
        // '+(i & 1)' adds 1 to the count if the LSB of 'i' is 1, or 0 if it's 0.
        // This calculates the total count of set bits for the current 'i'.
        
        // Store the calculated count of set bits for 'i' in the 'ans' array.
        ans[i] = ans[i >> 1] + (i & 1);
    }

    // Return the array containing the count of set bits for numbers from 0 to n.
    return ans;
}
*/