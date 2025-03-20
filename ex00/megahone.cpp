/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfauve-p <tfauve-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:00:21 by tfauve-p          #+#    #+#             */
/*   Updated: 2025/03/13 14:37:07 by tfauve-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include "iostream"

void to_upper_print(char *arg)
{
	for (size_t i = 0; i < strlen(arg); i++)
		std::cout << char(toupper(arg[i]));
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		to_upper_print(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}