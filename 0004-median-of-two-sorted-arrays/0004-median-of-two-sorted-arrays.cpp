class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merged;
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            merged.push_back(nums1[i]);
        }
        sort(merged.begin(),merged.end());
        double median;
        int l = merged.size();
        if(l%2 != 0){
            median = merged[l/2];
        }else{
            median = (merged[l/2]+merged[l/2-1])/2.0;
        }
        return median;
    }
};