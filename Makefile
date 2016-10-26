CPPFLAGS+= -Wall -Wextra -Wpedantic -Wwrite-strings -Wstack-usage=1024 -Wfloat-equal -Waggregate-return -Winline 

CFLAGS+=-std=c11


.PHONY: debug

debug: hydracat
debug: CFLAGS+=-g

#target: dependecies...
#    rules/
#    commands
#i.e.
#driver.o: driver.c
#   cc $(CPPFLAGS) -c -o driver.o driver.c lm 
# -o means output filename
# -c mean compile to object file
# $(CPPFLAGS) includes our warnings

#this is how multifiles are linked


#this is how to run with only 'make' (if i have math lib and one c file)
#BINS= timestable timestable.o
#timestable: timestable.o -lm
#all: $(BINS)
