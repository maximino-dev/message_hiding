#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "homoglyphs.h"

int bits_to_dec(char *bits);

char *binary_representation(char *hidden_msg)
{
	// Alphabet is : [space]abcdefghijklmnopqrstuvwxyz123456789'0.:/\\%-_?&
	int pos;
	int cpt;

	char *binary_msg = malloc(sizeof(char) * 6 * (strlen(hidden_msg) + 2));
	char tmp[7];
	char tmpstr[2];

	int i = 0;
	int j;
	while(hidden_msg[i])
	{
		if (hidden_msg[i] >= 97 && hidden_msg[i] <= 122)
		{
			strcpy(tmp, "");
			cpt = 0;
			pos = (int)(hidden_msg[i] - 97 + 1); // Position of the char in the alphabet
			while(pos)
			{
				if (pos & 1)
				{
					strcat(tmp, "1");
				}
				else {
					strcat(tmp, "0");
				}
				pos = pos >> 1;
				cpt++;
			}
			while(cpt < 6)
			{
				strcat(binary_msg, "0");
				cpt++;
			}
			j = strlen(tmp) - 1;
			while(j >= 0)
			{
				tmpstr[0] = tmp[j];
				tmpstr[1] = 0;
				strcat(binary_msg, tmpstr);
				j--;
			}
		}
		i++;
	}

	strcat(binary_msg, "000000"); // Add space (position 0) at the end of the string

	return binary_msg;
}

char *encode_message(char *message, char *binary_representation)
{
	struct homoglyph curr_homoglyph;
	struct homoglyph *homoglyphs = init_homoglyphs();

	char changed_symbol[4];
	char tmp_bits[6];
	char tmpstr[2];
	int offset = 0;
	int i = 0;
	int j;
	int homoglyph_index;
	while(message[i])
	{
		strcpy(tmp_bits, "");
		curr_homoglyph = find_homoglyph(homoglyphs, message[i]);
		j = 0;
		while(j < curr_homoglyph.bits)
		{
			tmpstr[0] = binary_representation[offset + j];
			tmpstr[1] = '\0';
			strcat(tmp_bits, tmpstr);
			j++;
		}
		homoglyph_index = bits_to_dec(tmp_bits);
		offset = offset + j;

		if (homoglyph_index > 0)
			printf("%s", curr_homoglyph.homoglyph_array[homoglyph_index - 1]);
		else
			printf("%c", message[i]);
		i++;
	}
	free_homoglyphs(homoglyphs);
}

char *decode_message(char *message)
{
	int i = 0;
	while(message[i])
	{
		i++;
	}
}

int bits_to_dec(char *bits)
{
	int res = 0;
	int exp = 1;
	int i = strlen(bits) - 1;
	while(i >= 0)
	{
		if (bits[i] == '1')
			res = res + exp;
		exp = exp * 2;
		i--;
	}
	return res;
}

int main(int argc, char **argv)
{
	char *bin_secret_msg = binary_representation(argv[2]);

	encode_message(argv[1], bin_secret_msg);

	free(bin_secret_msg);
	return 0;
}
