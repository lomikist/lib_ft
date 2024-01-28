char	*ft_strchr(const char *s, int c)
{
    unsigned int	i;
    char			*str;

    str = (char *)s;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == (char)c)
            return &str[i];
        i++;
    }
    if (str[i] == (char)c)
        return &str[i];
    return 0;
}