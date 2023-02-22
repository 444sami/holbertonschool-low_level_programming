<h2>Task 0-Makefile:</h2>
all: <b class="term">*Rules</b><br>
gcc main.c school.c -o school	<b class="term">*Name of the executable: school</b><br>


<h2>Task 1-Makefile:</h2>
CC = gcc <b class="term">*CC variable compiler to be used</b><br>
SRC = main.c school.c<b class="term"> *SRC variable .o files</b><br>
all:<br>
$(CC) $(SRC) -o school <b class="term">*Name of executable: school</b><br>


<h2>Task 2-Makefile:</h2>
CC = gcc<br>
SRC = main.c school.c <b class="term">*.c files</b><br>
OBJ = $(SRC:%.c=%.o) <b class="term">*.o files, .c -> .o</b><br>
NAME = school <b class="term">*Name of executable</b><br>
%.o: %.c m.h<br>
$(CC) -c -o $@ $<<br>

all: $(OBJ) <b class="term">*All rule should recompile only updated source files</b><br>
$(CC) $(OBJ) -o $$(NAME)<br>


<h2>Task 3-Makefile:</h2>
CC = gcc<br>
SRC = main.c school.c<br>
OBJ = $(SRC:%.c=%.o)<br>
NAME = school<br>
RM = rm -f <b class="term">*RM Program to delete files</b><br>
%.o:%.c m.h<br>
$(CC) -c -o $@ $<<br>
all: $(OBJ)<br>
$(CC) $(OBJ) -o $(NAME) <b class="term">*Build executable</b><br>
clean:<br>
$(RM) *~ $(NAME) <b class="term">*Rule deletes emacs and vim temporary files and executable</b><br>
oclean:<br>
$(RM) $(OBJ) <b class="term">*Rule deletes object files</b><br>
fclean: clean oclean <b class="term">*Deletes emacs and vim files, executable and obj files</b><br>
re: oclean all <b class="term">*Forces recompilation</b><br>


<h2>Task 4-Makefile:</h2>
CC = gcc<br>
SRC = main.c school.c<br>
OBJ = $(SRC:%.c=%.o)<br>
NAME = school<br>
RM = rm -f<br>
CFLAGS = -Wall -Werror -Wextra -pedantic <b class="term">*Compiler flags</b><br>
%.o:%.c m.h<br>
$(CC) $(CFLAGS) -c -o $@ $< <br>
all: $(OBJ)<br>
$(CC) $(OBJ) -o $(NAME)<br>
clean:<br>
$(RM) *~ $(NAME)<br>
oclean:<br>
$(RM) $(OBJ)<br>
fclean: clean oclean<br>
re: oclean all<br>
