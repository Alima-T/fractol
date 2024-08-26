/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alima <alima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:22:51 by alima             #+#    #+#             */
/*   Updated: 2024/08/26 13:58:31 by alima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
#include <stdio.h>//for debagging using printf
#include <stdlib.h>
#include <unistd.h>
#include <math.h>


int     ft_strncmp(const char *s1, const char *s2, size_t byte_n);
void    ft_putstr_fd(char *s, int fd);
#endif