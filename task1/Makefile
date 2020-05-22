NAME = start_this_program.o
COMPILER = g++
SRC = main

SRCTYPE = cpp

SRCS = $(addsuffix .$(SRCTYPE), $(SRC))
OBJS = $(SRCS: .$(SRCTYPE)=.o)
CFLAGS = -g -Wall -Wextra -Wpedantic #-Werror

all: clean build

build:
	$(COMPILER) $(CFLAGS) -c $(SRCS)
	$(COMPILER) $(OBJS) -o $(NAME)

clean:
	rm -rf $(NAME)

tidy: 
	@rm -rf $(NAME) *.o

run:
	@./$(NAME)

