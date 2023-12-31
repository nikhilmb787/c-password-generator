#include<stdio.h>

#include<stdlib.h>

#include<time.h>

// Function to generate a random password of given length

void generatePassword(int length){

	// characters to be used in the password

	const char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVXYZ0123456789!@#$%^&*()_+-=";
	
	// Length of the string (excluding null terminator)

	int passwordLength = sizeof(letters) - 1;

	// Random number generation with the current time

	srand((unsigned int)time(NULL));

	printf("Password: ");

	for(int i = 0; i < length; i++){
	
		int index = rand() % passwordLength;
		
		putchar(letters[index]);	
	}

	printf("\n");

}

// Main function to take user input for password length and call the generator function 

int main(){

	int length;

	printf("Enter the desired password Length: ");

	scanf("%d", &length);

	if(length <= 0)

		printf("Invalid Length !!!");

	else

		generatePassword(length);

	return 0;

}
