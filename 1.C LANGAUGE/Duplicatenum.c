#include<stdio.h>

int main(){
	
		int ele;
		
		printf("Enter the number of ele :-");
		scanf("%d", &ele);
		
		int a[ele];
		
		for(int i=0; i<ele; i++){
			
			printf("Enter the element :- ");
			scanf("%d",&a[i]);
		}
		
		printf("\n\n\n");
		
		for(int i=0; i<ele; i++){
				
				int duplicate = 0;
			
			for(int j=0; i<i; j++){
				
				if(a[i] == a[j]){
					
					duplicate = 1;
					break;
				}
			}
			
			if(duplicate) continue;
			
			for (int k = i+1; k<ele; k++){
				if(a[i] == a[k]){
					printf("Duplicate number is :-  %d \n", a[i]);
					break;
				}
			}
		}
		
		return 0;
	
}