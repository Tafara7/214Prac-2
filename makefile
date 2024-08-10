# Compiler flags
CXX = g++
CXXFLAGS = -c -std=c++11

# Object files
ofiles = main.o Boatman.o BoatmanFactory.o CareTaker.o Infantry.o InfantryFactory.o Memento.o ShieldBearer.o ShieldBearerFactory.o SoldierFactory.o Soldiers.o 

# Target for the executable
main: $(ofiles)
	$(CXX) $(ofiles) -o main

# Rules for generating object files
main.o: TestingMain.cpp Boatman.h BoatmanFactory.h CareTaker.h Infantry.h InfantryFactory.h Memento.h ShieldBearer.h ShieldBearerFactory.h SoldierFactory.h Soldiers.h
	$(CXX) $(CXXFLAGS) TestingMain.cpp -o main.o

Boatman.o: Boatman.cpp Boatman.h
	$(CXX) $(CXXFLAGS) Boatman.cpp -o Boatman.o

BoatmanFactory.o: BoatmanFactory.cpp BoatmanFactory.h
	$(CXX) $(CXXFLAGS) BoatmanFactory.cpp -o BoatmanFactory.o

CareTaker.o: CareTaker.cpp CareTaker.h
	$(CXX) $(CXXFLAGS) CareTaker.cpp -o CareTaker.o

Infantry.o: Infantry.cpp Infantry.h
	$(CXX) $(CXXFLAGS) Infantry.cpp -o Infantry.o

InfantryFactory.o: InfantryFactory.cpp InfantryFactory.h
	$(CXX) $(CXXFLAGS) InfantryFactory.cpp -o InfantryFactory.o

Memento.o: Memento.cpp Memento.h
	$(CXX) $(CXXFLAGS) Memento.cpp -o Memento.o

ShieldBearer.o: ShieldBearer.cpp ShieldBearer.h
	$(CXX) $(CXXFLAGS) ShieldBearer.cpp -o ShieldBearer.o

ShieldBearerFactory.o: ShieldBearerFactory.cpp ShieldBearerFactory.h
	$(CXX) $(CXXFLAGS) ShieldBearerFactory.cpp -o ShieldBearerFactory.o

Soldiers.o: Soldiers.cpp Soldiers.h
	$(CXX) $(CXXFLAGS) Soldiers.cpp -o Soldiers.o

# Run the program
run: main
	./main

# Clean up
clean:
	rm -f *.o main
