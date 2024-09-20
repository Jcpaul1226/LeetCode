bool isPalindrome(int x) {
    int temp = x;    // temp variable to hold number to check
    int reverse = 0; // variable to hold the reverse number
    while (temp > 0) {
        int temp1 = temp % 10;          // get right most digit
        reverse = reverse * 10 + temp1; // shift number left and add digit
        temp = temp / 10;               // remove right most digit from temp
    }
    if (reverse == x)
        return true;

    else if (reverse < 0) // return false if negative number
        return false;

    else
        return false;
}
Notes:
use modulus to extract the last number, multiplication by 10 to shift a number, division by 10 to remove the right most number.
Palindrome cant be negative
