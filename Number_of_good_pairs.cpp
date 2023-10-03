class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;


        for(int num:nums){
            if(mp.find(num)!=mp.end()){
                ans+=mp[num];
                mp[num]++;
            }
            else{
                mp[num]=1;
            }
        }
        return ans;
    }
};
