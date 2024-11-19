/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertini <albertini@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:33:04 by albertini         #+#    #+#             */
/*   Updated: 2024/11/19 18:01:53 by albertini        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <cmath>


class Fixed
{
	private:
		static int const	_fractional_bits;
		int			_fix_point_value;
	public:
		//Default Constructor
		Fixed(void);
		//Int Constructor
		Fixed(int value);
		//Float Constructor
		Fixed(float value);
		//Copy Constructor 
		Fixed(const Fixed &value);
   		//Assigment Opperator
		Fixed &operator=(const Fixed &rhs);
		//Destructor
		~Fixed(void);
		//Methods
		float toFloat( void ) const;
		int toInt( void ) const;
		//Operators
		int operator>(Fixed const &rhs) const;
		int operator<(Fixed const &rhs) const;
		int operator<=(Fixed const &rhs) const;
		int operator>=(Fixed const &rhs) const;
		int operator==(Fixed const &rhs) const;
		int operator!=(Fixed const &rhs) const;
		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;
		Fixed &operator++(void); // Prefix (++F)
		Fixed &operator--(void); // Prefix (--F)
		Fixed operator++(int n); // Postfix (++F)
		Fixed operator--(int n); // Postfix (++F)
		// min & max
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		//Getters & Setters
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		friend std::ostream& operator<<(std::ostream &os, const Fixed &fixed);
};

#endif
