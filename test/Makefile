TARGET = bin/final
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))

default: $(TARGET)

clean:
	rm -rf obj/*.o
	rm -rf bin/*
$(TARGET): $(OBJ)
	gcc -o $@ $?
obj/%.o: src/%.c
	gcc -c $< -o $@ -Iinclude