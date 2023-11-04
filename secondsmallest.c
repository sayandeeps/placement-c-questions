//WAP to identify Second smallest element in an array
#include <stdio.h>
void swap (int *x,int *y){
	*x= *x + *y;
	*y= *x - *y;
	*x=*x - *y;
}

void secondsmallest(int arr[], int n){
	int s = arr[0],sl=arr[1];
	if(s>sl){
		swap(&s,&sl);
	}
	for(int i =0;i<n;i++){
		if(arr[i]<s){
			sl=s;
			s=arr[i];
			
		}
		else if(arr[i]<sl && arr[i]!=s){
			sl=arr[i];
		}
	}
	printf("%d",sl);
}

int main(){
	int arr[] ={3,2,4,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	secondsmallest(arr,n);
}