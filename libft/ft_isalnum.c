/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzombie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:42:40 by yzombie           #+#    #+#             */
/*   Updated: 2020/11/03 20:42:42 by yzombie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int ch)
{
	if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z')
		|| (ch >= 'A' && ch <= 'Z'))
		return (1);
	return (0);
}
