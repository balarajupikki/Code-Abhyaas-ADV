#include<stdio.h>

int main(){
	
	int i,j,n;
	printf("ENter a number of elements");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter %d Element:",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int minfrequency=100;
	int minelement=0;
	
	for(i=0;i<n;i++){
		int frequency=1;
		for(j=i+1;j<n;j++){
			if(arr[j]==arr[i]){
				frequency++;
			}
		}
		if(frequency<minfrequency){
			minfrequency=frequency;
			minelement=arr[i];
			
		}
	}
	printf("minimum element %d and thier frequency %d",minelement,minfrequency);
}
