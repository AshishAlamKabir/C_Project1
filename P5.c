#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char menu(){
    printf("\n1------------------->sorting\n");
    printf("2------------------->display\n");
    printf("3------------------->number of words\n");
    printf("4------------------->reverse\n");
    printf("0------------------->exit\n");
    return getchar();
}

char *storing(){
    char array[80];
    char *type = NULL;
    printf("\ntype : ");
    fgets(array, 80, stdin);
    type = (char *) malloc(strlen(array) + 1);
    strcpy(type, array);
    return type;
}

void display(char *array){
    printf("\n%s\n", array);
}

void reverse(char *type){
    int i, j;
    char temp;
    int len = strlen(type);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = type[i];
        type[i] = type[j];
        type[j] = temp;
    }
}

int words(char *array){
    int i;
    int words = 0;
    int len = strlen(array);
    for (i = 0; i < len; i++) {
        if ((array[i] == ' ' || array[i] == '\0') && (array[i - 1] != ' ')) {
            words++;
        }
    }
    return words;
}

int main(){
    char choice;
    char *type = NULL;

    while ((choice = menu()) != '0'){
        getchar(); // to clear the newline character left in stdin
        switch (choice){
            case '1': 
                if (type != NULL) free(type); 
                type = storing(); 
                break;
            case '2': 
                if (type != NULL) display(type); 
                break;
            case '3': 
                if (type != NULL) printf("\nNumber of words = %d\n", words(type)); 
                break;
            case '4': 
                if (type != NULL) {
                    reverse(type); 
                    printf("\nReversed string: %s\n", type); 
                }
                break;
            default: 
                printf("Invalid choice\n"); 
                break;
        }
        printf("\nPress enter to return to the menu\n");
        getchar(); // to wait for user to press Enter
    }

    if (type != NULL) free(type); 
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char menu(){
    printf("\n1------------------->sorting\n");
    printf("2------------------->display\n");
    printf("3------------------->number of words\n");
    printf("4------------------->reverse\n");
    printf("0------------------->exit\n");
    return getchar();
}

char *storing(){
    char array[80];
    char *type = NULL;
    printf("\ntype : ");
    fgets(array, 80, stdin);
    type = (char *) malloc(strlen(array) + 1);
    strcpy(type, array);
    return type;
}

void display(char *array){
    printf("\n%s\n", array);
}

void reverse(char *type){
    int i, j;
    char temp;
    int len = strlen(type);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = type[i];
        type[i] = type[j];
        type[j] = temp;
    }
}

int words(char *array){
    int i;
    int words = 0;
    int len = strlen(array);
    for (i = 0; i < len; i++) {
        if ((array[i] == ' ' || array[i] == '\0') && (array[i - 1] != ' ')) {
            words++;
        }
    }
    return words;
}

int main(){
    char choice;
    char *type = NULL;

    while ((choice = menu()) != '0'){
        getchar(); // to clear the newline character left in stdin
        switch (choice){
            case '1': 
                if (type != NULL) free(type); 
                type = storing(); 
                break;
            case '2': 
                if (type != NULL) display(type); 
                break;
            case '3': 
                if (type != NULL) printf("\nNumber of words = %d\n", words(type)); 
                break;
            case '4': 
                if (type != NULL) {
                    reverse(type); 
                    printf("\nReversed string: %s\n", type); 
                }
                break;
            default: 
                printf("Invalid choice\n"); 
                break;
        }
        printf("\nPress enter to return to the menu\n");
        getchar(); 
    }

    if (type != NULL) free(type); 
    return 0;
}
