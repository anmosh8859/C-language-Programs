#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

int main() {
    char **array_of_strings;
    int num_strings;
    
    printf("Enter the number of strings: ");
    scanf("%d", &num_strings);
    
    array_of_strings = (char**) malloc(num_strings * sizeof(char*));
    
    for (int i = 0; i < num_strings; i++) {
        char temp_string[MAX_STRING_LENGTH];
        printf("Enter string %d: ", i+1);
        scanf("%s", temp_string);
        array_of_strings[i] = (char*) malloc((strlen(temp_string) + 1) * sizeof(char));
        strcpy(array_of_strings[i], temp_string);
    }
    printf("\nHere are the strings you entered:\n");
    for (int i = 0; i < num_strings; i++) {
        printf("%s\n", array_of_strings[i]);
    }
    
    for (int i = 0; i < num_strings; i++) {
        free(array_of_strings[i]);
    }
    free(array_of_strings);
    
    return 0;
}