#include <stdio.h>

int main(){
	
//	Find The Largest Number in Array 

	int ele;
	
	printf("Enter the Number of elements ");
	scanf("%d", &ele);

	int a[ele];
	
	for(int i=0; i<ele; i++){
	
	printf("Enter the %d element :- ",i);
	scanf("%d", &a[i]);
	
	}
		
	int max = a[0];
		
	for(int j=0; j<ele; j++){
		
		if(a[j]>max){
			max = a[j];
		}
	}
	
	printf("Largest number is:- %d ", max);
	
	
	return 0;
	
}