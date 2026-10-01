class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            int sum = 0;
            int num = n;
            while (num > 0) {
                int rem = num % 10;
                sum += rem * rem;
                num /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};
