/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
012345678       0  1  2  3  4  5  6  7  8  9  10  11  12  13  14  15
abcdefxyz       a  g  b  h  c  i  d  j  e  k  f   x   y   z
ghijk           1  2  3  4  5  6  7  8  9 10 11  12  13  14
123456789
*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main(){
    char strA[20],strB[20],newStr[50];
    scanf("%s %s",strA,strB);
    int aLen = strlen(strA), bLen= strlen(strB),countA=0,countB=0;
    for(int i=0,j=0,k=0; i<aLen+bLen; i++){
        if(i%2==0 && countA<aLen){
            newStr[i]=strA[k++];
            countA++;
        }
        else if(i%2!=0 && countB<bLen){
            newStr[i]=strB[j++];
            countB++;
        }
        else
            newStr[i]=strA[k++];
    }
    printf("%s %lu",newStr,strlen(newStr));
    return 0;
}
