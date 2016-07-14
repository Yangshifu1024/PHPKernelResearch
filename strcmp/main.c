#include <stdio.h>
#include <string.h>

static inline int min(int x, int y) {
    if (x > y) {
        return y;
    }
    return x;
}

static int php_strcmp(const char *s1, const char *s2) {
    int retval;
    if (s1 == s2) {
        return 0;
    }
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    size_t min_len = min(len1, len2);
    retval = memcmp(s1, s2, min_len);
    // If retval is 0, means s1[0 - min_len] equals s1[0 - min_len]
    if (!retval) {
        // Then returns the difference of two lengths
        return (int) (len1 - len2);
    } else {
        // If retval is not 0, means s1[0 - min_len] not equals s1[0 - min_len]
        // returns the retval
        return retval;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 3) {
        printf("Usage: %s str1 str2\n", argv[0]);
        return 1;
    }
    printf("Original c strcmp: %d\n", strcmp(argv[1], argv[2]));
    printf("PHP strcmp: %d\n", php_strcmp(argv[1], argv[2]));

    return 0;
}
