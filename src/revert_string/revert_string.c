#include "revert_string.h"

void RevertString(char *str)
{
    int l = strlen(str);
    char* str2 = (char*)malloc((l)*sizeof(char));
    for(int i = 0 ; i < l; i++){
      str2[l-1-i] = str[i];  
    }
    for(int i = 0 ; i < l; i++){
      str[i] = str2[i];  
    }
    free(str2);
}

