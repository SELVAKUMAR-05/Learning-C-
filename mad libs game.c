#include <stdio.h>
#include<string.h>
int main() {
    char noun[20];
    char verb[20];
    char adjective1[20];
    char adjective2[20];
    char adjective3[20];

    printf("Enter the noun: ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';

    printf("Enter the verb: ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]='\0';

    printf("Enter the adjective1: ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1)-1]='\0';

    printf("Enter the adjective2: ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1]='\0';


    printf("Enter the adjective3: ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1]='\0';

    printf("She is a %s\n",noun);
    printf("she is %s while %s\n",adjective1,verb);
    printf("She is %s while pain of %s\n",adjective2,verb);
    printf("she is a %s girl",adjective3);


}
