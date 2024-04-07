/*So the approach is traversing the integer bit by bit from right to left, if there's 1 in last digit, double it and one, else just double it*/

#include <iostream>

uint32_t reverseBits(uint32_t n) {
    uint32_t ans=0;
    for(int i=0;i<32;i++)
    {
        int t=n&(1<<i);
        if(t) ans=ans*2+1;
        else ans=ans*2;
    }
    return ans;
}  

/*
uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0; // Initialize a variable to store the reversed bits
    
    // Loop through each bit position in a 32-bit integer
    for (int i = 0; i < 32; i++) {
        // Extract the current bit from 'n'
        int t = n & (1 << i); // Use a bitmask to isolate the current bit
        
        // If the extracted bit is set (non-zero), set the corresponding bit in 'ans' to 1
        if (t) {
            ans = ans * 2 + 1; // Shift 'ans' left by 1 and add 1
        } else {
            ans = ans * 2; // If the extracted bit is zero, just shift 'ans' left by 1
        }
    }
    
    return ans; // Return the 32-bit integer with reversed bits
}

Absolutely! Here's the code with added comments to explain each step:

c
Copy code
uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0; // Initialize a variable to store the reversed bits
    
    // Loop through each bit position in a 32-bit integer
    for (int i = 0; i < 32; i++) {
        // Extract the current bit from 'n'
        int t = n & (1 << i); // Use a bitmask to isolate the current bit
        
        // If the extracted bit is set (non-zero), set the corresponding bit in 'ans' to 1
        if (t) {
            ans = ans * 2 + 1; // Shift 'ans' left by 1 and add 1
        } else {
            ans = ans * 2; // If the extracted bit is zero, just shift 'ans' left by 1
        }
    }
    
    return ans; // Return the 32-bit integer with reversed bits
}
This function takes an unsigned 32-bit integer n as input, goes through each bit of n, and constructs a new integer ans with its bits reversed. For each bit in n, it extracts the bit, shifts ans left by one bit, and sets the least significant bit of ans according to the extracted bit from n.
*/