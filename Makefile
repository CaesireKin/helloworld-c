build: hello-world.o
	gcc -o bin/helloworld build/hello-world.o

hello-world.o: src/hello-world.c
	gcc -c -o build/hello-world.o src/hello-world.c