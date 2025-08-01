class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         std::unordered_map<int,int>num_index;
        for(int i=0;i<nums.size();i++)
        {
            int result=target-nums[i];
            if(num_index.find(result)!=num_index.end())
            {
                return{num_index[result],i};
            }
            num_index[nums[i]]=i;
        }
        return{};
        
    }
};