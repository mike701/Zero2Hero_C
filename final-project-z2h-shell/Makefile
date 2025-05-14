TARGET = bin/dbview
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))

run: clean default
	# ./$(TARGET) 
	./$(TARGET) -f ./mynewdb.db -n
	# ./$(TARGET) -f ./mynewdb.db
	# ./$(TARGET) -f ./mynewdb.db -n
	# ./$(TARGET) -f ./mynewdb.db -n 
	./$(TARGET) -f ./mynewdb.db -a "Timmy H.,123 Sheshire Ln.,120"
	./bin/dbview -f ./mynewdb.db -a "Kenny G.,444 Walloby Way,140"
	./bin/dbview -f ./mynewdb.db -l
	./$(TARGET) -f ./mynewdb.db -r "Timmy H."
	./bin/dbview -f ./mynewdb.db -l

default: $(TARGET)

clean:
	rm -f obj/*.o
	rm -f bin/*
	rm -f *.db

$(TARGET): $(OBJ)
	gcc -o $@ $?

obj/%.o : src/%.c
	gcc -c $< -o $@ -Iinclude


