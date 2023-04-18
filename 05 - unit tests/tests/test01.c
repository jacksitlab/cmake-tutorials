#include <lib/mylib.h>

int main(int arg, char *argv[]) {
    if (!str_equals("abc", "abc")) {
        return 1;
    }
    if (str_equals("abc", "abcdef")) {
        return 1;
    }

    return 0;
}