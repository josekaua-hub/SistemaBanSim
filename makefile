banco: main.o ContaBancaria.o 
	g++ -o banco main.o  ContaBancaria.o

main: main.o
	g++ -c main.cpp

ContaBancaria: ContaBancaria.o
	g++ -c ContaBancaria.cpp

clean: 
	del /Q *.o banco.exe
