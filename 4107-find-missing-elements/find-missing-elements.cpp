class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       /* vector<int>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int start=nums[0];
        int end=nums[n-1];
        while(start!=end){
            if(find(nums.begin(), nums.end(), start + 1) == nums.end()){
                ans.push_back(start+1);
                
            }
            start++;
        }
        return ans;*/
       /* vector<int>final;
        int mini=*min_element(nums.begin(), nums.end());
        int maxi=*max_element(nums.begin(), nums.end());
        unordered_set<int>st;
        while(mini!=maxi){
            st.insert(mini);
            mini++;
        }
        for(int i=0;i<nums.size()){
            if(st.find(it)==nums.end()){
                final.push_back(it);
            }
        }
        return */
        vector<int>ans;
        int mini=*min_element(nums.begin(), nums.end());
        int maxi=*max_element(nums.begin(), nums.end());
        while(mini!=maxi){
            if(find(nums.begin(), nums.end(), mini + 1) == nums.end()){
                ans.push_back(mini+1);
                
            }
            mini++;


        }
        return ans;



       
        
    }
};