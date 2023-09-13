void print_alphabet_x10(void)
{
	while (i < 10)
	{
		alphabet(void);
	}

}
void alphabet(void)
{
        char letter;
        letter = 'a';
        while (letter <= 'z')
        {
                printf("%c",letter);
                letter++;
        }
        printf("\n");
}
