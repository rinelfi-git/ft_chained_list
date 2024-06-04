CC		=	cc
CFLAGS	=	-Werror -Wextra -Wall
AR		=	ar rcs
NAME	=	libarray.a
HEADER	=	array.h
DEL		=	rm -rf
SOURCES	=	item.d/create.c \
			item.d/get.c \
			item.d/remove.c \
			item.d/destruct.c \
			item.d/c_int.c \
			item.d/c_long.c \
			item.d/c_char.c \
			item.d/index_of.c \
			array.d/add_at.c \
			array.d/create.c \
			array.d/size.c \
			array.d/destruct.c \
			array.d/for_each.c \
			array.d/add.c
OBJECTS	=	$(SOURCES:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o	: %.c
	$(CC) $(CFLAGS) -I./includes.d -o $@ -c $<

clean :
	$(DEL) $(OBJECTS)

main : main.c $(NAME)
	$(CC) $(CFLAGS) main.c -L. -larray

fclean : clean
	$(DEL) $(NAME)

re	: fclean all
