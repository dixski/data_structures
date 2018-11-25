default: all

# define the C compiler to use
CC = gcc

# define any compile-time flags
CFLAGS  = -Wall -Wextra -Werror -Wmissing-prototypes -pedantic-errors
CFLAGS += -Wc++98-compat -g -O0

# define any directories containing header files other than /usr/include
#INCLUDES = -I../include

# define library paths in addition to /usr/lib
#LFLAGS = -L../lib

# define any libraries to link into executable:
#LIBS = -lc

# define the C source files
SRCS = $(wildcard *.c)

# define the C object files 
OBJS = $(SRCS:.c=.o)

# define the executable file 
MAIN = test.app

.PHONY: depend clean

all:    $(MAIN)
	@echo  $(MAIN) has been compiled

$(MAIN): $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(MAIN) $(OBJS) $(LFLAGS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(MAIN)

depend: $(SRCS)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it