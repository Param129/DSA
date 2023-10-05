class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto i:mp){
            if(i.second>n/3)ans.push_back(i.first);
        }
        return ans;
    }
};
