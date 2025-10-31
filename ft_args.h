/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:10:29 by sede-san          #+#    #+#             */
/*   Updated: 2025/10/31 14:15:50 by sede-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARGS_H
# define FT_ARGS_H

# include <stddef.h>
# include <stdbool.h>

union u_data
{
	char	*s;
	char	c;
	int		i;
	double	d;
	bool	b;
};

typedef struct s_arg
{
	char			short_name;
	char			*long_name;
	union u_data	data;
	char			*description;
}	t_arg;

#endif /* FT_ARGS_H */
