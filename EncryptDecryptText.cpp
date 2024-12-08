#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *ptr, int key) 
{
	while(*ptr!=NULL)
	{
		*ptr=*ptr+key ; 
		 ptr++; 		
	}
}

void decrypt(char *ptr, int key) 
{
	while(*ptr!=NULL)
	{
		*ptr=*ptr-key ; 
		ptr++; 		
	}
}


int main() 
{
	char text[100]; 
	int key=3; 
	
	printf("Enter the text: "); 
	scanf(" %[^\n]s",text); 
	printf("Key : ") ; 
	scanf("%d", &key); 
	
	encrypt(text, key);  
	
	printf("\nEncrypted Text : %s \n",text); 
	
	decrypt(text,key);  
	
	printf("\nDecrypted Text : %s \n",text); 
	
	return 0; 
}
