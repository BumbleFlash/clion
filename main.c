#include <stdio.h>
#include <stdlib.h>


int main() {
    int c,i=0,j=0,m=0,n=0;
    int chain[200][200];
    FILE *f=fopen("/home/sudarshan/Documents/file.txt","w");
    system("/bin/stty raw");
    while((c=getchar())!= '2') {
        chain[i][j]=c;
        j++;
    }
    for(m=0;m<=i;m++){
        for(n=0;n<j;n++){
            printf("%c",chain[m][n]);

            fprintf(f,"%c",chain[m][n]);    
        }
    }
    system("/bin/stty cooked");

    return 0;
}
