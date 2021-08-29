#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
void swap(int* a ,int* b)
{
	int temp = *a;
	*a =*b;
	*b=temp;
}


int array[100000];

//function to sort array using insertion sort 

void insertionSort(int arr[],int n){
	int i , key , j;
	for(i=1;i<n;i++){
		key=arr[i];
			j=i-1;	
	while(j>=0 && arr[j] >key )
	{arr[j+1]=arr[j];
	j=j-1;
	}
	arr[j+1]=key ;

	
}
			printf(" the array is sorted using insertion sort in %u seconds\n",clock());

}
int size=100000;
void random(int array[]) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 100000 + 1;
	}
}





int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; // pivot 
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        // If current element is smaller than the pivot 
        if (arr[j] < pivot) 
        { 
            i++; // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        // pi is partitioning index
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}
 
int main(){
	int i;

srand(time(NULL));
for (i = 0; i < size; i++) {
		array[i] = rand() % 100000 + 1;
	}
	
	random(array);

	printf("Array of 100000 random numbers is initialized\n");
quickSort(array , 0,size-1);
	printf("The array is sorted using quick sort in %u seconds \n", clock());
insertionSort(array,size);
return 0;
	
}
