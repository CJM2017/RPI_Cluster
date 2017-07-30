CC = mpicc
Source = hello_world.c

helloWorld: $(Source)
	$(CC) -o $@ $^
	mv $@ ../

clean:
	-rm ../helloWorld
