class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5) return 0;
        int div = 5;
        int zeros=0;
        while(n>=div){
            zeros += n / div;
            div = div*5;
        }
        return zeros;
    }
};