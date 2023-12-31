class Solution {
public:
    void reverse(vector<int>&nums,int i,int j){
        int l=i;
        int r=j;
        while(l<r){
            swap(nums[l],nums[r]);
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        if(k<0){
            k=k+nums.size();
        }

        reverse(nums,0,nums.size()-k-1);
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-1);
    }
};
