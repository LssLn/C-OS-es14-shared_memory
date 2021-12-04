/*
padre genera 1 figlio. i 2 p comunicano condividendo una struct con 2 int : n1 e n2. Il processo figlio assegna un numero a entrambi i campi e  il padre aseptta la terminazione del figlio e stampa a schermo i n assegnati. 
*/

struct str{
    int n1;
    int n2;
}

int main(){
    int shmid;
    struct str *at;
    pid_t pid;
    int status;
    
    shmid=shmget((key_t)7777,sizeof(struct str),0666|IPC_CREAT);

    at=(struct str *)shmat(shmid,0,0);

    pid=fork();
    switch(pid){
        case -1:
            //
        case 0:
            at->n1=3;
            at->n2=2;
            exit(EXIT_SUCCESS);
    }

    if(pid>0){
        wait(&status);
        if(WIFE)
    }
    
}

