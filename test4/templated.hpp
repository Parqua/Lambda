using std::vector;
#include <string>

template<class T, int extent>
class Classy{
	public: 
		T get_aggregate();
		void add_val(T additive);
	private:
		vector<T> entries;
		T aggregate;
}

template <>
class Classy <char> {
	public: 
		char get_aggregate();
		void add_val(char additive);
	private:
		vector<char> entries;
		string aggregate;

}
