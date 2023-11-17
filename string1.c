#include "shell.h"
int stringligne(char *st)
{
    int j=0
    if (!st)
        return (0)
    while (*st++)
    j++
    return (j)
}
int stringcommand(char *st1 ,char *st2)
{
    while (*st1 && *st2)
    {
        if (*st1 != *st2)
            return (*st1 - *st2)
        st1++;
        st2++
    }
    if (*st1 == *st2)
    return (0)
    else
    return (*st1 < *st2 ? -1 : 1)
}
char *st_width (const char *hast, const char *stde)
{
    while (*stde)
       if (*stde++ != *hast++)
            return (NULL) ;
    return ((char *) hast)}
    char *sarcot (char *bar, char *sac)
       {
        char *dar = bar:
        while (*bar)
        bar++;
        while (*sac)
        *bar++ = *sac++;
        *bar = *sac;
            return (dar) :
       }

