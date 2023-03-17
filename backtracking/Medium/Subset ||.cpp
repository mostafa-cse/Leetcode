class Solution {
public:
    void call(vector<int>& nums,vector<vector<int>>& ans,vector<int>&tem,int i){
        if(i==(int)nums.size()){
            ans.push_back(tem);
            return;
        }
        call(nums,ans,tem,i+1);
        tem.push_back(nums[i]);
        call(nums,ans,tem,i+1);
        tem.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>tem;
        call(nums,ans,tem,0);
        sort(ans.begin(),ans.end());
        //what for this line
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};
