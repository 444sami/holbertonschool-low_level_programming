Task 0-Makefile:
all:					/* rules */
	gcc main.c school.c -o school	/* name of the executable: school */


Task 1-Makefile:
CC = gcc			/* CC variable compiler to be used */
SRC = main.c school.c		/* SRC variable object files */
all:				/* rules */
	$(CC) $(SRC) -o school	/* name of executable: school */


Task 2-Makefile:
CC = gcc			/* compiler to be used */
SRC = main.c school.c		/* .c files */
OBJ = $(SRC:%.c=%.o)		/* .o files, .c -> .o */
NAME = school			/* school name of executable */
%.o: %.c m.h
	$(CC) -c -o $@ $<

all: $(OBJ)			/* all rule should recompile only updated source files */
	$(CC) $(OBJ) -o $(NAME)


Task 3-Makefile:
CC = gcc
SRC = main.c school.c
OBJ = $(SRC:%.c=%.o)
NAME = school
RM = rm -f			/* program to delete files */
%.o:%.c m.h
	$(CC) -c -o $@ $<
all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)	/* build executable */
clean:
	$(RM) *~ $(NAME)	/* rule deletes emacs and vim temporary files and executable*/
oclean: 
	$(RM) $(OBJ)		/* rule deletes object files */
fclean: clean oclean		/* deletes emacs and vim files, executable and obj files */
re: oclean all			/* forces recompilation */


Task 4-Makefile:
CC = gcc
SRC = main.c school.c
OBJ = $(SRC:%.c=%.o)
NAME = school
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic	/* compiler flags */
%.o:%.c m.h
	$(CC) $(CFLAGS) -c -o $@ $<
all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
clean: 
	$(RM) *~ $(NAME)
oclean: 
	$(RM) $(OBJ)
fclean: clean oclean
re: oclean all
