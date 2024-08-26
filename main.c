/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alima <alima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:46:51 by alima             #+#    #+#             */
/*   Updated: 2024/08/26 22:11:39 by alima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

/*
1. Mandatory part
Program name: fractol
Turn in files: Makefile, *.h, *.c
Makefile: NAME, all, clean, fclean, re
  
2. Arguments: The type of fractal to display and any other option
available
External functs:
• open, close, read, write, malloc, free, perror, strerror, exit
• All functions of the math library (-lm compiler option, man man 3 math)
• All functions of the MiniLibX
• ft_printf and any equivalent YOU coded
Libft authorized: Yes
3. Description:
This project is about creating a small fractal
exploration program.  First, you have to know what
a fractal is.
Your project must comply with the following rules:
• You must use the MiniLibX. Either the version available on the school machines, or installing it using its sources.
• You have to turn in a Makefile which will compile your source files. It must not relink.
• Global variables are forbidden.

4. Your program must offer the Julia set and the Mandelbrot set.
• The mouse wheel zooms in and out, almost infinitely (within the limits of the computer). This is the very principle of fractals.
• You must be able to create different Julia sets by passing different parameters to the program.
• A parameter is passed on the command line to define what type of fractal will be displayed in a window.
◦ You can handle more parameters to use them as rendering options.
◦ If no parameter is provided, or if the parameter is invalid, the program displays
a list of available parameters and exits properly.
• You must use at least a few colors to show the depth of each fractal. It’s even better if you hack away on psychedelic effects.

5. Graphic management
• Your program has to display the image in a window.
• The management of your window must remain smooth (changing to another win-
dow, minimizing, and so forth).
• Pressing ESC must close the window and quit the program in a clean way.
• Clicking on the cross on the window’s frame must close the window and quit the program in a clean way.
• The use of the images of the MiniLibX is mandatory.
*/

/*
~./fractol Mandelbrot
~./fractol Julia <real> <i>
TL, DR
*/

int main(int argc, char **argv)
{
	t_fractal	fractal;
	
	if(2 == argc && ft_strncmp(argv[1], "mandelbrot", 10)
	|| (2 == argc && ft_strncmp(argv[1], "julia", 5)))
	{
	  // TODO the main code to kick off the application  
	   
	}
	else  
	{
		write(1, "Wrong request.\n", 15); // TODO  ERROR_MESSAGE
		exite(EXIT_FAILURE);
	}
}
