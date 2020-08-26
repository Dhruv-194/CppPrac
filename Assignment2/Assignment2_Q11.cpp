//Print all the elements of an array
  #include <iostream>
  int main()
  {
        int input[] = { 1, 2, 3, 4, 5 };
        size_t n = sizeof(input)/sizeof(input[0]);
        //loop through the element of the array
        for (size_t i = 0; i < n; i++ ) {
            std::cout << input[i] << '';

        }
        return 0;
  }

