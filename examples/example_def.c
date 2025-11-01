/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_def.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 19:45:29 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/01 20:03:18 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "example_def.h"

static inline void	assign_default_args(
	t_args *args
){
	args->output_newline = (t_arg){
		.short_name = 'n', .long_name = NULL,
		.data = {.b = true},
		.description = "do not output trailing newline"
	};
	args->string = (t_arg){
		.short_name = 0, .long_name = NULL,
		.data = {.s = NULL},
		.description = NULL
	};
}

t_args	read_args(
	t_command cmd,
	t_minishell *msh
){
	t_args	args;

	assign_default_args(&args);
	args.string.data.s = "string";
	return (args);
}
