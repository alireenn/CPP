/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:58:11 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/06 16:07:56 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string openFile(std::string path)
{
    std::string buf;
    std::string ret;
    std::ifstream file;

    file.open(path);
    if (!file)
    {
        std::cout << "can't open the file" << std::endl;
        return ("");
    }
    else
    {
        while (std::getline(file, buf))
        {
            if (file.eof())
                break ;
            ret += buf;
            ret += "\n";
        }
        ret += buf;
        file.close();
    }
    std::cout << ret << std::endl;
    return(ret);
}

std::string ft_replace(std::string file, std::string fromThis, std::string toThis)
{
    std::string ret;
    std::string buf;
    int i = -1;

    while (++i < file.size())
    {
        std::cout << i << std::endl;
        if  (file[i] == fromThis[0])
        {
            buf = file.substr(i, fromThis.size());
            if (!buf.compare(fromThis))
            {
                ret += toThis;
                i += fromThis.size() - 1;
            }
            else
            {
                ret += file[i];
            }
        }
        else
            ret += file[i];
    }
    return (ret);
}

int writeFile(std::string path, std::string ret)
{
    std::ofstream out;
    
    out.open(path);
    if (!out)
        return (1);
    out << ret;
    out.close();
    return (0);
}

int sed_is_for_losers(std::string path, std::string s1, std::string s2)
{
    std::string ret;

    ret = openFile(path);
    if (ret != "")
        ret = ft_replace(ret, s1, s2);
    else
        return (1);
    if (!(writeFile(path.append(".replace"), ret)))
        return (1);
    return(0);
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Usage: ./a.out file_path s1 s2" << std::endl;
        return (1);
    }
    else
    {
        if (!(sed_is_for_losers(av[1], av[2], av[3])))
        {
            std::cout << "h" << std::endl;
            return (1);
        }
        else
            std::cout << "Done!" << std::endl;
    }
    std::cout << std::endl;
    return (0);
}