CC		=	cc
CFLAGS	=	-Werror -Wextra -Wall
AR		=	ar rcs
NAME	=	libarray.a
HEADER	=	array.h
DEL		=	rm -rf
SOURCES	=	item/create.c \
			item/get.c \
			item/remove.c \
			item/destruct.c \
			item/c_int.c \
			item/c_long.c \
			item/c_char.c \
			item/index_of.c \
			array/add_at.c \
			array/create.c \
			array/size.c \
			array/destruct.c \
			array/for_each.c \
			array/add.c
OBJECTS	=	$(SOURCES:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)

%.o	: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean :
	@$(DEL) $(OBJECTS)

main : main.c $(NAME)
	$(CC) $(CFLAGS) main.c -L. -larray

fclean : clean
	@$(DEL) $(NAME)

re	: fclean all
