/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:58:11 by anovelli          #+#    #+#             */
/*   Updated: 2023/01/05 18:02:36 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


std::string openFile(std::string path)
{
    std:string buf;
    std:string ret;
    std::ifstream file;

    if (!(file.open(path)))
    {
        std::cout << "File does not exist";
        return (NULL);
    }
    else
    {
        while (std::getline(file, buf))
        {
            if (file.eof())
                break ;
            ret += buf;
            ret += endl;
        }
    }
    fclose(file);
    return(ret);
}

std::string ft_replace(std::string file, std::string fromThis, st::string toThis)
{
    std::string ret;
    std::string buf;
    int i = -1;

    while (++i < file.size())
    {
        
    }
}

int sed_is_for_losers(std::string path, std::string s1, std::string s2)
{
    std::string ret;

    ret = openFile(path);
    if (ret != NULL)
        ret = ft_replace(ret, s1, s2);
}

int main(int ac, char **av)
{
    if (ac != 4)
        std::cout << "Usage: ./a.out file_path s1 s2" << std::endl;
    else
        sed_is_for_losers(av[1], av[2], av[3]);
    std::cout << endl;
    return (0);
}