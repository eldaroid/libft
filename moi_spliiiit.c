#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int        count_letter(char *s, int i, char c)
{
    int        count;

    count = 0;
    while (s[i] != c && s[i] != '\0')
    {
        i++;
        count++;
    }
    return (count);
}
int        count_words(char *s, char c)
{
    int        flag;
    int        i;
    int        count;

    count = 1;
    flag = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c && flag == 1)
            flag = 0;
        if (s[i] != c && flag == 0)
        {
            count++;
            flag = 1;
        }
        i++;
    }
    return (count);
}
void    change_new(char **new, char *s, char c)
{
    int        i;
    int        j;
    int        count;

    j = 0;
    i = 0;
    while (s[i])
    {
        count = 0;
        if (s[i] != c)
        {
            count = count_letter(s, i, c);
            new[j] = (char *)malloc(sizeof(char) * count + 1);
            i += count - 1;
            j++;
        }
        i++;
    }
}
char    **ft_strsplit(char const *s, char c)
{
    char    **new;
    int        i;
    int        count;
    int        j;

    i = 0;
    j = 0;
    if (!s || !(new = (char **)malloc(sizeof(char *) * count_words(s, c))))
        return (NULL);
    change_new(new, s, c);
    return (new);
}
void    ft_print_result(char const *s)
{
    int        len;

    len = 0;
    while (s[len])
        len++;
    write(1, s, len);
}
int        main()
{
    int i = -1;
    char **new = 0;
    
    //new = ft_strsplit(av[1], '.');
    new = ft_strsplit("   lorem   ipsum dolor    ", ' ');
    if (!(new))
        return (0);
    while (new[++i])
        puts(new[i]);
    return (0);
}
