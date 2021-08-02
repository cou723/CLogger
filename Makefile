PROGRAM := logger.a
CC := gcc
CFLAG := -Wall -Wextra -Werror
INCLUDE := -I./include
SRCDIR := ./src
OBJDIR := $(SRCDIR)
SRCS := $(SRCDIR)/log.c $(SRCDIR)/value_log.c
OBJS := $(SRCS:%.c=%.o)
LIB := ./$(PROGRAM)

test: test

test: $(SRCDIR)/log.c $(SRCDIR)/value_log.c $(SRCDIR)/test.c
	$(CC) $(CFLAG) $(SRCDIR)/value_log.c $(SRCDIR)/log.c $(SRCDIR)/test.c -o ./$@

all: $(OBJS) $(LIB)

$(OBJS): $(SRCS)
	$(CC) $(INCLUDE) $(CFLAG) -c $(@:%.o=%.c) -o ./$@

$(LIB): $(OBJS)
	ar r $(LIB) $(OBJS)

$(TARGET): $(SRCS)
	$(CC) $(INCLUDE) -c $(SRCS) -o $(OBJS)
	ar rcs $(TARGET) $(OBJS)

clean:
	rm $(OBJS)

fclean: clean
	rm $(LIB)

re: fclean all
