#pragma once

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()