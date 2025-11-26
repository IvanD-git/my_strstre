#ifndef BOYER_MOORE_H
#define BOYER_MOORE_H

/**
 * @brief Searches for the first occurrence of `pattern` in `text` using
 *        a simplified Boyer-Moore algorithm (bad character heuristic only,
 *        without precomputed table).
 *
 * @param text    The string to search in (must be null-terminated).
 * @param pattern The substring to find (must be null-terminated).
 * @return int    Index of first match, or -1 if not found.
 */
int boyer_moore_search_no_table(const char *text, const char *pattern);

#endif // BOYER_MOORE_H