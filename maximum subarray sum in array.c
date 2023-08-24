#include<stdio.h>
int main(){
	int i,sum=0,start,temp;
	int max=0;
	int arr[8]={-2,-3,4,-1,-2,1,5,-3};
	for(i=0;i<8;i++){
		sum=sum+arr[i];
		if(sum<=0){
			sum=0;
			if(sum==0){
				start=i+1;
				
			}
		}
		else{
			if(sum>max){
				max=sum;
				temp=i;	
			}
			
		}
	}
	printf("Maximum Value in sub array %d",max);
	for(i=start;i<=temp;i++){
		printf("Subarray %d\n",arr[i]);
	}
	
}
