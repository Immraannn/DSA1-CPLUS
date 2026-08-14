class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int  n=nums1.size()-1;
       int  m=nums2.size()-1;
        int i=0,j=0;
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<=n && j<=m){
            if(nums1[i]==nums2[j]){

                if (ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
            
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
           
        }
         if (ans.empty()){
            return {};}

        else{return ans;}
        
       

    }
};
