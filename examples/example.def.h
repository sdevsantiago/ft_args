/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.def.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:31:08 by sede-san          #+#    #+#             */
/*   Updated: 2025/10/31 14:15:26 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXAMPLE_DEF_H
# define EXAMPLE_DEF_H

# include "ft_args.h"

typedef struct s_args
{
	t_arg	output_newline;
	t_arg	string;
}	t_args;

static inline void	assign_default(t_args *args)
{
	args->output_newline = (t_arg){
		.short_name = 'n', .long_name = NULL,
		/*.type = ARG_BOOL,*/ .data = {.b = true},
		.description = "do not output trailing newline"
	};
	args->string = (t_arg){
		.short_name = 0, .long_name = NULL,
		/*.type = ARG_STRING,*/ .data = {.s = NULL},
		.description = NULL
	};
}

t_args	read_args(
	t_command cmd,
	t_minishell *msh
){
	t_args	args;

	assign_default(&args);
	args.string.data.s = "string";
	return (args);
}

#endif /* EXAMPLE_DEF_H */
