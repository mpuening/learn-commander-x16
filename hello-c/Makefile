CC = $(CC65_HOME)/bin/cl65 -t cx16
DEPS = screen.h
SRC = hello.c screen.c
PRG = HELLO.PRG

all: $(SRC) $(DEPS)
	$(CC) -o $(PRG) -l hello.list $(SRC)

run:
	$(X16_HOME)/x16emu -prg $(PRG) -run

clean:
	rm -f *.PRG *.list *.o
