#ifndef ARRAY_HPP
#define ARRAY_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define CYAN           "\033[36m"

template<typename T>
class Array
{
	private:
		T *array; // Pointer to the array of type T
		unsigned int length; // Number of elements in the array

	public:

		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array &operator=(const Array &other);

        T &operator[](unsigned int index);
		unsigned int size() const;


};

#endif