class Solution {
public:
    int minOperations(string s) {
        int n = s.size();

        if(is_sorted(s.begin(), s.end())){
            return 0;
        }

        if(n == 2){
            return -1;
        }

        char smallest = *min_element(s.begin(), s.end());
        char largest = *max_element(s.begin(), s.end());

        if(s[0] == largest && s[n-1] == smallest){
            if(count(s.begin(), s.end(), largest) == 1 &&
               count(s.begin(), s.end(), smallest) == 1){
                return 3;
            }
        }

        if(s[0] == smallest || s[n-1] == largest){
            return 1;
        }

        return 2;
    }
};