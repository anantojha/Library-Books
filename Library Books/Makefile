OPT = -Wall

OBJS = main.o Book.o Library.o List.o View.o Control.o FictionBook.o NonFictionBook.o

t08:	$(OBJS)
	g++ $(OPT) -g -o t08 $(OBJS)

main.o:	main.cc Book.h Library.h
	g++ $(OPT) -c main.cc

Book.o:	Book.cc Book.h
	g++ $(OPT) -c Book.cc

Library.o: Library.cc Library.h 
	g++ $(OPT) -c Library.cc

List.o: List.cc List.h
	g++ $(OPT) -c List.cc

View.o: View.cc View.h
	g++ $(OPT) -c View.cc

Control.o: Control.cc Control.h View.h
	   g++ $(OPT) -c Control.cc

FictionBook.o:  FictionBook.cc FictionBook.h Book.h
		g++ $(OPT) -c FictionBook.cc

NonFictionBook.o:  NonFictionBook.cc NonFictionBook.h Book.h
		   g++ $(OPT) -c NonFictionBook.cc

clean:
	rm -f *.o t02
