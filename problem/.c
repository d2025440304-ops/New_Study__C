 #include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;//17
	scanf("%d", &n);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int flag = 0;
	while (left <= right)
	{
		//int mid = (left + right) / 2;
		int mid = left + (right - left) / 2;
		if (arr[mid] < n)

		
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("找不到\n");
	return 0;
}

