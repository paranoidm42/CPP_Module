#pragma once

# include <algorithm>


template<typename T>
typename T::iterator	easyfind(T &t, int n)
{
    typename T::std::iterator it;
    
    std::find(t.begin(), t.end(), n)
    if (it == container.end())
		throw std::runtime_error("couldn't find :<");
	return (it);
}