class Solution {
public:
    bool isPalindrome(int x) {
        long long  ReverseNum = 0;
        int original_x = x;
        if(x<0){
            return false;
        }
        while(x!=0){
            int LastNum = x% 10;
            ReverseNum = ReverseNum *10 + LastNum;
            x = x/10;
                if(ReverseNum>INT_MAX || ReverseNum<INT_MIN){
                return 0;
            }
        }
        if(original_x !=ReverseNum){
             return false;
        }
        else return true;
        
    }
};
/*
NOTE
1. negative number are never palindrom
2. x gets modified inside the loop so always save the copy of x initially
3.if copy of original x is not saved then it will return false as original x will be modified and will be 0 after the loop
*/