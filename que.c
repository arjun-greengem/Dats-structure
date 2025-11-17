#inclue<stdio.h>
#inclue<stdlib.h>
#define N 5
int queue[N]
int rear=-1,front=-1;

void enqueue() {
  int val;
 printf("enter the data");
 scanf("%d",&val);
if(rear==-1 && front==-1)
   {
      rear=front=0;
      queue[rear]=val;
   }
 else if((rear+1)%N==front)
   {
       printf("queue is overflow");
       return;
   }
 else 
   {
       (rear+1)%N;
       queue[rear]=val;
   }
}
void dequeue() {
              if(rear==-1 && front==-1)
                     {
                     printf("queuq is underflow");
                     return;
                     }
               else if(rear==front)
                     rear=front=-1;
               else{
                     print("deleted item is %d ", queue[front]);
                     front=(front+1)%N;
                   }
               }
void serch()
     {
               int data,flag=0,count=0;
               if(rear==-i && front==-1)
                   {
                   printf("queue is underflow");
                   return;
                   }
              else
                   {
                   printf("enter the data");
                   scanf("%d",&data);
                   
                   while(front!=rear)
                         {
                              if(data==queue[front]{
                                      flag==1;
                                      break;
                                      }
                               else{
                                    front=(front+1)%N;
                                    count++;
                                    }
                            }
                if(flag==1)
                  printf("the element is founded at %d position,count);

                    
