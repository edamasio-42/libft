/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edamasio <edamasio@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:36:52 by edamasio          #+#    #+#             */
/*   Updated: 2026/04/15 17:36:23 by edamasio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strncmp(const char *str1, const char *str2, size_t count)
{
        size_t i;
        
        i = 0;
        if (count > 0)
        {
            while (str1 == str2 && i < count)
            {
                i++;
            }
        }
        return(str1 - str2);
}
