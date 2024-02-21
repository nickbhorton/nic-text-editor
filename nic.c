#include "unistd.h"
#include "string.h"
int main () {
    const char* str = "\x1b[48;5;21m testing \x1b[m\n";
    write(STDOUT_FILENO, str, strlen(str));
    return 0;
}
