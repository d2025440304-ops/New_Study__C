int removeElement(int* nums, int numsSize, int val)
{
    //定义双指针，一个快指针搜索，一个慢指针被覆盖
    //在双指针的解题里大多都用的是反面的思想
    //当 src 指向value 时，src++，会将 value 留下来给dest，当 src 遇到不是 value 时，将 src 的值赋给 dest，也就是将 value 覆盖，这样 dest 加几次，就证明覆盖了几次 value，也就是数组中的真实有效元素
    int src,dest;
    while(src < numsSize)
    {
        if(nums[src] == val)
        {
            src++;
        }
        else 
        {
            nums[dest] = nums[src];
            src++;
            dest++;
        }
    }
    return dest;
}


