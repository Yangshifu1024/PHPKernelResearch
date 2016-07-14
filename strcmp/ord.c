#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void u2h(char* value) {
    if (strlen(value) < 3) {
        return;
    }
    printf("%x%x%x\n", (unsigned int)(value[0] & 0xFF) , (unsigned int)(value[1] &0xFF) , (unsigned int)(value[2] & 0xFF));
}

int main(int argc, char const *argv[]) {
    char *you = "你";
    char *hi = "好";
    char *ah = "啊";
    u2h(you);
    u2h(hi);
    u2h(ah);
    return 0;
}
