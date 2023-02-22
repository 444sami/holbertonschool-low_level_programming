<h2>Task 0-Makefile:</h2>
all:	* Rules <br>
gcc main.c school.c -o school	*Name of the executable: school <br>


<h2>Task 1-Makefile:</h2>
CC = gcc			*CC variable compiler to be used <br>
SRC = main.c school.c		*SRC variable .o files <br>
all:<br>
$(CC) $(SRC) -o school		*Name of executable: school<br>


<h2>Task 2-Makefile:</h2>
CC = gcc			*Compiler to be used<br>
SRC = main.c school.c		*.c files<br>
OBJ = $(SRC:%.c=%.o)		*.o files, .c -> .o<br>
NAME = school			*Name of executable<br>
%.o: %.c m.h<br>
$(CC) -c -o $@ $<<br>

all: $(OBJ)			*All rule should recompile only updated source files<br>
$(CC) $(OBJ) -o $(NAME)<br>


<h2>Task 3-Makefile:</h2>
CC = gcc<br>
SRC = main.c school.c<br>
OBJ = $(SRC:%.c=%.o)<br>
NAME = school<br>
RM = rm -f			*RM Program to delete files<br>
%.o:%.c m.h<br>
$(CC) -c -o $@ $<<br>
all: $(OBJ)<br>
$(CC) $(OBJ) -o $(NAME)		*Build executable<br>
clean:<br>
$(RM) *~ $(NAME)		*Rule deletes emacs and vim temporary files and executable<br>
oclean:<br>
$(RM) $(OBJ)			*Rule deletes object files<br>
fclean: clean oclean		*Deletes emacs and vim files, executable and obj files<br>
re: oclean all			*Forces recompilation<br>


<h2>Task 4-Makefile:</h2>
CC = gcc<br>
SRC = main.c school.c<br>
OBJ = $(SRC:%.c=%.o)<br>
NAME = school<br>
RM = rm -f<br>
CFLAGS = -Wall -Werror -Wextra -pedantic	*Compiler flags<br>
%.o:%.c m.h<br>
$(CC) $(CFLAGS) -c -o $@ $<<br>
all: $(OBJ)<br>
$(CC) $(OBJ) -o $(NAME)<br>
clean:<br>
$(RM) *~ $(NAME)<br>
oclean:<br>
$(RM) $(OBJ)<br>
fclean: clean oclean<br>
re: oclean all<br>
