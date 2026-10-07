#include<stdio.h>
#include<stdlib.h>
struct myArray{
    int total_size;
    int used_size;
    int *ptr; //its pointing fisrt index of array
};

void createArray(struct myArray *a, int tSize, int uSize){
    // (*a).total_size =tSize;
    // (*a).used_size =tSize;
    // (*a).ptr = (int*)malloc(tSize*sizeof(int));
    a->total_size =tSize;
    a->used_size =uSize;
    a->ptr = (int*)malloc(tSize*sizeof(int));

}
void setval(struct myArray *a){
    for(int i=0; i< a->used_size; i++){
        printf("enter element %d:", i);
        scanf("%d",&(a->ptr)[i]);
    }
}
void show(struct myArray *a){
    for(int i=0; i< a->used_size; i++){
            printf("%d\n",(a->ptr)[i]);
        }
}
int main(){
    struct myArray marks; //this is instance of ADT {An instance means an actual usable object created from that ADT.}
    createArray(&marks,10,2);
    setval(&marks);
    show(&marks);
}