/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alima <alima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 23:00:59 by alima             #+#    #+#             */
/*   Updated: 2024/08/26 13:46:47 by alima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strncmp(const char *s1, const char *s2, size_t byte_n)
{
	size_t	i;

	i = 0;
	if (byte_n <= 0 || s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < byte_n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
	return;
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, s, 1);
		s++;
	}
}
