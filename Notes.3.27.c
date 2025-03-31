#include <stdio.h>
#include <string.h>
 
int main(void)
{
    // File position 
        // file position is set to the beginning of the file when it's opened
        // sequential access - read or write operation is performed
        // rewind function sets file position to the beginning 
    // fscanf - scans numbers and other formatted information from a file
        // more complicated 
        // 3 things can happen that make reading unsuccessful
            // End of file prevents you from reading further before matching
                // formmat completely 
            // Read error
            // Matching failure - data item was in the wrong format 
                // unable to fill variable sent as argument
                // if fscanf returns number other than you were expecting
                    // you know there is a matching failure 
                // fscanf returns the number of arguments it picked up reading
                // the file 
        // while (!feof(myFile)&&!ferror(myFile))

        char color[31];
        int weight;
        int count; 
        int totalCount = 0; 

            FILE *fp = fopen("dumbbells.txt", "r");
        if(fp == NULL)
        {
            printf("Error opening file.");
            return 1;
        }

        while(!feof(fp) && !ferror(fp))
        {
            // color doesn't have an & because it's a string (array of characters)
            if(fscanf(fp, "%d%s%d", &weight, color, &count) == 3)
            {
                totalCount += count; 
            }

        }
    printf("There are %d number of dumbbells in total.\n", totalCount);
    fclose(fp);

    // ^ the same as logical not 
    // %[^abc] reads any string that doesn't contain abc
    // %[^.]

    

    return 0;
 }