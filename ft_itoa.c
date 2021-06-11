/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:35:01 by rnishimu          #+#    #+#             */
/*   Updated: 2021/05/27 19:35:01 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_sign(int n)
{
	long long	n2;

	n2 = n;
	if (n < 0)
		return (n2 * -1);
	return (n2);
}

int	ft_intlen(int n)
{
	int			len;
	long long	nb;

	len = 1;
	nb = ft_sign(n);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	n2;
	int			i;
	int			len;

	n2 = ft_sign(n);
	if (n2 == 0)
		i = 0;
	else
		i = 2;
	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	while (i <= len)
	{
		if (str[len - i] != '-')
			str[len - i] = (n2 % 10) + '0';
		n2 /= 10;
		i++;
	}
	str[len] = '\0';
	return (str);
}
