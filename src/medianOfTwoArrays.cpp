#include <vector>

using namespace std;

class MedianOfTwoArrays {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size()==0)
        {
            if (nums2.size() % 2 == 0)
                return (nums2[nums2.size() / 2 - 1] + nums2[nums2.size() / 2]) / 2.0;
            else
                return nums2[nums2.size() / 2];
        }
        else if (nums2.size()==0)
        {
            if (nums1.size() % 2 == 0)
                return (nums1[nums1.size() / 2 - 1] + nums1[nums1.size() / 2]) / 2.0;
            else
                return nums1[nums1.size() / 2];
        }
        else
        {
            vector<int> merge;
            int pos1 = 0;
            int pos2 = 0;
            while(pos1 < nums1.size() && pos2 < nums2.size())
            {
                if (nums1[pos1] <= nums2[pos2])
                    merge.push_back(nums1[pos1++]);
                else
                    merge.push_back(nums2[pos2++]);
            }
            while(pos1 < nums1.size())
                merge.push_back(nums1[pos1++]);
            while(pos2 < nums2.size())
                merge.push_back(nums2[pos2++]);
            int sizeOfMerge = nums1.size() + nums2.size();
            if (sizeOfMerge % 2 == 0)
                return (merge[sizeOfMerge / 2 - 1] + merge[sizeOfMerge / 2]) / 2.0;
            else
                return merge[sizeOfMerge / 2];
        }
    }
};