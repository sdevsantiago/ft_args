/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_def.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:31:08 by sede-san          #+#    #+#             */
/*   Updated: 2025/11/01 19:50:48 by sede-san         ###   ########.fr       */
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

extern t_args	read_args(t_command cmd, t_minishell *msh);

#endif /* EXAMPLE_DEF_H */
