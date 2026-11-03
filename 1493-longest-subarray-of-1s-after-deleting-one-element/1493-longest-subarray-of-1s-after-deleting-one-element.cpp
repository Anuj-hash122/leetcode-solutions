class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zerocount=0;
        int longestwindow=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            zerocount+=(nums[j]==0);
            while(zerocount>1){
                zerocount-=(nums[i]==0);
                i++;
            }
            longestwindow=max(longestwindow,j-i);
        }
        return longestwindow;
    }
};