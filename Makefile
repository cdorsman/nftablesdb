TARGET   = nftablesdb
CC=gcc
CFLAGS=-Wall -g -I/usr/include/postgresql
LFLAGS=-lnftables -lpq -lsystemd

SRCDIR   = src
OBJDIR   = obj
BINDIR   = bin

SOURCES  := $(wildcard $(SRCDIR)/*.c)
INCLUDES := $(wildcard $(SRCDIR)/*.h)
OBJECTS  := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
rm       = rm -rf

$(BINDIR)/$(TARGET): $(OBJECTS)
	@$(CC) $(OBJECTS) $(LFLAGS) -o $@

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@


.PHONY: clean
clean:
	@$(rm) $(OBJECTS)
	@$(rm) $(BINDIR)/$(TARGET)

