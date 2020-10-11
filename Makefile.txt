OBJS	= total.o
SOURCE	= total.c
HEADER	= 
OUT	= final.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

total.o: total.c
	$(CC) $(FLAGS) total.c 


clean:
	rm -f $(OBJS) $(OUT)