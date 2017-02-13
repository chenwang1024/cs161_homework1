
#include <stdio.h>

/* Reverse Triangle */

void reverse_triangle(void) {

  for (int i=0; i < 6; i++) {
  for (int j=5; j >= i; j--) {
  printf("*");
}
  printf("\n");
}
}

/* Pyramid */

void pyramid(void) {
for (int i = 1; i < 7; i++){
for (int j = 5; j >= i; j--){
printf(".");
}
for (int k = 1; k <= 2*i-1; k++ ){
printf("#");
}
for (int l = 5; l >= i; l--){
printf(".");
}
printf("\n");
}
}


/* Rocket Steps */

#define NUM_STEPS 3


int rocky_top(){
  for (int i = 1; i<= 5; i++){
  for (int j = 1; j<= 2*NUM_STEPS+8-i; j++){
  printf(" ");
}
  printf("/");
  for (int k = 1; k <= i-1; k++){
  printf("/\\");
}
  printf("\\");
  for (int l = 1; l<= 2*NUM_STEPS+8-i; l++){
  printf(" ");
}
  printf("\n");
}
return 0;

}

int rocky_window(){

  for (int i = 1; i<= 2*NUM_STEPS+2; i++){
  printf("-");
}
  printf("-| %%    %% |-");
  for (int j = 1; j<= 2*NUM_STEPS+2; j++){
  printf("-");
}
  printf("\n");
  for (int k = 1; k<= NUM_STEPS+1; k++){
  printf(" o");
}
  printf(" | %%    %% | ");
  for (int l = 1; l<= NUM_STEPS+1; l++){
  printf("o ");
}
  printf("\n");
  for (int m = 1; m<= 2*NUM_STEPS+2; m++){
  printf("-");
}
  printf("-| %%    %% |-");
  for (int n = 1; n<= 2*NUM_STEPS+2; n++){
  printf("-");
}
  printf("\n");
return 0;
}




int rocky_step(){ 
  for (int n = 1; n <= NUM_STEPS; n++){
  printf("~");
  for (int i = 1; i <= 2; i++){
  for (int j = 1; j <= NUM_STEPS+2-n; j++){
  printf("^~");
}
  printf("/");
  for (int k = 1; k <= 2+4*n+2*i; k++){
  printf("-");
}
  printf("\\");
  for (int l = 1; l <= NUM_STEPS+2-n; l++){
  printf("~^");
}
  if (i == 1){
  printf("~\n");
}
  else{
  printf("\n");
  for (int m = 1; m <= 2*NUM_STEPS+4-2*n; m++){
  printf(" ");
}
  printf("|");
  for (int m = 1; m <= 6+4*n; m++){
  printf("=");
}
  printf("|");
  for (int m = 1; m<= 2*NUM_STEPS+4-2*n; m++){
  printf(" ");
}
  printf("\n");

}
}
}

return 0;
}



int rocky_bottom(){
  
  for (int i = 1; i <= 3; i++){
  for (int j = 1; j <= 4-i; j++){
  printf(" ");
}
  printf("/");
  if (i == 1){
  for (int k = 1; k <= 8+4*NUM_STEPS; k++){
  printf(" ");
}
}
  else if (i == 2){
  printf("  ");
  for (int k = 1; k <= 6+4*NUM_STEPS; k++){
  printf("=");
}
  printf("  ");
} 
  else {
  printf("  / ");
  for (int k = 1; k <= 4+4*NUM_STEPS; k++){
  printf("\"");
}
  printf(" \\  ");
}
  printf("\\");
  for (int k = 1; k <= 3; k++){
  printf(" ");
}
  printf("\n");
}

  printf("|  | ");
  for (int k = 1; k <= 6+4*NUM_STEPS; k++){
  printf("\"");
}
  printf(" |  |\n");
  
  for (int i = 1; i <= 3; i++){
  for (int j = 1; j <= i; j++){
  printf(" ");
}
 
  printf("\\");
 
  if (i == 1){
  printf("  \\ ");
  for (int k = 1; k<= 4+4*NUM_STEPS; k++){
  printf("\"");
}
  printf(" /  /");
}
  
  else if (i == 2){
  printf("  ");
  for (int k = 1; k<= 6+4*NUM_STEPS; k++){
  printf("=");
}
  printf("  /");
} 
  else {
  for (int k = 1; k<= 8+4*NUM_STEPS; k++){
  printf("_");
}
  printf("/");
} 

  for (int j = 1; j <= i; j++){
  printf(" ");
}
  printf("\n");
} 
return 0;
}



void rocky_steps(){

  rocky_top();
  rocky_window();
  rocky_step();
  rocky_bottom();
}


void main (){
  reverse_triangle();
  pyramid();
  rocky_steps();
}
