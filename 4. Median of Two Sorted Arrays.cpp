class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        const int n1Size = nums1.size();
        const int n2Size = nums2.size();
        if(!(n1Size+n2Size))
            return 0;
        if(!n1Size)
            if(n2Size%2==1)
                if(n2Size==1)
                    return nums2[0];
                else
                    return nums2[n2Size/2];
            else
                return (nums2[n2Size/2] + nums2[n2Size/2-1])*0.5;
        else if(!n2Size)
            if(n1Size%2==1)
                if(n1Size==1)
                    return nums1[0];
                else
                    return nums1[n1Size/2];
            else
                return (nums1[n1Size/2] + nums1[n1Size/2-1])*0.5;
                
        const int Mid = (n1Size + n2Size + 1) / 2;
        int ptr1, ptr2, Cnt;
        ptr1 = ptr2= Cnt = 0;
        while (Cnt < Mid) {
            if(ptr1>=n1Size)
                ptr2++;
            else if(ptr2>=n2Size)
                ptr1++;
            else{
                if (nums1[ptr1] < nums2[ptr2])
                    ptr1++;
                else
                    ptr2++;
            }
            Cnt++;
        }
        
        const int Ans1 = max(ptr1 <= 0 ? INT_MIN : nums1[ptr1 - 1], 
                           ptr2 <= 0 ? INT_MIN : nums2[ptr2 - 1]);
 
        if ((n1Size + n2Size) % 2 == 1)
            return Ans1;    

        if(ptr1 >= n1Size)
            return (Ans1 + nums2[ptr2])*0.5;
        else if(ptr2 >= n2Size)
            return (Ans1 + nums1[ptr1])*0.5;
        else
            return (Ans1 + min(nums1[ptr1],nums2[ptr2]))*0.5;
    }
};
