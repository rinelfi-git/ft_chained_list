CC		=	cc
CFLAGS	=	-Werror -Wextra -Wall
AR		=	ar rcs
NAME	=	liblist.a
HEADER	=	list.h
DEL		=	rm -rf
SOURCES	=	item/create.c \
			list/create.c
OBJECTS	=	$(SOURCES:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)

%.o	: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean :
	@$(DEL) $(OBJECTS)

fclean : clean
	@$(DEL) $(NAME)

re	: fclean all
