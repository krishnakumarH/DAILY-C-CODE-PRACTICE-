#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *number_to_string(int number) {
    char *str = malloc(12 * sizeof(char));   // 12 bytes for int string
    if (str == NULL) {
        return NULL;
    }

    sprintf(str, "%d", number);   // convert int to string
    return str;
}

/*#include <stdlib.h>
#include <stdio.h>

char *number_to_string(int number) {
  char *result = calloc(12, sizeof(char));
  sprintf(result, "%d", number);
  return result;
}

#include <stdlib.h> 
const char* number_to_string(int number) 
{ char *a = malloc(256);//this mean already sizeof(char is 1) so they didnot mention. 
sprintf(itoa, "%d", number); 
return itoa; 
    
}*/

int main() {
    int number =25;

    char *result = number_to_string(number);

    if (result != NULL) {
        printf("Number as string: %s\n", result);
        free(result);   // free heap memory
    }

    return 0;
}
