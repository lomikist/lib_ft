.PHONY: all bonus clean fclean re

name=libft.a
compiler=cc
flags=-Wall -Wextra -Werror

objects := $(patsubst %.c, %.o, $(wildcard *.c))
bobjects := $(patsubst %.c, %.o, $(wildcard ft_lst*.c))

all : $(name) $(bonus)

$(name) : $(objects)
	ar rcs $(name) $(objects)

%.o : %.c
	$(compiler) $(flags) -c $< -o $@

bonus :	$(bobjects)
	ar rcs $(name) $(bobjects)

clean :
	rm -f $(objects)
	rm -f $(bobjects)

fclean : clean
	rm -f $(name)

re : fclean all
