#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main() {
    // Example strings
    char str1[20] = "Hello\0World";
//    char str2[20] = "HelloStudents";
    char str2[20] = "HELLO";
    char str3[40] = "Concatenated: ";
	char str4[] = "Irfan\0Khan";
	cout<<str4<<endl;
	char empty_str[] = "";
	
    // 1. strlen()
    printf("Length of str1: %zu\n", strlen(str1));

    printf("Length of empty_str: %zu\n", strlen(empty_str));
	
	// 2. strcpy()
    strcpy(str3, str1);
    printf("Copied str1 to str3: %s\n", str3);
    
	// 3. strcat()
    strcat(str3, str2);
    printf("Concatenated str2 to str3: %s\n", str3);

    

    // 4. strcmp()
    printf("Comparison result: %d\n", strcmp(str1, str2));
	
	// 5. strncmp()
    printf("Comparison result (first 3 characters): %d\n", strncmp(str1, str2, 3));

    // 6. strchr()
    char *ptr = strchr(str3, 'W');
    if (ptr != NULL) {
        printf("Found 'W' at position: %ld\n", ptr - str3);
    } else {
        printf("'W' not found in str3\n");
    }

    // 7. strstr()
    char *substr = strstr(str3, "World");
    if (substr != NULL) {
        printf("Found 'World' in str3 at position: %ld\n", substr - str3);
    } else {
        printf("'World' not found in str3\n");
    }

    // 8. strncpy()
    char dest[10];
    strncpy(dest, str1, 3);
    dest[3] = '\0';
    printf("Copied first 3 characters of str1 to dest: %s\n", dest);

    // 9. strncat()
    strncat(dest, str2, 2);
    printf("Concatenated first 2 characters of str2 to dest: %s\n", dest);

    // 10. strtok()
    char sentence[] = "This is a sample sentence.";
    char *token = strtok(sentence, " ");
    printf("Tokens: ");
    while (token != NULL) {
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    printf("\n");
return 0;
    
    // 11. sprintf()
    char formatted[50];
    sprintf(formatted, "The sum of %d and %d is %d.", 5, 7, 5 + 7);
    printf("Formatted string: %s\n", formatted);

    // 12. snprintf()
    char limited[10];
    snprintf(limited, sizeof(limited), "Too long string");
    printf("Limited string: %s\n", limited);

    return 0;
}

