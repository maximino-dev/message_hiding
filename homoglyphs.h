#ifndef HOMOGLYPH_H
#define HOMOGLYPH_H

struct homoglyph {
	char symbol;
	int bits;
	char homoglyph_array[16][5];
};

struct homoglyph *init_homoglyphs();
void free_homoglyphs();
struct homoglyph find_homoglyph(struct homoglyph *homoglyphs, char c);

#endif