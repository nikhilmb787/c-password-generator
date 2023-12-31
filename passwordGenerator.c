#include<stdio.h>

#include<stdlib.h>

#include<time.h>

void generatePassword(int length){

	const char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVXYZ0123456789!@#$%^&*()_+-=";


	int passwordLength = sizeof(letters) - 1;

	srand((unsigned int)time(NULL));

	printf("Password: ");

	for(int i = 0; i < length; i++){
	
		int index = rand() % passwordLength;
		
		putchar(letters[index]);	
	}

	printf("\n");

}

void main(){

	int length;

	printf("Enter the desired password Length: ");

	scanf("%d", &length);

	if(length <= 0)

		printf("Invalid Length !!!");

	else

		generatePassword(length);

}
