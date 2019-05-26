chess: main.o figure.o
	$(CXX) -o chess main.o figure.o

main.o: main.cpp
	$(CXX) -c main.cpp

figure.o: figure.cpp
	$(CXX) -c figure.h figure.cpp

test.o: test.cpp
	$(CXX) -c test.cpp

test: test.o figure.o
	$(CXX) -o test test.o figure.o

clean:
	rm *.o test chess || true