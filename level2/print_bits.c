/*Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"*/


    #include <unistd.h>

void	print_bits(unsigned char octet)
{
	int divide;
	int oct;

	oct = octet; 
	divide = 128; // 1 byte or 8 bits 
	while (divide)
	{
		if (divide <= oct)
		{
			write(1, "1", 1);
			oct %= divide;
		}
		else
			write(1, "0", 1);
		divide /= 2;
	}

}

int main()
{
    print_bits(2);
}
