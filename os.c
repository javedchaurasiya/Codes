#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MAX_PROCESS 100
typedef struct Process
{
	int arrival;
	int cpburst;
	int turnaround;
	int wait;
	int executed;
	char *name;
} Process;
Process *pt;
int ind = 0;
int curTime = 0;
void read_pt(char *fileName)
{
	ind = 0;
	FILE *filePointer = fopen(fileName, "r");
	while (feof(filePointer) == 0)
	{
		Process pro;
		char *line = (char *)malloc(sizeof(char) * 10);
		pro.name = (char *)malloc(sizeof(char) * 10);
		fscanf(filePointer, "%s", pro.name);
		fscanf(filePointer, "%s", line);
		sscanf(line, "%d", &pro.arrival);
		fscanf(filePointer, "%s", line);
		sscanf(line, "%d", &pro.cpburst);
		pro.turnaround = 0;
		pro.wait = 0;
		pt[ind++] = pro;
	}
}

void print_pt()
{
	int avgWait = 0, avgT_around = 0;
	for (int i = 0; i < ind - 1; ++i)
	{
		printf("%s %d %d %d %d\n", pt[i].name, pt[i].arrival, pt[i].cpburst, pt[i].wait, pt[i].turnaround);
		avgT_around += pt[i].turnaround;
		avgWait += pt[i].wait;
	}
	printf("Avg TurnAround = %f\n", (float)avgT_around / (float)(ind - 1));
	printf("Avg wait = %f\n", (float)avgWait / (float)(ind - 1));
}

void fcfs()
{
	for (int i = 0; i < ind - 1; ++i)
	{
		if (i == 0)
		{
			curTime = pt[i].cpburst + curTime + pt[i].arrival;
			pt[i].wait = 0;
			pt[i].turnaround = pt[i].cpburst - pt[i].arrival;
			curTime = pt[i].cpburst + pt[i].arrival;
		}
		else if ((curTime - pt[i].arrival) < 0)
		{
			pt[i].wait = 0;
			pt[i].turnaround = pt[i].cpburst;
			curTime = pt[i].cpburst + pt[i].arrival;
		}
		else if ((curTime - pt[i].arrival) > 0)
		{
			pt[i].wait = curTime - pt[i].arrival;
			pt[i].turnaround = pt[i].wait + pt[i].cpburst;
			curTime = pt[i].cpburst + pt[i].arrival + pt[i].wait;
		}
	}
}
void RR(int quantum)
{
	int *cpburst = (int *)malloc(sizeof(int) * ind - 1);
	for (int i = 0; i < ind - 1; ++i)
	{
		pt[i].executed = 0;
	}
	for (int i = 0; i < ind - 1; ++i)
	{
		cpburst[i] = pt[i].cpburst;
	}
	int *activeProcess = (int *)malloc(sizeof(int) * ind - 1);
	for (int i = 0; i < ind - 1; ++i)
	{
		activeProcess[i] = 0;
	}
	while (1)
	{
		for (int i = 0; i < ind - 1; ++i)
		{
			if (curTime >= pt[i].arrival)
			{
				if (activeProcess[i] == 2)
					continue;
				activeProcess[i] = 1;
			}
		}
		for (int i = 0; i < ind - 1; ++i)
		{
			for (int i = 0; i < ind - 1; ++i)
			{
				if (curTime >= pt[i].arrival)
				{
					if (activeProcess[i] == 2)
						continue;
					activeProcess[i] = 1;
				}
			}
			if (activeProcess[i] == 1)
			{
				if (pt[i].executed == 0)
				{
					pt[i].wait = curTime - pt[i].arrival;
					pt[i].executed = curTime;
				}
				if (cpburst[i] <= quantum)
				{
					printf("Process %s is executed between %d to % d\n", pt[i].name, curTime, curTime + cpburst[i]);

					activeProcess[i] = 2;
					pt[i].wait = pt[i].wait + curTime - pt[i].executed;
					curTime = curTime + cpburst[i];
					pt[i].turnaround = curTime - pt[i].arrival;
					cpburst[i] = 0;
					pt[i].executed = curTime;
				}
				else if (cpburst[i] > quantum)
				{
					pt[i].wait = pt[i].wait + curTime - pt[i].executed;
					cpburst[i] = cpburst[i] - quantum;
					printf("Process %s is executed between %d to %d\n", pt[i].name, curTime, curTime + quantum);
					curTime = curTime + quantum;
					pt[i].executed = curTime;
				}
			}
		}
		int flag = 1;
		for (int i = 0; i < ind - 1; ++i)
		{
			if (activeProcess[i] == 1)
				flag = 0;
		}
		if (flag == 1)
			break;
	}
}

void SRBF()
{
	int *cpburst = (int *)malloc(sizeof(int) * ind - 1);
	for (int i = 0; i < ind - 1; ++i)
	{
		pt[i].executed = 0;
	}
	for (int i = 0; i < ind - 1; ++i)
	{
		cpburst[i] = pt[i].cpburst;
	}
	int *activeProcess = (int *)malloc(sizeof(int) * ind - 1);
	for (int i = 0; i < ind - 1; ++i)
	{
		activeProcess[i] = 0;
	}
	curTime = pt[0].arrival;
	while (1)
	{
		for (int i = 0; i < ind - 1; ++i)
		{
			if (curTime >= pt[i].arrival)
			{
				if (activeProcess[i] == 2)
					continue;
				else
					activeProcess[i] = 1;
			}
		}
		int sjob = INT_MAX;
		int shindex = -1;
		for (int i = 0; i < ind - 1; ++i)
		{
			if (activeProcess[i] == 1)
			{
				if (cpburst[i] < sjob && cpburst[i] > 0)
				{
					shindex = i;
					sjob = cpburst[i];
				}
			}
		}
		if (pt[shindex].executed != 0)
			pt[shindex].wait = pt[shindex].wait + curTime - pt[shindex].executed;
		if (pt[shindex].executed == 0)
		{
			pt[shindex].wait = curTime - pt[shindex].arrival;
		}
		cpburst[shindex] -= 1;
		pt[shindex].executed = curTime + 1;
		curTime += 1;
		int flag = 0;
		if (cpburst[shindex] == 0)
		{
			pt[shindex].turnaround = curTime - pt[shindex].arrival;
			activeProcess[shindex] = 2;
		}
		for (int i = 0; i < ind - 1; ++i)
		{
			if (activeProcess[i] == 1)
			{
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
int main(int argc, char *argv[])
{
	char *fileName = argv[1];
	pt = (Process *)malloc(sizeof(Process) * MAX_PROCESS);
	read_pt(fileName);
	print_pt();
	int opt = -1;
	do
	{
		curTime = 0;
		printf("Select the scheduling process [0,1,2,3]:\n");
		printf("1-> First Come First Served (fcfs)\n");
		printf("2-> Round Robin (RR)\n");
		printf("3-> SRBF\n");
		printf("0-> Exit\n");
		scanf("%d", &opt);
		int flag = 0;
		switch (opt)
		{
	    case 0:
		break;

		case 1:
			printf("****************fcfs**************\n");
			fcfs();
			print_pt();
			break;
		case 2:
			printf("******************roundrobin****************\n");
			RR(2);
			print_pt();
			break;
		case 3:
			printf("*******************srbf******************\n");
			SRBF();
			print_pt();
			break;
		}
	}
	 while (opt != 0);
}