class Solution {
public:
    bool isArmstrong(int n) {
        int k = to_string(n).length();
        int sum;
        int num = n;

        while(num > 0) {
            int digit = num % 10;
            sum += pow(digit,k);
            num = num / 10;
        }
        return sum == n;
    }
};