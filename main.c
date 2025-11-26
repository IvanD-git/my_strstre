#include <stdio.h>
#include "boyer_moore.h"

int main() {
    const char *text = "ABAAABCD";
    const char *pattern = "ABC";
    int pos = boyer_moore_search_no_table(text, pattern);
    if (pos != -1) {
        printf("Substring found at index: %d\n", pos);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}