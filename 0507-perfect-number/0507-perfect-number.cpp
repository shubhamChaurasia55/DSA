class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i,sum=1;
        for(i=2;i<=sqrt(num);i++)
        {
            int pair;
            
            if(num%i==0 and num>1)
            {
                pair = num / i;
                sum = sum + i + pair;
            }
        }
        if(sum==num)
        {
            return true;
        }
        else{
            return false;
        }
        }
};