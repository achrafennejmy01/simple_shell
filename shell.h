#ifndef SHELL_H
#define SHELL_H

;

int stringligne(char *);
int stringcommand(char *, char *);
char *st_width(const char *, const char *);
char *sarcot(char *, char *);

char *stringcopy(char *, char *);
char *strindupe(const char *);
void putse(char *);
int putchared(char);

char *_stringncopy(char *, char *, int);
char *_strncat(char *, char *, int);
char *_stringchar(char *, char);



char *_memmemoryryset(char *, char, unsigned int);
void hand(char **);
void *malcom(void *, unsigned int, unsigned int);

int bntrfree(void **);






#endif
