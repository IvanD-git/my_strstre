#include <assert.h>
#include <stdio.h>
#include "boyer_moore.h"

void run_tests() {
    assert(boyer_moore_search_no_table("hello world", "world") == 6);
    assert(boyer_moore_search_no_table("abcde", "ab") == 0);
    assert(boyer_moore_search_no_table("abcde", "de") == 3);
    assert(boyer_moore_search_no_table("hello", "xyz") == -1);
    assert(boyer_moore_search_no_table("hello", "") == 0);
    assert(boyer_moore_search_no_table("", "a") == -1);
    assert(boyer_moore_search_no_table("ab", "abc") == -1);
    assert(boyer_moore_search_no_table("same", "same") == 0);
    assert(boyer_moore_search_no_table("aaaaaa", "aa") == 0);
    assert(boyer_moore_search_no_table("ABACADABRAC", "ABRA") == 6);
    printf("All passed!\n");
}

int main() {
    run_tests();
    return 0;
}
