#include "homoglyphs.h"
#include <stdlib.h>
#include <string.h>

struct homoglyph *init_homoglyphs()
{
	struct homoglyph* homoglyphs = malloc(sizeof(struct homoglyph) * 30);

	// space
	homoglyphs[0].symbol = ' ';
	homoglyphs[0].bits = 4;
	strcpy(homoglyphs[0].homoglyph_array[0], "2000");
	strcpy(homoglyphs[0].homoglyph_array[1], "2001");
	strcpy(homoglyphs[0].homoglyph_array[2], "2002");
	strcpy(homoglyphs[0].homoglyph_array[3], "2003");
	strcpy(homoglyphs[0].homoglyph_array[4], "2004");
	strcpy(homoglyphs[0].homoglyph_array[5], "2005");
	strcpy(homoglyphs[0].homoglyph_array[6], "2006");
	strcpy(homoglyphs[0].homoglyph_array[7], "2007");
	strcpy(homoglyphs[0].homoglyph_array[8], "2008");
	strcpy(homoglyphs[0].homoglyph_array[9], "2009");
	strcpy(homoglyphs[0].homoglyph_array[10], "200A");
	strcpy(homoglyphs[0].homoglyph_array[11], "2028");
	strcpy(homoglyphs[0].homoglyph_array[12], "2029");
	strcpy(homoglyphs[0].homoglyph_array[13], "202F");
	strcpy(homoglyphs[0].homoglyph_array[14], "205F");

	homoglyphs[1].symbol = 'a';
	homoglyphs[1].bits = 1;
	strcpy(homoglyphs[1].homoglyph_array[0], "FF41");

	homoglyphs[2].symbol = 'b';
	homoglyphs[2].bits = 1;
	strcpy(homoglyphs[2].homoglyph_array[0], "FF42");

	homoglyphs[3].symbol = 'c';
	homoglyphs[3].bits = 2;
	strcpy(homoglyphs[3].homoglyph_array[0], "FF43");
	strcpy(homoglyphs[3].homoglyph_array[1], "03F2");
	strcpy(homoglyphs[3].homoglyph_array[2], "0441");
	
	homoglyphs[4].symbol = 'd';
	homoglyphs[4].bits = 1;
	strcpy(homoglyphs[4].homoglyph_array[0], "FF44");

	homoglyphs[5].symbol = 'e';
	homoglyphs[5].bits = 1;
	strcpy(homoglyphs[5].homoglyph_array[0], "FF45");

	homoglyphs[6].symbol = 'f';
	homoglyphs[6].bits = 1;
	strcpy(homoglyphs[6].homoglyph_array[0], "FF46");

	homoglyphs[7].symbol = 'g';
	homoglyphs[7].bits = 1;
	strcpy(homoglyphs[7].homoglyph_array[0], "FF47");

	homoglyphs[8].symbol = 'h';
	homoglyphs[8].bits = 1;
	strcpy(homoglyphs[8].homoglyph_array[0], "FF48");

	homoglyphs[9].symbol = 'i';
	homoglyphs[9].bits = 2;
	strcpy(homoglyphs[9].homoglyph_array[0], "FF49");
	strcpy(homoglyphs[9].homoglyph_array[1], "0456");
	strcpy(homoglyphs[9].homoglyph_array[2], "2170");

	homoglyphs[10].symbol = 'j';
	homoglyphs[10].bits = 1;
	strcpy(homoglyphs[10].homoglyph_array[0], "FF4A");

	homoglyphs[11].symbol = 'k';
	homoglyphs[11].bits = 1;
	strcpy(homoglyphs[11].homoglyph_array[0], "FF4B");

	homoglyphs[12].symbol = 'l';
	homoglyphs[12].bits = 1;
	strcpy(homoglyphs[12].homoglyph_array[0], "FF4C");

	homoglyphs[13].symbol = 'm';
	homoglyphs[13].bits = 1;
	strcpy(homoglyphs[13].homoglyph_array[0], "FF4D");

	homoglyphs[14].symbol = 'n';
	homoglyphs[14].bits = 1;
	strcpy(homoglyphs[14].homoglyph_array[0], "FF4E");

	homoglyphs[15].symbol = 'o';
	homoglyphs[15].bits = 2;
	strcpy(homoglyphs[15].homoglyph_array[0], "FF4F");
	strcpy(homoglyphs[15].homoglyph_array[1], "03BF");
	strcpy(homoglyphs[15].homoglyph_array[2], "043E");

	homoglyphs[16].symbol = 'p';
	homoglyphs[16].bits = 1;
	strcpy(homoglyphs[16].homoglyph_array[0], "FF50");

	homoglyphs[17].symbol = 'q';
	homoglyphs[17].bits = 1;
	strcpy(homoglyphs[17].homoglyph_array[0], "FF51");

	homoglyphs[18].symbol = 'r';
	homoglyphs[18].bits = 1;
	strcpy(homoglyphs[18].homoglyph_array[0], "FF52");

	homoglyphs[19].symbol = 's';
	homoglyphs[19].bits = 1;
	strcpy(homoglyphs[19].homoglyph_array[0], "FF53");

	homoglyphs[20].symbol = 't';
	homoglyphs[20].bits = 1;
	strcpy(homoglyphs[20].homoglyph_array[0], "FF54");

	homoglyphs[21].symbol = 'u';
	homoglyphs[21].bits = 1;
	strcpy(homoglyphs[21].homoglyph_array[0], "FF55");

	homoglyphs[22].symbol = 'v';
	homoglyphs[22].bits = 2;
	strcpy(homoglyphs[22].homoglyph_array[0], "FF56");
	strcpy(homoglyphs[22].homoglyph_array[1], "03BD");
	strcpy(homoglyphs[22].homoglyph_array[2], "2174");

	homoglyphs[23].symbol = 'w';
	homoglyphs[23].bits = 1;
	strcpy(homoglyphs[23].homoglyph_array[0], "FF57");

	homoglyphs[24].symbol = 'x';
	homoglyphs[24].bits = 2;
	strcpy(homoglyphs[24].homoglyph_array[0], "FF58");
	strcpy(homoglyphs[24].homoglyph_array[1], "0445");
	strcpy(homoglyphs[24].homoglyph_array[2], "2179");

	homoglyphs[25].symbol = 'y';
	homoglyphs[25].bits = 1;
	strcpy(homoglyphs[25].homoglyph_array[0], "FF59");

	homoglyphs[26].symbol = 'z';
	homoglyphs[26].bits = 1;
	strcpy(homoglyphs[26].homoglyph_array[0], "FF5A");

	return homoglyphs;
}

struct homoglyph find_homoglyph(struct homoglyph *homoglyphs, char c)
{
	int i = 0;
	while(homoglyphs[i].symbol != c)
		i++;
	return homoglyphs[i];
}

void free_homoglyphs(struct homoglyph* h)
{
	free(h);
}