<h2>Task 0-Makefile:</h2>
all:	* Rules <br>
gcc main.c school.c -o school	* Name of the executable: school <br>


<h2>Task 1-Makefile:</h2>
CC = gcc			* CC variable compiler to be used
SRC = main.c school.c		* SRC variable .o files
all:
$(CC) $(SRC) -o school		* Name of executable: school


<h2>Task 2-Makefile:</h2>
CC = gcc			* Compiler to be used
SRC = main.c school.c		* .c files
OBJ = $(SRC:%.c=%.o)		* .o files, .c -> .o
NAME = school			* Name of executable
%.o: %.c m.h
$(CC) -c -o $@ $<

all: $(OBJ)			* All rule should recompile only updated source files
$(CC) $(OBJ) -o $(NAME)


<h2>Task 3-Makefile:</h2>
CC = gcc
SRC = main.c school.c
OBJ = $(SRC:%.c=%.o)
NAME = school
RM = rm -f			* RM Program to delete files
%.o:%.c m.h
$(CC) -c -o $@ $<
all: $(OBJ)
$(CC) $(OBJ) -o $(NAME)		* Build executable
clean:
$(RM) *~ $(NAME)		* Rule deletes emacs and vim temporary files and executable
oclean: 
$(RM) $(OBJ)			* Rule deletes object files
fclean: clean oclean		* Deletes emacs and vim files, executable and obj files
re: oclean all			* Forces recompilation


<h2>Task 4-Makefile:</h2>
CC = gcc
SRC = main.c school.c
OBJ = $(SRC:%.c=%.o)
NAME = school
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic	* Compiler flags
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
