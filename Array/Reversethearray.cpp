#include<stdio.h>
#include<iostream>

using namespace std;

int main ()
{
	int arr[] = {0,1,2,3,4,5,6,7,8};
	int sizeofint = sizeof(int);
	int sizeofarray = sizeof(arr);
	int elements = sizeofarray/ sizeofint;
	int start = 0 ;
	int temp;
	int end = elements -1;
	while(start < end)
	{
		//swap the numbers on those pointers.
		temp = arr[end];
		arr[end] = arr[start];
		arr[start] = temp;
		start = start + 1 ;
		end = end -1 ;
	}
	for(int i = 0 ; i < elements ; i++)
	{
		cout << arr[i];
	}
}
