class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n=seq.size();
        vector<int>result(n);
        int count=0;
        for(int i=0;i<n;i++){
            if(seq[i]=='('){
                count++;
                result[i]=count%2;
            }
            else{
                result[i]=count%2;
                count--;
            }
        }
        return result;
        
        
    }
};