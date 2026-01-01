#include<stdio.h>
typedef enum {
    success, failure, pending
}status;
void connectstatus(status stat);

int main() {
    status stat=failure;
    connectstatus(stat);

}
void connectstatus(status stat) {
    switch(stat){
        case 0:
            printf("Connection was Establihed");
            break;
        case 1:
            printf("Connection Establish was failed");
            break;
        case 2:
            printf("Connecting...");
            break;


    }

}