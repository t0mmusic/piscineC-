/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:28:21 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 12:52:47 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter something for Harl to complain about."
		<< std::endl;
		return (1);
	}
	Harl	lilHarl;

	lilHarl.complain(av[1]);

	return (0);
}