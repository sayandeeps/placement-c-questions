//WAP to find out Smallest and largest element in an array
#include <stdio.h>


int max(int a, int b) {
  return (a > b) ? a : b;
}

int min(int a, int b) {
  return (a < b) ? a : b;
}

int largestnormal(int arr[],int n){
	int largest = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest = arr[i];
		}
	}
	return largest;
}

int smallestnormal(int arr[],int n){
	int smallest = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
			smallest = arr[i];
		}
	}
	return smallest;
}

//using divide and conqure method





int main(){
	int arr[] = {1, 5, 7, 20, 45, 25, 30};
	int n = sizeof(arr)/sizeof(arr[0]);
	int largest = smallestnormal(arr,n);
	printf("The largest element in the array is: %d\n", largest);
}