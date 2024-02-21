all:
	@g++-13 -Wall -std=gnu++17 -O2 -o current current.cpp -lm && ./current < input.txt && rm ./current