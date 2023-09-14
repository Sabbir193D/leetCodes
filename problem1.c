int* twoSum(int* nums, int  N, int target, int* returnSize){
    int *arr = malloc(2*sizeof(int));
    *returnSize = 2;
    for(int i=0; i < N-1; i++){
        for(int j=i+1; j < N; j++){
            if(nums[i] + nums[j] == target){
                arr[0] = i; arr[1] = j;
                return arr;
            }
        }
    }
    return arr;
}
