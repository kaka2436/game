TARGET:=main
OBJECTS:=main.o a.o b.o
CC:=gcc
OPTIONS:=-Wall

$(TARGET):$(OBJECTS)
	$(CC) $^ -o $@ $(OPTIONS)
%.o:%.c
	$(CC) -c $< -o $@ $(OPTIONS)

clean:
	rm -rvf *.o $(TARGET)























