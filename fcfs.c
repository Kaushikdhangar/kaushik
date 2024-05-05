#include<stdio.h>
#define MAX 100
int main(){
int Arrival_time[MAX], Burst_time[MAX], Completion_time[MAX],Turn_Around_time[MAX], Waiting_time[MAX],Average_Turn_Around_time = 0, Average_Waiting_time = 0, i, j;
printf("Enter Process U Want: ");
scanf("%d",&j);

printf("Enter Arrival Time: ");
 for(i=0;i<j;i++){
scanf("%d",&Arrival_time[i]);
 }
printf("Enter Burst Time: ");
 for(i=0;i<j;i++){
scanf("%d",&Burst_time[i]);
 }
Completion_time[0] = Burst_time[0];
 for(i=1;i<j;i++){
Completion_time[i] = Completion_time[i-1] + Burst_time[i];
 }
 for(i=0;i<j;i++){
Turn_Around_time[i] = Completion_time[i] - Arrival_time[i];
Waiting_time[i] = Turn_Around_time[i] - Burst_time[i];
Average_Waiting_time += Waiting_time[i];
Average_Turn_Around_time += Turn_Around_time[i];
 }
printf("\nProcess Arrival(T) Burst(T) Completion(T) TurnAround(T) Waiting(T)");
 for(i=0;i<j;i++){
printf("\nP[%d]\t %d\t \t%d\t %d\t \t%d\t \t%d", i+1,Arrival_time[i], Burst_time[i], Completion_time[i],Turn_Around_time[i], Waiting_time[i]);
 }
printf("\n\nAverage Turn Around Time: %d",Average_Turn_Around_time/j);
printf("\nAverage Waiting Time: %d\n",Average_Waiting_time/j);
 return 0;
} 