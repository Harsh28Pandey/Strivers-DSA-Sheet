class Solution {
public:
    int reverse(int x) {
        int rem = 0;
        while(x != 0) {
            int dig = x % 10;
            if(rem > INT_MAX / 10 || rem < INT_MIN / 10) {
                return 0;
            }
            rem = rem * 10 + dig;
            x = x / 10;
        }
        return rem;
    }
};