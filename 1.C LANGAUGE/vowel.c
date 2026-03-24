#include <stdio.h>

int main(){
    
    int i = 0, vowel = 0, consonant = 0;
    char str[100];
    
    printf("Enter the String:- ");
    scanf("%s", str);
    
    while(str[i] != '\0'){
        
        char ch = str[i];   
        
        if( ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            vowel++;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            consonant++;
        }
        
        i++;
    }
    
    printf("Vowel is :- %d\n", vowel);
    printf("Consonant is :- %d\n", consonant);
    
    return 0;
}