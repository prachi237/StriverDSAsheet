class Solution {
public:
    
    void sortColors(vector<int>& nums) {
        //Any sorting algorithm would work 
        //Merge Sort will take nlogn best sorting algo
        //Instead most optimised approach will be Dutch National Flag algo approach 
        //Applicable for sorting when 3 distint elements r to be sorted

        int left=0, right=nums.size()-1;
        int mid=0;

        while(mid<=right){
            if(nums[mid]==0){
                swap(nums[mid],nums[left]);
                left++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[right]);
                right--;
            }
        }

    }
};