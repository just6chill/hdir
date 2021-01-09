OUT = hdir.exe
CC = gcc
ODIR = obj
SDIR = src
INC = -I inc

CFLAGS = $(INC)

_OBJS = main.o renamefile.o copyfile.o delfile.o newdir.o newfile.o deldir.o dirstat.o helpf.o filestat.o color.o cerror.o

OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))


$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $< 

$(OUT): $(OBJS) 
	$(CC) -o $(OUT) $^


