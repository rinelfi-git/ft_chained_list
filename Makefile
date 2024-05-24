CC		=	cc
CFLAGS	=	-Werror -Wextra -Wall
AR		=	ar rcs
NAME	=	liblist.a
HEADER	=	list.h
DEL		=	rm -rf
SOURCES	=	item/create.c \
			item/get.c \
			list/create.c \
			list/size.c \
			list/add.c
OBJECTS	=	$(SOURCES:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)

%.o	: %.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean :
	@$(DEL) $(OBJECTS)

main : main.c $(NAME)
	$(CC) $(CFLAGS) main.c -L. -llist

fclean : clean
	@$(DEL) $(NAME)

re	: fclean all
