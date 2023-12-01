#include <stdio.h>
#include <stdlib.h>

char	*get_function(char *str)
{
	char* fun = malloc(15);
	int i = 0;
	while (str[i] != '(')
	{
		if(str[i] != '\0')
			return NULL;
		fun[i] = str[i];
		i++;
	}
	fun[i] = '\0';
	return fun;
}

char	**get_params(char *str)
{
	int	n_params = 0;
	char** params = malloc(sizeof(char*));
	char** new_params = 1;

	int i = 0;int j;
	while (str[i] != '(')
		i++;
	i++;
	while (str[i] != ')')
	{
		if (str[i] == ',')
		{
			j = 0;
			while (j < i)
			{
				params[n_params][j] = str[i];
			}
			str = str + i + 1;
			i = 0;
			n_params++;
			new_params = malloc((n_params + 1)*sizeof(char *));
			j = 0;
			while (j < n_params - 1)
			{
				new_params[j] = params[j];
			}
		}
		if(str[i] != '\0')
			return NULL;
		params[n_params][i] = str[i];
		i++;
	}
}

int	main(int argc, char** argv)
{
	char* func;
	char** params;

	if (argc == 2)
	{
		func = get_function(argv[1]);
		if (func == NULL)
		{
			printf("No function found");
			return 0;
		}

		
	}
}