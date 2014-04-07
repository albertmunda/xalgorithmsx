#include "xalgox.h"
namespace xalgox {
	int binarySearch(int a[], int target, int arr_size)
	{
		int low=0;
		int high=arr_size-1;
		while(low<=high)
		{
			int mid 	= low+(high-low)/2;
			int midVal 	= a[mid];
			if(midVal < target)
				low = mid + 1;
			else if(midVal > target)
				high = mid-1;
			else 
				return mid;

		}
		return -1;
	}

	void quicksort(int arr[], int l, int r)
	{
		int s;
		if(l<r)
		{
			s=partition(arr, l, r);
			quicksort(arr,l, s-1);
			quicksort(arr,s+1,r);
		}
	}

	int partition(int a[], int l, int r)
	{
		int p=a[l];
		int i=l;
		int j=r+1;
		while(true) {
			do ++i;while(a[i]<=p && i<=r);
			do --j;while(a[j]>p);
			if(i>=j) break;
			swap(a[i],a[j]);
		}
		swap(a[l],a[j]);
		return j;
	}
}