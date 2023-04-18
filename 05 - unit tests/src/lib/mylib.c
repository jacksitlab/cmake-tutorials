#include "mylib.h"

#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/* iMode 0:ALL, 1:Left, 2:Right*/
static char *str_trim_all(char *szStr, const char ch, int iMode) {
    if (szStr == NULL) return NULL;
    char szTmp[1024 * 10] = {0x00};
    strcpy(szTmp, szStr);
    int iLen = strlen(szTmp);
    char *pStart = szTmp;
    char *pEnd = szTmp + iLen;
    int i;
    for (i = 0; i < iLen; i++) {
        if (szTmp[i] == ch && pStart == szTmp + i && iMode != 2) ++pStart;
        if (szTmp[iLen - i - 1] == ch && pEnd == szTmp + iLen - i && iMode != 1) *(--pEnd) = '\0';
    }
    strcpy(szStr, pStart);
    return szStr;
}

bool str_is_numeric(const char *str, bool allow_float) {
    for (int i = 0, length = strlen(str); i < length; i++)
        if (!(isdigit(str[i]) || (allow_float && str[i] == '.'))) {
            return false;
        }
    return true;
}
char *str_trim(char *s, const char ch) { return str_trim_all(s, ch, 0); }