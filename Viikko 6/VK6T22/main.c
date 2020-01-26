#include <stdio.h>

#define STRING_SIZE 40

struct userData {
    char firstName[STRING_SIZE];
    char lastName[STRING_SIZE];
    int age;
};
typedef struct userData UserData;

void printUserData(UserData* userData);

int main()
{
    UserData user;

    printf("Anna etunimesi: ");
    scanf("%40s", user.firstName);
    printf("Anna sukunimesi: ");
    scanf("%40s", user.lastName);
    printf("Anna ikasi: ");
    scanf("%d", &user.age);

    printUserData(&user);


    return 0;
}

void printUserData(UserData* userData)
{
    printf("Kayttajatiedot:\n");
    printf("Nimi: %s %s\n", userData->firstName, userData->lastName);
    printf("Ika: %d\n", userData->age);
}
