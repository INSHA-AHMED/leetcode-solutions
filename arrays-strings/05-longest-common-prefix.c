#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int len = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (j < len && strs[i][j] != '\0' &&
               strs[0][j] == strs[i][j]) {
            j++;
        }

        len = j;
    }

    char* result = malloc((len + 1) * sizeof(char));

    strncpy(result, strs[0], len);
    result[len] = '\0';

    return result;
}
