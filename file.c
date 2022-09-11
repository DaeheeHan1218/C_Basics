#include <stdio.h>
#include <stdlib.h>
/*
    File
        declare with File*. pointer variable
        ex)
        File* fp;
        -fopen method
        File* fopen(char* file_name, char* mode);
            -performs various function to the file depending of what mode is given
            -modes
                r : open file for reading. the given filename should exist to open the file. otherwise, return NULL
                w : create a new file with the given filename. if a file with given name already exists, that file
                    is blanked out.
                a : append(add something) to the file. if a file with given filename doesn't exist, create one.
                    all writing done is added to end of the file.
                r+ : open file for both reading and writing. file must exist. null otherwise
                w+ : create empty file for both read and write.
                a+ : open file for both reading and appending. pointer can be moved to anywhere for reading,
                    but it will be moved to the end of the file when something is appended
        -fclose
        int fclose(filename);
            close file when you are done with file
            if closed correctly, 0 is returned. if not, EOF is returned
    stdin : input from keyboard
    stdout : output to the monitor screen
    stderr : associated with terminal output
    input methods
        helpful expression
            fscanf(fptr, "%[^\n]", c);
        getc() : can read from both keyboard and file
            ex) printf("%c", getc(stdin));
        getchar() : accepts char input without stdin in parantasies
            ex) printf("%c", getchar());
        scanf()
            fscanf() : same as scanf, but reads from a file
            ex) fscanf(file variable name, "% ", &variable)
        gets()
        ex) fgets(chararray, arraysize, filevarname);

    output methods
        printf() : prints directly to monitor
            fprintf() : prints to some file. exactly same as printf, but only directed to file
        putc()
            ex) putc(char some_character, stdout);
        putchar()
            ex) putchar(char some_character); stdout is already embedded.
        puts()
*/
int main(void)
{
    int num = 0;
    FILE *fptr;
    fptr = fopen("fileTest.txt", "r");
    while(!feof(fptr)){
        int temp = 0;
        fscanf(fptr, "%d", &temp);
        num = num + temp;
    }
    printf("%d", num);
    fclose(fptr);
    
    fptr = fopen("fileCreate.txt", "w");
    char c = "d";
    fprintf(fptr, "%c", c);
    fclose(fptr);
    return 0;
}
