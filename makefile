OUT = hdir.exe
CC = gcc
ODIR = obj
SDIR = src

_OBJS = main.o renamefile.o copyfile.o delfile.o newdir.o newfile.o deldir.o dirstat.o helpf.o filestat.o color.o

OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))


$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) -c -o $@ $< 

$(OUT): $(OBJS) 
	$(CC) -o $(OUT) $^

