//WAP to Check if two arrays are the same or not
#include <stdio.h>

int compare(int arr1[], int arr2[], int n1, int n2){
	if(n1!=n2){
		return 0;
	}
	for(int i =0;i<n1;i++){
		if(arr1[i]!=arr2[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
	int arr1[]={3,4,2};
	int arr2[]={3,5,2};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	if(compare(arr1,arr2,n1,n2) == 1){
		printf("equal");
	}
	else{
		printf("not equal");
	}
}