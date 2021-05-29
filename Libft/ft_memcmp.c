int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int					i;
	const unsigned char	*temp1;
	const unsigned char	*temp2;

	i = 0;
	temp1 = s1;
	temp2 = s2;
	if (s1 == s2)
		return (0);
	while (i < n)
	{
		if (temp1[i] != temp2[i])
			return (temp1[i] - temp2[i]);
		i++;
	}
	return (0);
}
