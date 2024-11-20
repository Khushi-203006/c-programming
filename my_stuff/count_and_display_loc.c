#include <stdio.h>
int main()
{
   int array[100], search, c, n, position=0;

    scanf("%d", &n); 

    for (c = 0; c < n; c++)
    scanf("%d", &array[c]); 

    scanf("%d", &search); 
    int i,flag=0;
for(i=1;i<=n;i++){
  if (array[i]==search){
    flag=1;
    position=i;
    break;}
  else{
    continue;}}
if(flag==1){
  printf("%d is present at location %d.\n", search, position+1);}
else{
  printf("%d is not present in the array.\n", search);}
return 0;}

// int main()
// {
//    int array[100], search, n, count = 0;

//  scanf("%d", &n); 

//  int c;
//    for (c = 0; c < n; c++)
//       scanf("%d", &array[c]);

//    scanf("%d", &search);
//    //int num=search;
//    for(int i=0;i<n;i++){
//   if(array[i]==search){
//     printf("%d is present at location %d.\n",search,i);
//     count++;}
//     else{
//         continue;
//     }}
// if (count==0){
//   printf("%d is not present in the array.\n",search);}
// else{
//   printf("%d is present %d times in the array.\n",search,count);}
// return 0;}