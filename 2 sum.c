#include<stdio.h>
int main(){
	
	int i,left,right;
	int arr[]={5,7,9,13,24,26};
	int n=sizeof(arr)/sizeof(arr[0]);
	int targetsum=22;
	
	left=0;
	right=n-1;
	while(left<right){
		if(arr[left]+arr[right]==targetsum){
			printf("Target sum %d is achieved by elements at indices %d and %d\n", targetsum, left, right);
            break;
		}
		else if(arr[left]+arr[right]>targetsum){
			right--;
		}
		else if(arr[left]+arr[right]<targetsum){
			left++;
		}
	}
}
