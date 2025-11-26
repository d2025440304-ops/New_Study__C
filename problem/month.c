#include<stdio.h>
int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int get_days_of_month(int y, int m)
{
	int days[13] = { 0, 31, 28, 31, 30, 31, 30 ,31, 31, 30, 31, 30 ,31 };
	//               0  1   2   3   4   5   6   7   8   9   10  11  12
	int d = days[m];
	if (is_leap_year(y) && m == 2)
		d += 1;
	return d;
}

int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	int d = get_days_of_month(year, month);
	printf("%d\n", d);

	return 0;
}