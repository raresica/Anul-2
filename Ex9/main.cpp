#include <iostream>

int fibonacci(int n)
{
 if (n <= 1)
 return n;
 return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
 int n;
 std::cout <<"introduceti numarul n=";
 std::cin >>n;

 std::cout << "Rezultat= " << fibonacci(n) << std::endl;
 return 0;

}