# Specify compiler
CC=cl.exe
 
# Specify linker
LINK=link.exe

#CFLAGS=-c -Wall -I. /DC_API_EXPORT
CFLAGS=-c -I. -IC:\boost_1_76_0\ -IC:\Python\Python39\include\ /DC_API_EXPORT

#Win32
#LFLAGS= /DLL /LIBPATH:C:\Python\Python39\libs\
#Win64
LFLAGS= /DLL /MACHINE:X64 /LIBPATH:C:\Python\Python39\libs\

all: test

clean:
	del *.o *.dll *.exp *.lib

c_lib: c_lib.o
	$(LINK) $(LFLAGS) c_lib.o

c_lib.o: c_lib.cpp c_lib.h
	$(CC) $(CFLAGS) c_lib.cpp /Foc_lib.o

test: c_lib
	 python python_c_test.py

