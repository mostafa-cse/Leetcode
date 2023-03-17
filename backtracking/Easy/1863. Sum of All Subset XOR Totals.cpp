class Solution {
public:
    
    int ans(vector<int>nums,int i,int X){
        if(i == nums.size()){
            return X;
        }
	//do part
        int a = ans(nums,i+1,X^nums[i]);
	
	//not do part
        int b = ans(nums,i+1,X);
        return (a+b);
    }
    int subsetXORSum(vector<int>& nums) {
        return ans(nums,0,0);
    }
};
