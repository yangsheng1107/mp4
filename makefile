# ------------------------------------------------
# Generic Makefile
#
# Author: yangsheng1107@gmail.com
# Date  : 2016-02-23
#
# Changelog :
#   0.01 - first version
#   0.02 - Add Release & OS mode
#          make : default is debug mode
#          make RELEASE=0 :make debug mode
#          make RELEASE=1 :make release mode
#          make RELEASE=0 BITS=64 :make 64-bit & debug mode
#          make RELEASE=0 BITS=32 :make 32-bit & debug mode
#          make RELEASE=1 BITS=64 :make 64-bit & release mode
#          make RELEASE=1 BITS=32 :make 32-bit & release mode
# ------------------------------------------------

# project name (generate executable with this name)
NAME     := mp4
PROJ_DIR := $(shell pwd)
UNAME_S  := $(shell uname -s)

CFLAGS  = -c -Wall
LDFLAGS =
RELEASE = #default debug mode
BITS    = #default by system

ifeq ($(RELEASE),1)
    # release
    CFLAGS  += -O3 -DNDEBUG
    LDFLAGS +=
else
    # debug
    CFLAGS += -g -O2
endif

ifeq ($(BITS),32)
    CC      = gcc -m32
    CFLAGS  += -m32
    LDFLAGS += -m32
else
    ifeq ($(BITS),64)
        CC      = gcc -m64
        CFLAGS  += -m64
        LDFLAGS += -m64
    else
        CC = gcc
    endif
endif

ifeq ($(UNAME_S),Linux)
    CFLAGS += -D LINUX
endif
ifeq ($(UNAME_S),Darwin)
    CFLAGS += -D OSX
endif

#header path
CFLAGS += -I$(PROJ_DIR) \
        -I$(PROJ_DIR)/include \

#source
C_FILES := $(wildcard *.c ./source/*.c)
OBJ_FILES := $(addprefix , $(C_FILES:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(LDFLAGS) $(OBJ_FILES) -o $@

.c.o:
	$(CC) $(CFLAGS) $< $(LDFLAGS) -o $@

clean:
	rm -rf $(OBJ_FILES)
	rm -rf $(NAME)
