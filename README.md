# libft-fgracefo
Create my own library

Целью данного проекта является собственная библиотека, включающая в себя следующие функции:
### :mag: Проверка/редактирование символа
- `ft_isalnum`
- `ft_isalpha`
- `ft_isascii`
- `ft_isdigit`
- `ft_islower`
- `ft_isprime`
- `ft_isprint`
- `ft_isspace`
- `ft_isupper`
- `ft_toupper`
- `ft_tolower`

### :pencil: Обработка строк
- `ft_strlen`
- `ft_strdup`
- `ft_strcpy`
- `ft_strncpy`
- `ft_strcat`
- `ft_strncat`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strstr`
- `ft_strnstr`
- `ft_strcmp`
- `ft_strncmp`
- `ft_strnew`
- `ft_strdel`
- `ft_strclr`
- `ft_striter`
- `ft_striteri`
- `ft_strmap`
- `ft_strmapi`
- `ft_strequ`
- `ft_strnequ`
- `ft_strsub`
- `ft_strjoin`
- `ft_strtrim`
- `ft_strsplit`

### :floppy_disk: Управление памятью
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memccpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_memalloc`
- `ft_memdel`

### :repeat: Конвертация
- `ft_atoi`
- `ft_itoa`

### :scroll: Вывод информации в поток
- `ft_putchar`
- `ft_putchar_fd`
- `ft_putstr`
- `ft_putstr_fd`
- `ft_putendl`
- `ft_putendl_fd`
- `ft_putnbr`
- `ft_putnbr_fd`

### :page_facing_up: Работа со списками
- `ft_lstnew`
- `ft_lstdelone`
- `ft_lstdel`
- `ft_lstadd`
- `ft_lstiter`
- `ft_lstmap`

Используйте команду `make`, чтобы получить файл **libft.a**.
В последующих проектах данная библиотека будет весьма полезна, поэтому для ее использования в Makefile требуется добавить
```
libft:
    make -C libft/
```
А также флаги `-I./libft/includes/ -L./libft -lft` для компиляции исходников проекта.
