class Solution {
public:
   
 int first(vector<int>&arr,int target){
            int low=0;
            int high=arr.size()-1;
            int ans=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[mid]==target){
                    ans=mid;
                    high=mid-1;
                }
                else if(arr[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
             return ans;
        }


         int last(vector<int>&arr,int target){
            int low=0;
            int high=arr.size()-1;
            int ans=-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[mid]==target){
                    ans=mid;
                    low=mid+1;
                }
                else if(arr[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
             return ans;
        }



  vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result(2);
        result[0]=first(nums,target);
        result[1]=last(nums,target);
        return result;
    }       
};      
