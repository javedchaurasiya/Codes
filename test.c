#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "ERORR int the argument\n");
        exit(1);
    }
    int infd = open(argv[1], O_RDONLY);
    if (infd < 0)
    {
        fprintf(stderr, "ERROR, Opening File\n");
        exit(1);
    }
    int outfd = creat(argv[2], 0644);
    if (outfd < 1)
    {
        fprintf(stderr, "ERROR,Openign File\n");
        exit(1);
    }
    if (dup(infd) < 0)
    {
        fprintf(stderr, "ERROR, Changing Stream\n");
        exit(1);
    }
    if (dup(outfd) < 0)
    {
        fprintf(stderr, "ERROR, Changing Stream\n");
        exit(1);
    }
    close(0);
    dup(infd);
    close(3);
    close(1);
    dup(infd);
    close(4);

    int fd[2];

    pipe(fd);
    pid_t child1, child2;
    int st;
    if ((child1 = fork()) != 0)
    {
        if ((child2 = fork()) != 0)
        {
            close(fd[0]);
            close(fd[1]);
            wait(&st);
            wait(&st);
        }
        else
        {
            dup2(fd[1], 1);
            close(fd[0]);
            execl("b", "c", (char *)NULL);
        }
    }
    else
    {
        dup2(fd[0], 0);
        close(fd[1]);
        execl("b", "c", (char *)NULL);
    }
    return 0;
}