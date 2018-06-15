PROG = bin/executavel
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11
OBJS = main.o circuito.o corrida.o sapo.o 

$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o:
	$(CC) $(CPPFLAGS) -c src/main.cpp
	

circuito.o: include/circuito.hpp
	$(CC) $(CPPFLAGS) -c src/circuito.cpp


corrida.o: include/corrida.hpp
	$(CC) $(CPPFLAGS) -c src/corrida.cpp

sapo.o: include/sapo.hpp
	$(CC) $(CPPFLAGS) -c src/sapo.cpp

clean:
	rm -f $(PROG) build/*.o