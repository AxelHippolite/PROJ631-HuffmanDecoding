![](assets/title.jpg)
## Introduction
Huffman coding is a method of data compression. Its principle is to replace a character with a sequence of bits of variable length. The idea is to encode what is frequent in a few bits and what is rare in longer sequences of bits. It allows lossless compression, that is to say a sequence of bits strictly identical to the original is restored by decompression. 
## How Does It Works ?
In order to use the code correctly, we invite you to follow the few steps below :
1. Put the files you want to decompress in the *assets* folder.
2. Run the program.
3. Write the path of the files in the terminal (with the extension).
4. Write the path of the "result" file in the terminal.
5. After pressing *enter* several things appear.
6. The program will end automatically.

The GIF below illustrates the different steps detailed above : 

![](assets/gif.gif)

## WARNING
The compression ratio is calculated using the following formula : *Rate = 1 - (Final Volume / Initial Volume)*. However, the value of the *Final Volume* corresponds **only** to the size of the BINARY file. This choice was made to avoid having a negative compression rate since with the solution chosen to store the *alphabet file* (in TXT format), the final volume will almost always be greater than the initial volume.

Also, we calculate here the codes of each occurrence, which is NOT NECESSARY for the decoding phase.
## Version
Made with GCC 11.2.0
## Referals
D.A. Huffman, A method for the construction of minimum-redundancy codes, Proceedings of the I.R.E., Septembre 1952, pp. 1098-1102.
