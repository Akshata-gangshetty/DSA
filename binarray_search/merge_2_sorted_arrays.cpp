#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {  
     int n1=nums1Size;
    int n2=nums2Size;
    if(n1>n2) return findMedianSortedArrays(nums2,n2,nums1,n1);
    int low=0,high=n1;
    int left=(n1+n2+1)/2;
    int n=n1+n2;
    while(low<=high){
        int mid1=(low+high) >>1;
        int mid2=left-mid1;
        int l1=INT_MIN,l2=INT_MIN;
        int r1=INT_MAX,r2=INT_MAX;
        if(mid1<n1) r1=nums1[mid1];
        if(mid2<n2) r2=nums2[mid2];
        if (mid1-1>=0) l1=nums1[mid1-1];
         if (mid2-1>=0) l2=nums2[mid2-1];
         if(l1<=r2 && l2<=r1){
            if(n%2 ==1) return fmax(l1,l2);
            return (double)(fmax(l1,l2)+ fmin(r1,r2))/2.0;

         }
         else if(l1>r2) high=mid1-1;
         else low=mid1+1;
        

    }
    return 0;
    
    