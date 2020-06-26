/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyantolo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:21:21 by iyantolo          #+#    #+#             */
/*   Updated: 2020/06/26 15:26:21 by iyantolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_strlen(char*c);
{
	int	i;
	i =0;
	while(c[i]! ='\0')
		++i;
	return (i);
}
char ft_strcpy(char*dest, char*src)
{
	int	i;
	i =0;
	while(src[i]! ='\0')
	{
		dest[i] = src[i]
			++i;
	}
	dest[i] ='\0';
	return (dest);
}
char	*ft_strdup(char*src)
{
	char	*dest;
	dest = malloc ((ft_strlen(src)+1)*sizeof(char);
			return(dest ?ft_strcpy(dest,src):dest);
			}
			
			


