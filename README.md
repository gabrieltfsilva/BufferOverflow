# BufferOverflow
This is a buffer overflow pattern generator. Use for educational purposes only.

For ease of use, all code is in a single "html" file, just download and use. You can use the "main.c" file for testing and the "index.html" file to generate the pattern.

The program was tested using the MinGW compiler for Windows.
Pay attention to the endianness.
For example: Windows 11, x32dbg, Intel, EIP shows 31624130. Type 0x30416231 or 30416231.
The following results were obtained:

Length
100

Result
Aa0Aa1Aa2Aa3Aa4Aa5Aa6Aa7Aa8Aa9Ab0Ab1Ab2Ab3Ab4Ab5Ab6Ab7Ab8Ab9Ac0Ac1Ac2Ac3Ac4Ac5Ac6Ac7Ac8Ac9Ad0Ad1Ad2A\\

EIP
0x30416231

Offset: 32
