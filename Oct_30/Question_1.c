#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *name;
    int length;

    printf("Enter length: ");
    scanf("%d", &length);
    getchar();

    name = (char*) malloc((length+1) * sizeof(char));

    if(name == NULL) {
        printf("Memory allocation failed!");
    }

    printf("Enter the name: ");
    fgets(name,length+1, stdin);
    //getchar(); No need to add here because, we need that newline character
    name[strcspn(name, "\n")] = '\0';

    printf("Hello %s \n", name);

    return 0;
}
