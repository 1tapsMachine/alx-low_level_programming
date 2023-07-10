#include "main.h"
#include <string.h>
char *str_concat(char *s1, char *s2)
{
	char *cnct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	cnct = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (cnct == NULL)
		return (NULL);
	strcpy(cnct, s1);
	strcat(cnct, s2);
	return (cnct);
}
