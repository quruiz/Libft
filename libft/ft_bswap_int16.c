/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bswap_int16.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: quruiz <quruiz@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/15 15:55:58 by quruiz       #+#   ##    ##    #+#       */
/*   Updated: 2018/12/27 18:04:23 by quruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

short	ft_bswap_int16(short val)
{
	return (val << 8) | ((val >> 8) & 0xFF);
}
