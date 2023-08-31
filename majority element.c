#include<stdio.h>

int main(){
	
	int i,j,n;
	int arr[]={1,1,3,2,0,1,2,1};
	n=sizeof(arr)/sizeof(arr[0]);
	
	int count=0;
	int element=0;
	for(i=0;i<n;i++){
		if(count==0){
			element=arr[i];
			count++;
		}
		if(element==arr[i]){
			count++;
		}
		else{
			count--;
		}
		
	}
	int count1=0;
	for(j=0;j<n;j++){
		if(arr[j]==element){
			count1++;
		}
	}
	if(count1>n/2){
		printf("Majority value:%d\n",element);
	}
	else{
		printf("No Majority value");
	}
}
