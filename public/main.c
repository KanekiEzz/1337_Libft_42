
// file f
// ps


// lsof -p 6977  


// zsh     6977 iezzam    0u   CHR  16,10  0t63432                 687 /dev/ttys010
// zsh     6977 iezzam    1u   CHR  16,10  0t63432                 687 /dev/ttys010
// zsh     6977 iezzam    2u   CHR  16,10  0t63432                 687 /dev/ttys010
// zsh     6977 iezzam   10u   CHR  16,10  0t19882                 687 /dev/ttys010



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main(){
    
    char* fileName = "sample.txt";

    int fd = open(fileName, O_RDWR);
    
    if(fd == -1){
        printf("\nError Opening File!!\n");
        exit(1);
    }
    else{
        printf("\nFile %s opened successfully!\n", fileName);
    }

    char *buffer = "Hello Educative User!\n";

    int bytesWritten = write(1, buffer, strlen(buffer));

    printf("%d bytes written successfully!\n", bytesWritten);

    return 0;
}