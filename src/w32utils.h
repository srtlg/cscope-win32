#ifndef CSCOPE_W32UTILS_H
# define CSCOPE_W32UTILS_H

char *get_shortpath(char *path);
char *get_longpath(char *path);
/*in-place conversion */
void to_longpath(char *path, int len);

# ifdef WIN32
# ifndef HAVE_UNISTD_H
void sleep(int sec);
# endif
# endif

#endif /* CSCOPE_W32UTILS_H */
