//WAP to find out Sum of positive square elements in an array
#include <stdio.h>
int main(){
	int n,sum=0 ;
	scanf("%d",&n);
	int arr[n];
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i]*arr[i];
	}
	printf("%d",sum);

}