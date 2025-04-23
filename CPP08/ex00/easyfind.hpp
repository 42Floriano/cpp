/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:02:38 by falberti          #+#    #+#             */
/*   Updated: 2025/04/23 12:21:43 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int value){
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()){
        throw std::runtime_error("not found");
    }
    return it;
}

#endif