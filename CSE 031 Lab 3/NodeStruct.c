#include <stdio.h>
#include <stdlib.h>

struct Node {
    int iValue;
    float fValue;
    struct Node *next;
};

int main() {

    struct Node *head = (struct Node*) malloc(sizeof(struct Node));
    head->iValue = 5;
    head->fValue = 3.14;
	
	printf("Address of head (heap): %p\n", head); 
    printf("Address of head: %p\n", &head); 
    printf("Address of iValue: %p, Value: %d\n", &head->iValue, head->iValue); 
    printf("Address of fValue: %p, Value: %f\n", &head->fValue, head->fValue); 
    printf("Address of next: %p, Value: %p\n", &head->next, head->next);

	
	
	return 0;
}