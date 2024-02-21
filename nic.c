#include <unistd.h>
#include <string.h>
#include <stdlib.h>

const char* FG_RED    = "\x1b[38;5;9m";
const char* FG_GREEN  = "\x1b[38;5;10m";
const char* FG_BLUE   = "\x1b[38;5;12m";

const char* CLEAR     = "\x1b[m";

typedef struct string {
    char* chars;
    size_t len;
    size_t cap;
} String;

String* string_new() {
    String* result = malloc(sizeof(String));
    result->chars = malloc(16);
    result->cap = 16;
    result->len = 0;
    memset(result->chars, 0, result->cap);
    return result;
}

void string_append(String* str_ptr, const char* string_literal) {
    size_t length_string_literal = strlen(string_literal);
    /// TODO
}

int main () {
    String* ptr = string_new();
    string_append(ptr, "hello world");
    write(STDOUT_FILENO, ptr, ptr->len);
    return 0;
}
