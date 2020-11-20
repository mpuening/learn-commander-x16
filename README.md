# Learn Commander X16 Programming

This project contains my musings on learning to program the [Commander X16](https://www.commanderx16.com/).

## Emulator Installation

Because the actual hardware hasn't been produced at the time this is being written, 
one must use the emulator. To install the emulator, go the website's github
[releases](https://github.com/commanderx16/x16-emulator/releases) page
and download the appropriate installer. On a Mac, it's just a ZIP file that
one can place anywhere convenient for the user. (e.g. `~/tools/x16emu_mac-r38/`).

To run the emulator, use the following command (assuming $X16_HOME env):

```
$X16_HOME/x16emu
```

If the MacOS does not trust the executable, use Finder to open the program which
will allow one the answer the trust question.

To test, here is the obligatory test program:

```
10 PRINT "HELLO"
20 GOTO 10
RUN
```

Use `Ctrl-C` or `ESC` to quit the program.

## Loading a Basic Program from "Disk"

Here is the complete documentation:

https://github.com/commanderx16/x16-emulator/blob/master/README.md#dealing-with-basic-programs

To load a basic program called `hello.bas` on the filesystem, enter this command:

```
LOAD "HELLO.BAS"
```

To save a modified version:

```
SAVE "HELLO.BAS"
```

TODO: Convert PETSCII file to ASSCII

## Installing cc65 Toolchain

Using `brew`, one can install cc65 using the following command:

```
brew install cc65
```

However, the x16 support may not be present in that version (2.18 is old)

To build cc65, run these commands:

```
git clone https://github.com/cc65/cc65.git
cd cc65
make
```

Makefile should refer to `$CC65_HOME/bin/cl65`
