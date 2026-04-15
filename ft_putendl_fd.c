/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edamasio <edamasio@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:37:20 by edamasio          #+#    #+#             */
/*   Updated: 2026/04/15 16:15:13 by edamasio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putendl_fd(char *str, int fd)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(fd, &str[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}
