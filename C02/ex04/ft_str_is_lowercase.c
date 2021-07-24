/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:05:53 by mamaurai          #+#    #+#             */
/*   Updated: 2021/07/01 08:05:54 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
	}
	return (1);
}
