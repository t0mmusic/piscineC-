/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <jbrown@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:28:21 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/01 12:55:36 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	lilHarl;

	lilHarl.complain("DEBUG");
	lilHarl.complain("INFO");
	lilHarl.complain("WARNING");
	lilHarl.complain("ERROR");
	lilHarl.complain("Something else!");

	return (0);
}