#include <string.h>
#include "boyer_moore.h"

int boyer_moore_search_no_table(const char *text, const char *pattern) {
    if (!text || !pattern) return -1;

    int n = (int)strlen(text);
    int m = (int)strlen(pattern);

    if (m == 0) return 0;
    if (n < m) return -1;

    int s = 0;
    while (s <= n - m) {
        int j = m - 1;

        while (j >= 0 && pattern[j] == text[s + j]) {
            j--;
        }

        if (j < 0) {
            return s;
        } else {
            char bad_char = text[s + j];
            int shift = m;

            for (int k = m - 2; k >= 0; k--) {
                if (pattern[k] == bad_char) {
                    shift = m - 1 - k;
                    break;
                }
            }

            s += shift;
        }
    }

    return -1;
}