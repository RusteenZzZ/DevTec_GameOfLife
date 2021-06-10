UNAME := $(shell uname)

ifeq ($(UNAME),Linux)
	FILES := main.c clear_screen_posix.c
else ifeq ($(UNAME), Windows)
	FILES := main.c clear_screen_windows.c
endif

all: exec

object:
	gcc $(FILES) -c

exec: object
	gcc *.o -o main

dist:
	zip -r compressed.zip ./

doc:
	doxygen docs_config

clear:
	rm *.o