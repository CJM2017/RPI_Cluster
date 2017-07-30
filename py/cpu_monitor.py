import sys
import numpy
import psutil
from mpi4py import MPI


# cluster specifications
comm = MPI.COMM_WORLD
rank = comm.Get_rank()
size = comm.Get_size()

# local sys preallocation
cpu_load = numpy.zeros(1, dtype='i')
recvBuf = None

# blocking per-cpu
cpu_load[0] = psutil.cpu_percent(interval=1)

# Prep the PiController to R/x information
if rank == 0:
    recvBuf = numpy.empty([1, size], dtype='i')

# all recevied data 
comm.Gather(cpu_load, recvBuf, root=0)

if comm.rank == 0:
    for node in range(size):
        sys.stdout.write(str(recvBuf[0, node]) + '\n')
    
