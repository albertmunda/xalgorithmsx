#ifndef _XALGOX_
#define _XALGOX_

namespace xalgox
{
	#define swap(a,b)	{int temp=a;a=b;b=temp;}
	extern int binarySearch(int a[], int target, int arr_size);
	extern int partition(int a[],int l, int r);
	extern void quicksort(int arr[], int l, int r);
}
#endif