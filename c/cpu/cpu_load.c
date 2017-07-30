//================================================================================
/*  
 *  Project : CPU Stats for RPI Cluster Network
 *  Author  : Connor McCann
 *  Date    : 01 Aug 2017
 *  Source  : https://www.raspberrypi.org/forums/viewtopic.php?t=64835&p=479657
 *  Source  : https://en.wikipedia.org/wiki/Load_%28computing%29#CPU_Load_Computation
*/
//================================================================================

#include <mpi.h>
#include <stdio.h>


int main(int argc, char** argv) {
  FILE *fp;
  char buff[255];

  fp = fopen("/proc/stat", "r");
  fgets(buff, 255, (FILE*)fp);
  printf("%s\n", buff);
  fclose(fp);
}

