class Solution {
public:
    int reverse(int x) {
         long long  ReverseNum = 0;
        while(x!=0){
            int LastNum = x% 10;
            ReverseNum = ReverseNum *10 + LastNum;
            x = x/10;
                if(ReverseNum>INT_MAX || ReverseNum<INT_MIN){
                return 0;
            }
        }
        return ReverseNum;
    
    }
};
/*
NOTE
1. If there se is overflow then return 0-- mainly range is given so check it by INT_MAX and INT_MIN
2.use long long for storing reverse number as very large number can be given
3. x!=0 means x is not equal to 0 so that it can take both positieve and negative number
*/