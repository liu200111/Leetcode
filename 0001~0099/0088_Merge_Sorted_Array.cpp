class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int num = 0;
        if ( nums1.empty())
            nums1 = nums2;
        if ( !nums2.empty() ){
            for ( int i = 0; i < nums2.size(); ++i ) {
                for ( int j = 0; j < nums1.size(); ++j ) {
                    if ( nums2[i] <= nums1[j] ) {
                        nums1.insert( nums1.begin() + j, nums2[i]);
                        nums1.pop_back();
                        ++num;
                        break;
                    }
                }
            }
            for (int i = n - 1; i >= num; --i ) 
                nums1[m + i] = nums2[i];
            
        }
        
    }
};
