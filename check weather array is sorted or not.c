#include<stdio.h>

int main(){
	
	int i;
	int arr[]={5,7,4,6,4,7,5,4};
	int length=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<length;i++){
		if (arr[i]>arr[i+1]){
			printf("not Sorted array");
			break;	
		}
	}
}
