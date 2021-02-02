#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void encrypt();
void decrypt();

int main(){
    int choice;
    while(1){
        printf("\nMENU: \n1. Encryption 2. Decryption 3. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                encrypt();
                break;
            case 2:
                decrypt();
                break;
            case 3:
		printf("Exited successfully\n");
                exit(0);
            default:
                printf("Invalid choice\n");

        }
    }
    return 0;
}

void encrypt(){
    char message[100], ch;
	int i, shift;
	printf("Enter a message to encrypt: ");
	scanf("%s",message);
	printf("Enter shift: ");
	scanf("%d", &shift);
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		ch = ch + shift;
		message[i] = ch;
	}
	printf("Encrypted message: %s\n", message);
	
}

void decrypt(){
    char message[100], ch;
	int i, shift;
	printf("Enter a message to decrypt: ");
	scanf("%s",message);
	printf("Enter shift: ");
	scanf("%d", &shift);
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		ch = ch - shift;
		message[i] = ch;
	}
	printf("Encrypted message: %s\n", message);
}