# Variables
ofiles = main.o Boatman.o BoatmanFactory.o Caretaker.o Infantry.o InfantryFactory.o Memento.o ShieldBearer.o ShieldBearerFactory.o SoldierFactory.o soldiers.o
gpp_o = g++ -c -std=c++11

# Targets
main: $(ofiles)
	g++ -std=c++98 $(ofiles) -o main

main.o: main.cpp Boatman.h BoatmanFactory.h Caretaker.h Infantry.h InfantryFactory.h Memento.h ShieldBearer.h ShieldBearerFactory.h SoldierFactory.h soldiers.h
	$(gpp_o) main.cpp

Boatman.o: Boatman.cpp Boatman.h
	$(gpp_o) Boatman.cpp

BoatmanFactory.o: BoatmanFactory.cpp BoatmanFactory.h
	$(gpp_o) BoatmanFactory.cpp

Caretaker.o: Caretaker.cpp Caretaker.h
	$(gpp_o) Caretaker.cpp

Infantry.o: Infantry.cpp Infantry.h
	$(gpp_o) Infantry.cpp

InfantryFactory.o: InfantryFactory.cpp InfantryFactory.h
	$(gpp_o) InfantryFactory.cpp

Memento.o: Memento.cpp Memento.h
	$(gpp_o) Memento.cpp

ShieldBearer.o: ShieldBearer.cpp ShieldBearer.h
	$(gpp_o) ShieldBearer.cpp

ShieldBearerFactory.o: ShieldBearerFactory.cpp ShieldBearerFactory.h
	$(gpp_o) ShieldBearerFactory.cpp

SoldierFactory.o: SoldierFactory.cpp SoldierFactory.h
	$(gpp_o) SoldierFactory.cpp

soldiers.o: soldiers.cpp soldiers.h
	$(gpp_o) soldiers.cpp

run: main
	./main

clean:
	rm *.o main
