CC		=	cc
CFLAGS	=	-Werror -Wextra -Wall
AR		=	ar rcs
NAME	=	libarray.a
HEADER	=	array.h
DEL		=	rm -rf
SOURCES	=	node.d/get.c \
			node.d/index_of.c \
			node.d/remove.c \
			array.d/add_at.c \
			array.d/add.c \
			array.d/create.c \
			array.d/destruct.c \
			array.d/for_each.c \
			array.d/size.c
OBJECTS	=	$(SOURCES:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o	: %.c
	$(CC) $(CFLAGS) -I./includes.d -o $@ -c $<

clean :
	$(DEL) $(OBJECTS)

main : main.c $(NAME)
	$(CC) $(CFLAGS) -I./includes.d main.c -L. -larray

fclean : clean
	$(DEL) $(NAME)

re	: fclean all
