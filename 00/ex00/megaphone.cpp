/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:37:44 by jbrown            #+#    #+#             */
/*   Updated: 2022/05/26 13:29:04 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

void	ft_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	i = 0;
	while (++i < ac)
	{
		ft_toupper(av[i]);
		cout << av[i];
	}
	cout << "\n";
	return (0);
}