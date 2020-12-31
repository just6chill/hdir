hdir: main.o renamefile.o copyfile.o delfile.o newdir.o newfile.o deldir.o dirstat.o helpf.o
		gcc -o hdir main.o renamefile.o copyfile.o delfile.o newdir.o newfile.o deldir.o dirstat.o helpf.o

main.o: main.c
		gcc -c main.c
		
renamefile.o: renamefile.c
		gcc -c renamefile.c
		
copyfile.o: copyfile.c
		gcc -c copyfile.c
		
delfile.o: delfile.c
		gcc -c delfile.c
		
newdir.o: newdir.c
		gcc -c newdir.c
		
newfile.o: newfile.c
		gcc -c newfile.c
		
deldir.o: deldir.c
		gcc -c deldir.c
		
dirstat.o: dirstat.c
		gcc -c dirstat.c
		
helpf.o: helpf.c
		gcc -c helpf.c