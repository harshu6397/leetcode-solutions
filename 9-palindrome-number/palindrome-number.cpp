class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        int tens = 10;

        if(x < 0){
            return false;
        }

        int temp = x;
        while(temp != 0){
            int digit = temp % 10;
            rev = (rev * tens) + digit;
            temp = temp / 10;
        }
        return (rev == x); 
    }
};