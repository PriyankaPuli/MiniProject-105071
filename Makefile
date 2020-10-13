OBJS	= main.o bikerentalmanagementsystem.o
SOURCE	= main.c bikerentalmanagementsystem.c
HEADER	= bikerentalmanagementsystem.h
OUT	= final.out
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

bikerentalmanagementsystem.o: bikerentalmanagementsystem.c
	$(CC) $(FLAGS) bikerentalmanagementsystem.c 


clean:
	rm -f $(OBJS) $(OUT)

