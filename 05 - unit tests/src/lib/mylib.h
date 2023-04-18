#ifndef __MY_LIB_H
#define __MY_LIB_H

#include <stdbool.h>
#include <string.h>

bool str_is_numeric(const char *, bool);
char *str_trim(char *s, char c);
#define str_isempty(s) (s == 0 || strlen(s) <= 0)
#define str_equals(a, b) !strcmp(a, b)
#define bool_to_str(b) (b ? "true" : "false")
#define sizeof_char_array(a) (sizeof(a) / sizeof(char *))
#define sizeof_struct_array(a, struct_name) (sizeof(a) / sizeof(struct struct_name))
#define sizeof_type_array(a, type_name) (sizeof(a) / sizeof(type_name))

#endif  //__MY_LIB_H
