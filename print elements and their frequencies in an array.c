// write a program to print element and its frequency in a array of elemenmts

#include<stdio.h>
int main(){
	int n,i,j,count;
	int arr[]={1,2,3,2,4,3,1,2,3};
	n=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<n;i++){
		count=1;
		if(arr[i] != -1){
			for(j=i+1;j<n;j++){
				if(arr[i]==arr[j]){
					count++;
					arr[j]=-1;
			}
		}
		printf("Element %d occurs % times\n", arr[i], count);
	}
}
}
