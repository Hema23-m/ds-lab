#include <stdio.h>
int main() {

int arr[8]={87,98,65,45,3,2,76,75};
for (int i = 0; i <8; i++) {
printf("%d", arr[i]);
if(arr[i] == 45) {
printf("found at index %d", i);
break;
}
}
return 0;
}
