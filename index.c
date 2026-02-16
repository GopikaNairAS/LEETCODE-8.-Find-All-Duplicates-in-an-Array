int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * numsSize);
    int a = 0;
    
    for (int i = 0; i < numsSize; i++) {
        int num = abs(nums[i]);
        if (nums[num - 1] < 0) 
        {
            result[a++] = num;
        } 
        
        else 
        {
            nums[num - 1] = -nums[num - 1];
        }
    }
    
    *returnSize = a;
    return result;
}
