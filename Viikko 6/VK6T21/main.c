#include <stdio.h>

#define STRING_SIZE 40

struct userData {
    char firstName[STRING_SIZE];
    char lastName[STRING_SIZE];
    int age;
};
typedef struct userData UserData;

int main()
{
    UserData user;

    printf("Anna etunimesi: ");
    scanf("%40s", user.firstName);
    printf("Anna sukunimesi: ");
    scanf("%40s", user.lastName);
    printf("Anna ikasi: ");
    scanf("%d", &user.age);

    printf("Kayttajatiedot:\n");
    printf("Nimi: %s %s\n", user.firstName, user.lastName);
    printf("Ika: %d\n", user.age);

    return 0;
}
