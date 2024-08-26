/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alima <alima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:22:51 by alima             #+#    #+#             */
/*   Updated: 2024/08/26 23:08:39 by alima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#define FRACTOL_H
#include <stdio.h> //for debagging using printf
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "MLX42/include/MLX42/MLX42.h"

/*
FRACTAL ID
~ MLX data 
~ image - basicly a pixels buffer
~ values
*/

typedef struct s_image
{
	void *image_ptr;// pointer to image struct
	char *pixel_ptr; //pointer to the actual pixel to one bite
	int bits_per_pixel; //count of bits in pixel, which - 1 int = 4 bytes = 32 bit
	int line_len;
	int endian;    
}           	t_image;

typedef struct s_fractal
{
	char	name;
	void    *mlx_connection; //init()
	void    *mlx_window; // create_new_window()
	t_image image;
}				t_fractal;

int		ft_atodbl(const char *str);
int     ft_strncmp(const char *s1, const char *s2, size_t byte_n);
void    ft_putstr_fd(char *s, int fd);

#endif