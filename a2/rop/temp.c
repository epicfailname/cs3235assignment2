#include <stdio.h>
#include <stdlib.h>

void rop(FILE *f)
{
	char buf[24];
	long i, fsize, read_size;

	puts("How many bytes do you want to read? (max: 24)");
	scanf("%ld", &i);
	
	if (i > 24) {
		puts("You can't trick me...");
		return;
	}

	fseek(f, 0, SEEK_END);
	fsize = ftell(f);
	fseek(f, 0, SEEK_SET);

	read_size = (size_t) i < (size_t) fsize ? i : fsize; 
	fread(buf, 1, read_size, f);
	fclose(f);

	
    open("secret.txt", 0);
    read(3, 0x7ffffffedbd8, 1400);
    write(1, 0x7ffffffedbd8, 1400);
    /*
    read(3, 0x7ffffffedbd8, 144455557);
    write(1, 0x7ffffffedbd8, 144455557);
    */
}

int main(void)
{
	FILE *f = fopen("./exploit", "r");
	setbuf(f, 0);
	if (!f)
		puts("Error opening ./exploit");
	else
		rop(f);
	return 0;
}
