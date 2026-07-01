// 268. Missing Number
int missingNumber(int* nums, int numsSize) {

    if (numsSize == 1){   //리스트 원소 개수가 하나일 경우
        if (nums[0])
            return 0;
        return 1;
    }
    
    int tmp;
    
    for(int i=0; i<numsSize-1; i++)     //버블정렬
        for(int j=numsSize-1; i<j; j--)
            if (nums[j-1] > nums[j]){
                tmp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = tmp;
            }
    
    if (nums[0])      
        return 0;     //0이 missing num인 경우

    for(int i=0; i<numsSize-1; i++)
        if (nums[i+1] - nums[i] > 1){     //중간에 missing num이 있는 경우
            tmp = nums[i+1];
            return (tmp-1);
        }
    return numsSize;     //n이 missing num인 경우
}
