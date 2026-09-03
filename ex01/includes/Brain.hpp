/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:12:09 by hchartie          #+#    #+#             */
/*   Updated: 2026/09/03 17:57:15 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "utils.hpp"

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	~Brain();

	Brain(const Brain &pToCopy);
	Brain& operator=(const Brain &pOther);
};

#endif