PROGRAM := libLogger.a
CC := gcc
CFLAG := -Wall -Wextra -Werror
INCLUDE := -I./include
SRCDIR := ./src
OBJDIR := $(SRCDIR)
SRCS := $(SRCDIR)/log.c $(SRCDIR)/value_log.c
OBJS := $(SRCS:%.c=%.o)
LIB := ./$(PROGRAM)

test: $(SRCDIR)/log.c $(SRCDIR)/value_log.c $(SRCDIR)/test.c
	$(CC) $(INCLUDE) $(CFLAG) $(SRCDIR)/test.c -o ./$@ -L./ -lLogger

test2: $(SRCDIR)/log.c $(SRCDIR)/value_log.c $(SRCDIR)/test2.c
	$(CC) $(INCLUDE) $(CFLAG) $(SRCDIR)/test2.c -o ./$@ -L./ -lLogger

lib: $(OBJS) $(LIB)

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

re: fclean test
