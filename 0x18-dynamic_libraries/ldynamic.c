#include <stdio.h>

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0 ? -n : n);
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

void _puts(char *s) {
    for (int i = 0; s[i] != '\0'; i++)
        _putchar(s[i]);
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

int _atoi(char *s) {
    int sign = 1, num = 0, i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '-')
            sign = -1;
        else if (_isdigit(s[i]))
            num = (num * 10) + (s[i] - '0');
    }
    return sign * num;
}

char *_strcat(char *dest, char *src) {
    int dest_len = _strlen(dest);
    int i;
    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}

char *_strncat(char *dest, char *src, int n) {
    int dest_len = _strlen(dest);
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return dest;
}

char *_strncpy(char *dest, char *src, int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

int _strcmp(char *s1, char *s2) {
    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);
    return (s1[i] - s2[i]);
}

char *_memset(char *s, char b, int n) {
    int i;
    for (i = 0; i < n; i++)
        s[i] = b;
    return s;
}

char *_memcpy(char *dest, char *src, int n) {
    int i;
    for (i = 0; i < n; i++)
        dest[i] = src[i];
    return dest;
}

char *_strchr(char *s, char c) {
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] == c)
            return &s[i];
    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    int i, j;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; accept[j] != '\0'; j++)
            if (s[i] == accept[j])
                break;
        if (accept[j] == '\0')
            break;
    }
    return i;
}

char *_strpbrk(char *s, char *accept) {
    int i, j;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; accept[j] != '\0'; j++)
            if (s[i] == accept[j])
                return &s[i];
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    int i, j;
    for (i = 0; haystack[i] != '\0'; i++) {
        for (j = 0; needle[j] != '\0'; j++)
            if (haystack[i + j] != needle[j])
                break;
        if (needle[j] == '\0')
            return &haystack[i];
    }
    return NULL;
}

