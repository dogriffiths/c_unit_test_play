#include "utils.h"
#include <stdlib.h>

int cache[LIMIT];

int hash(const char* s)
{
    int i = 0, hash = 0;
    char chr;

    while ((chr = s[i++])) hash = ((hash << 5) - hash) + chr;

    return abs(hash % LIMIT);
}

void note(const char* s)
{
    int i = hash(s);
    int current = cache[i];
    cache[i] = current + 1;
}

int countFor(const char* s)
{
    return cache[hash(s)];
}