	#include <stdio.h>
	#include <iostream>
	using namespace std;
	// Function to merge two subarrays of arr[]
	void merge(int arr[], int left, int middle, int right) {
	    int i, j, k;
	    int n1 = middle - left + 1;
	    int n2 = right - middle;
	
	    // Create temporary arrays
	    int L[n1], R[n2];
	
	    // Copy data to temporary arrays L[] and R[]
	    for (i = 0; i < n1; i++)
	        L[i] = arr[left + i];
	    for (j = 0; j < n2; j++)
	        R[j] = arr[middle + 1 + j];
	
	    // Merge the temporary arrays back into arr[left..right]
	    i = 0; // Initial index of first subarray
	    j = 0; // Initial index of second subarray
	    k = left; // Initial index of merged subarray
	
	    while (i < n1 && j < n2) {
	        if (L[i] <= R[j]) {
	            arr[k] = L[i];
	            i++;
	        } else {
	            arr[k] = R[j];
	            j++;
	        }
	        k++;
	    }
	
	    // Copy the remaining elements of L[], if there are any
	    while (i < n1) {
	        arr[k] = L[i];
	        i++;
	        k++;
	    }
	
	    // Copy the remaining elements of R[], if there are any
	    while (j < n2) {
	        arr[k] = R[j];
	        j++;
	        k++;
	    }
	}
	
	// Recursive function to sort an array using merge sort
	void mergeSort(int arr[], int left, int right) {
	    if (left < right) {
	        // Same as (left+right)/2, but avoids overflow for large left and right
	        int middle = left + (right - left) / 2;
	        // Sort first and second halves
	        
	        cout<<"Call mergeSort(arr,"<<left<<","<<middle<<");\n";
	        mergeSort(arr, left, middle);

	        cout<<"End of mergeSort(arr,"<<left<<","<<middle<<");\n";
	        
	        cout<<"Call mergeSort(arr,"<<middle+1<<","<<right<<");\n";
	        mergeSort(arr, middle + 1, right);
	        cout<<"End of mergeSort(arr,"<<left<<","<<middle<<");\n";
	        
	        // Merge the sorted halves
	        cout<<"merge(arr,"<<left<<","<<middle<<","<<right<<");\n";
			merge(arr, left, middle, right);
	    }
	    cout<<"Recursive Function End. left: "<<left<<" Right: "<<right<<endl;
	}
	
	// Utility function to print an array
	void printArray(int arr[], int size) {
	    for (int i = 0; i < size; i++)
	        printf("%d ", arr[i]);
	    printf("\n");
	}
	
	// Driver program to test the mergeSort function
	int main() {
	    int arr[] = {12, 11, 13, 5, 6, 7};
	    int arrSize = sizeof(arr) / sizeof(arr[0]);
	
	    printf("Given array: \n");
	    printArray(arr, arrSize);
		cout<<endl;
	    
		mergeSort(arr, 0, arrSize - 1);
	    cout<<endl;

	    printf("\nSorted array: \n");
	    printArray(arr, arrSize);
	
	    return 0;
	}


