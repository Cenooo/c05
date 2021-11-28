/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpolat <cpolat@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:11:43 by cpolat            #+#    #+#             */
/*   Updated: 2021/11/28 15:12:31 by cpolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			break ;
		i++;
	}
	if (nb == i)
	{
		return (1);
	}
	return (0);
}
