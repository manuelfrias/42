/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufria <manufria@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:36:59 by manufria          #+#    #+#             */
/*   Updated: 2024/11/20 14:37:02 by manufria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

// int main(void)
// {
// 	printf("%d\n", ft_strncmp("AABC", "AABC", 2));
// 	printf("%d\n", ft_strncmp("AABC", "AABC", 2));
// 	printf("%d\n", ft_strncmp("ABC", "ACC", 2));
// 	printf("%d\n", ft_strncmp("ADD", "F", 2));
// 	return (0);
// }
