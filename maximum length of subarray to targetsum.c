#include<stdio.h>
int main(){
	int start=0,end=0,sum=0,targetsum,max=0;
	printf("ENter a Targetsum:");
	scanf("%d",&targetsum);
	int arr[]={2,1,4,3,1,1,1};
	int length=sizeof(arr)/sizeof(arr[0]);
	
	for(end=0;end<length;end++){
		sum=sum+arr[end];
		while(sum>targetsum){
			sum=sum-arr[end];
			start++;
		}
		if(sum==targetsum && (end-start+1)>max){
			max=end-start+1;
		}
		
	}
	printf("Maximum length %d",max);
}
