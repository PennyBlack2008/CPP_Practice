find . -type f -name "*.cpp" -exec sed '1, 11d' {} \;

find . -type f -name "*.cpp" -exec sed '/^\//d' {} \; 
