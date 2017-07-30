CC = mpicc
Source = cpu_load.c
Exec = cpuLoad

$(Exec): $(Source)
	$(CC) -o $@ $^
	mv $@ ../bin/

clean:
	-rm ../bin/$(Exec)
