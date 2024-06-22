class Solution {
public:
    bool isPalindrome(int x) {
        //Eliminate negative numbers as they are never palindrome numbers
        if (x < 0) {
            return false;
        }

        // Datatype "long long" used to avoid overflow
        long long reversed = 0;
        long long temp = x;

        /*Strip the least significant digit off the number, then store it in the "reversed" variable 
        Example --> x = 123
        1st iteration:
        digit = 123 % 10 = 3
        reversed = 0 *10 + digit = 3
        temp = 123 / 10 = 12
        
        2nd iteration:
        digit = 12 % 10 = 2
        reversed = 3 * 10 + digit = 32
        temp = 12 / 10 = 1 and so on .....
        */
        while (temp != 0) {
            reversed = (reversed * 10) + (temp % 10);
            temp /= 10;
        }

        return (reversed == x);
    }
};