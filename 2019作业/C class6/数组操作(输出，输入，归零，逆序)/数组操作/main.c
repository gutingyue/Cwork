#include "arr_op.h"

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = sizeof(arr) / sizeof(arr[0]);
	init(arr, i);
	Printf(arr, i);

	reverse(arr, i);
	Printf(arr, i);

	empty(arr, i);
	Printf(arr, i);
	system("pause");
	return 0;
}