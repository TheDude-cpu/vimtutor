main: main.cpp
	g++ main.cpp -o main -Wall -Wextra -Werror -Wpedantic -O2 --std=c++17 -lpthread -lm

debug:
	g++ main.cpp -o main -Wall -Wextra -Werror -Wpedantic -g --std=c++17 -lpthread -lm

clean: 	
	rm main
