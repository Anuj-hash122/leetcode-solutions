class Solution {
public:
    // int maxSubArray(vector<int>& nums) {
    //     int n=nums.size();
    //     int maxsum=INT_MIN;

    //     for(int i=0;i<n;i++){
    //         for(int j=i;j<n;j++){
    //             int currentsum=0;
    //         for(int k=i;k<=j;k++){
    //             currentsum+=nums[k];
    //         }
    //         maxsum=max(maxsum,currentsum);
    //     }  
    // }
    //  return maxsum;
    // }

    int maxSubArray(vector<int>&nums){
        // int maxsum=INT_MIN;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int currentsum=0;
        //     for(int j=i;j<n;j++){
        //         if(currentsum>maxsum){
        //             maxsum=currentsum;
        //         }
        //     }
        // }
        // return maxsum;


        int sum=0;
        int max=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max)
            max=sum;

            if(sum<0)
            sum=0;
        }
        return max;
    }
};