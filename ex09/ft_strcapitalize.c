/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 04:09:44 by hanebaro          #+#    #+#             */
/*   Updated: 2023/10/25 02:05:36 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_spec_char(char c)
{
	if (!((c >= 'a' && c <= 'z') 
			|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))) 
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_spec_char(str[i]) == 1)
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32 ;
			else if (is_spec_char(str[i]))
				i--;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32 ;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32 ;
	return (str);
}
