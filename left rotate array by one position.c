#include<stdio.h>
int main(){
	int i;
	int arr[]={1,4,7,0,8};
	int length=sizeof(arr)/sizeof(arr[0]);
	int temp=arr[0];
	for(i=0;i<length-1;i++){
		arr[i]=arr[i+1];
	}
	arr[length-1]=temp;
	for(i=0;i<length;i++){
		printf("%d",arr[i]);
	}
	
}
