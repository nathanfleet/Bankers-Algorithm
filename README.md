# Bankers-Algorithm

This project demonstrates the Banker's Algorithm by using two-dimensional arrays in order to store data each process' allocation, max, avaliable, and need. The program stores this data in an input file, and uses it to determine whether or not the system is in a safe state. The program will output if the system is in a safe state or not, followed by the safe sequence of processes.       

Compilation:  
$ gcc banker.c -o banker    
$ ./banker   
   
Output:       
The system is NOT in a safe state, the safe sequence is:     
<P1, P3, P4, P0, P2>     
