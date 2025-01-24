#include <stdio.h>
#include <string.h>

void remove_fullstops(char *str) {
    int i, j = 0;
    int length = strlen(str);
    char result[length + 1]; 
    for (i = 0; i < length; i++) {
        if (str[i] != '.') {
            result[j++] = str[i]; 
        }
    }

    result[j] = '\0'; 
    strcpy(str, result); 
}

int main() {
    char str[100];

    printf("Enter a string with full stops: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Original string: %s\n", str);
    remove_fullstops(str);
    printf("String without full stops: %s\n", str);

    return 0;
}
