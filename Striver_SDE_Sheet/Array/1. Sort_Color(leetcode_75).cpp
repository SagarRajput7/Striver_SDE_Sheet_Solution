Problem link : https://leetcode.com/problems/sort-colors/

class Solution {
public:
    
    // Time Comp : O(n) but more efficient dont require any extra space (inplace)
    void sortColors(vector<int>& nums){
        int l=0,h=nums.size()-1;
        int mid=0;
        while(mid<=h){
            switch(nums[mid]){
                case 0:
                    swap(nums[l++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[h--]);
                    break;
            }
        }
    }
    
    // Time Comp : O(n) but requires extra space;
    // void sortColors(vector<int>& nums) {
    //     int arr[4]={0};
    //     for(int i=0;i<nums.size();i++){
    //         arr[nums[i]]++;
    //     }
    //     int j=0;
    //     for(int i=0;i<3;i++){
    //         while(arr[i]--){
    //             nums[j++]=i;
    //         }
    //     }
        
    // }
};
