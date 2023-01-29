all : derle bagla calistir
derle : 
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/Ders.cpp -o ./lib/Ders.o
	g++ -c -I "./include" ./src/Linkedlist.cpp -o ./lib/Linkedlist.o
	g++ -c -I "./include" ./src/Node.cpp -o ./lib/Node.o
	
bagla : 
	g++ ./lib/main.o ./lib/Ders.o ./lib/Linkedlist.o ./lib/Node.o -o ./bin/program
calistir : 
	./bin/program