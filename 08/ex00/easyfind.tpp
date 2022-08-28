/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:59:12 by jbrown            #+#    #+#             */
/*   Updated: 2022/08/28 11:58:35 by jbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

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