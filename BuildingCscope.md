### Prerequisites ###

  * [MinGW, MSYS, and MSYS DTK](http://mingw.org)
  * [Cygwin](http://cygwin.org) with flex and bison installed
  * [Henry Spencer's regular expression library](http://arglist.com/regex), version 3.8.g4 alpha
  * [Public Domain Curses](http://pdcurses.sourceforge.net)


### Details ###

  1. Install MinGW, MSYS, Cygwin
  1. Build and install regex library using MSYS
```
./configure --disable-shared --enable-static --prefix=/d/Develop/regex-spencer && make install
```
  1. Build PDCurses using MinGW
```
mingw32-make -f mingwin32.mak DEBUG=N DLL=N
```
  1. Edit variables RX, CURSES, LEX, YACC in cscope Makefile
  1. make with MinGW or MSYS
```
mingw32-make
```