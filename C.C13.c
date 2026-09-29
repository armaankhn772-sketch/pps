//WAP check whether the given message is valid print the message as login succesful otherwise incorrect password
#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(password, "1234") == 0)
    {
        printf("Login Successful");
    }
    else
    {
        printf("Incorrect Password");
    }

    return 0;
}
