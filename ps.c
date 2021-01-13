#include "types.h"
#include "user.h"
#include "pstat.h"
//https://www.cs.virginia.edu/~cr4bd/4414/F2018/lottery.html?fbclid=IwAR1cszwyEZDJnW38UOkvGP_y51GYxoSRuj5KUdm-b7pHi19ieAvJcNKheBI#listtest
int main(int argc, char* argv[]){
  struct pstat ps;
     
    
    getpinfo(&ps);
    printf(1, "%d running processes\n", NPROC);
    printf(1, "\nPROCESS_NO\tPID\tUSED?\tTICKETS\t\tTICKS\n");
    for (int i = 0; i < NPROC ; i++)
    {
     
// selcet used processes and print their information from pstat struct 
      if(ps.pid[i])
        printf(1, "%d\t\t%d\t%d\t%d\t\t%d\n",i+1, ps.pid[i], ps.inuse[i], ps.tickets[i], ps.ticks[i]);
    }





















    
  
  exit();
  return 0;
}

























