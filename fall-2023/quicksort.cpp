#include<iostream>
using namespace std;


void printArray(int array[], int size){
	for(int index = 0; index < size; index++){
		cout<<array[index]<<endl;		
	}
}

void swap(int *first, int *second){
	int temp = *first;
	*first = *second;
	*second = temp;
}

int partition(int array[], int low, int high){
	int pivot = array[high];
	int i = low - 1;
	for(int j = low; j < high; j++){
		if(array[j] <= pivot){
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i], &array[high]);
	return i+1;
}

void quickSort(int array[], int low, int high){
	if(low < high){
		int pi = partition(array, low, high);
		quickSort(array, low, pi-1); // left side
		quickSort(array, pi+1, high); // right side		
	}
}

int main(){
	int array[] = {1,2,8,3,9,4,10,5};
	int size = sizeof(array)/sizeof(array[0]);
	int low = 0;
	int high = size-1;
	quickSort(array, low, high);
	printArray(array, size);
	return 0;
}

