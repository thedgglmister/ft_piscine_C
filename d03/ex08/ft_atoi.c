void get_beg_isneg(char *str, int *beg, _Bool *isneg);
void get_len(char *str, int *len, int *beg);
int convert(char *str, int len, int beg, int ten_power);

void	get_beg_isneg(char *str, int *beg, _Bool *isneg)
{
	int i;

	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	*beg = i;
	if (str[*beg] = '-' && (str[*beg + 1] < '0' || str[*beg + 1] > '9'))
		return ;
	else if (str[*beg] <= '0' && str[*beg] >= '9' && str[*beg] != '-')
		return ;
	else if (str[*beg] == '-')
		*isneg = 1;
	if (*isneg == 1)
		(*beg)++;
	return ;
}

void	get_len(char *str, int *len, int *beg)
{
	int k;

	k = *beg;
	while (str[k] >= '0' && str[k] <= '9')
	{
		k++;
		(*len)++;
	}
	return ;
}

int convert(char *str, int len, int beg, int ten_power)
{
	int result;

	result = 1;
	while (len > 0) 
	{
		result += (str[beg] - '0') * ten_power;
		(len)--;
		(beg)++;
		ten_power /= 10;
	}
	return result;
}

int ft_atoi(char *str)
{
	int i;
	int k;
	int result;
	_Bool isneg;
	int beg;
	int len;
	unsigned long int ten_power;

	i = 0;
	isneg = 0;
	len = 0; 
	ten_power = 1;
	get_beg_len_isneg(str,&beg,&isneg);
	k = get_len(str, &len, &beg);
	while (j > 1) 
	{
		ten_power *= 10;
		j--;
	}
	result = convert(str, len, beg, ten_power);
	if (isneg)
		result *= -1;
	return result;
}
