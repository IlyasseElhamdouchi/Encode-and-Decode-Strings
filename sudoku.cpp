class Solution{
public:
    vector<int> productExceptSelf(vector<int>& nums){
        vector<int> PrdPre,PrdSuf;
    for(int i=0,j=nums.size()-1;i<nums.size();i++,j--){
        if(i == 0){ PrdPre.push_back(nums[i]);
                    PrdSuf.push_back(nums[j]);continue; }
       PrdPre.push_back(nums[i] * PrdPre[i-1]);
       PrdSuf.insert(PrdSuf.begin(),(nums[j] * PrdSuf[0]));
    }
    vector<int> res;
    for(int i=0;i<nums.size();i++){
        if(0 < i && i < nums.size()-1)
            res.push_back(PrdPre[i-1] * PrdSuf[i+1]);
        else if(i == 0){
            res.push_back(PrdSuf[i+1]);
        }else if(i == nums.size()-1){
            res.push_back(PrdPre[i-1]);
        }

    }
       return res;
    }
};
