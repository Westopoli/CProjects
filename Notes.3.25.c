#include <stdio.h>
#include <string.h>
 
int main(void)
{
    // File input/output (chapter 22)
    // Text data:       all input is a string
    // Formatted data:  some data is a string, numerical data is int

    // Stream is the source of input or destination for output 
        // Small programs just use keyboard input and output to screen
        // Larger programs use many other streams 
    // File buffering - transfering data to or from a disk drive in a faster manner 
        // bufering a large array 
        // unbuffered "!IH" contents made immediately availabe
        // buffered "!IH", each character is sent individually
    // File buffering, stdio uses buffering and "flushes" the stream when it's done using it 

    // fgets can be used in place of read_line
        // fgets also includes new line character, where read_line (the one we write) does not 
    
    // fputs creates a new file while fgets does not 

    return 0;
 }