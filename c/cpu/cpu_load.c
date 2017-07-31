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


static void extract_cpu_data(void);

typedef struct _cpu_t {
  unsigned long user;
  unsigned long nice;
  unsigned long system;
  unsigned long idle;
  unsigned long iowait;
  unsigned long irq;
  unsigned long softirq;
}cpu_t;

int main(int argc, char** argv) {
  extract_cpu_data();
  return 0;
}

static void extract_cpu_data(void) {
  FILE *fp;
  char buff[255];
  memset(buff, '\0', sizeof(buff));

  fp = fopen("/proc/stat", "r");
  fgets(buff, 255, (FILE*)fp);
  
  const char delim[2] = " ";
  char *token;

  token = strtok(buff, delim);
  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, delim);
  }
  
  fclose(fp);
}

