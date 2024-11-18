/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/18 23:13:50 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>


class Fixed
{
	private:
		int const	_ic;
		int			*_i;
	public:
		//Default Constructor
		Fixed(void);
		//Copy Constructor 
		Fixed(const Fixed &other);
   		//Assigment Opperator
		Fixed &operator=(const Fixed &other);
		//Destructor
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
