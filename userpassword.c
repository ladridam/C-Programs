/*Setting Password, example, A password for an automatic door lock; User gets to set his/her own password*/
#include<stdio.h>
#include<string.h>

#define MAX_PASSWORD_LENGTH 20
#define MAX_ATTEMPTS 3

int main (){
    char password[MAX_PASSWORD_LENGTH];
    char input[MAX_ATTEMPTS];
    int attempts = 0;
    int password_set = 0;
    printf("This is an automatic door lock, please set the password\n");
    printf("The password must be of %d characters. Please set your password:", MAX_PASSWORD_LENGTH);
    scanf("%s", password);
    password_set = 1;
    printf("Password set successfully.\n");
    //main loop for authentication
    while (1)
    {
        /* code */
        printf("Enter the password to unlock.\n");
        scanf("%s", input);
        /*checking if the password matches, by comparing the strings*/
        if(strcmp(input, password)==1){
            printf("Access granted. The door is unlocked.\n");
            break;
        }else{
            attempts++;
            printf("Incorrect Password. %d attempts left", MAX_ATTEMPTS - attempts);
            /*if max attempts have been reached*/
            if (attempts>=MAX_ATTEMPTS){
                printf("Maximum attempts reached. Access denied.\n");
                break;
            }
            
        }
    }
    

}