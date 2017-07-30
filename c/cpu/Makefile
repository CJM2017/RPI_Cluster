CC = mpicc
Source = cpu_load.c
Exec = cpuLoad

$(Exec): $(Source)
	$(CC) -o $@ $^
	mv $@ ../

clean:
	-rm ../$(Exec)
