CC = mpicc
Source = hello_world.c
Exec = helloWorld

$(Exec): $(Source)
	$(CC) -o $@ $^
	mv $@ ../bin/

clean:
	-rm ../bin/$(Exec)
