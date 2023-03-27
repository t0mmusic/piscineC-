/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:59:12 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/31 15:58:35 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"

const char *notFound::what( void ) const throw() {
    return("Invalid Index For Array.");
}

template<typename T>
void	easyfind(T ctnr, int i) {

    typename T::iterator it = std::find(ctnr.begin(), ctnr.end(), i);
    if (it == ctnr.end())
    {
        throw notFound();
        return ;
    }
    std::cout << *it << std::endl;
}

#endif