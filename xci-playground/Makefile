SRC = $(wildcard *.xci)

all: $(SRC) init
	./xci.exe main.xci

init:
	ln -sf $(X16_XCI_HOME)/sdk/xci.exe .
	ln -sf $(X16_XCI_HOME)/engine/XCI.PRG .

run:
	$(X16_HOME)/x16emu -prg XCI.PRG -run

clean:
	rm -f *.BIN *.PRG *.exe
