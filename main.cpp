#include <iostream>
#include <numeric>
#include <chrono> 
#include <vector>

#include "SortingAlgorithm.hpp"

using namespace std;
using namespace chrono;

vector<unsigned int> newVec(unsigned int size) 
{
    vector<unsigned int> v(size);
    iota(v.begin(), v.end(), 1);
	random_shuffle(v.begin(), v.end());
    return v;
}

int main(int argc, char* argv[]) {
	
    const unsigned int size = stoi(argv[1]);
    const unsigned int simulations = 20;

	vector<unsigned int> original = newVec(size);
        
	long bubble = 0;
	for (size_t i=0; i < simulations; i++) 
	{
		vector<unsigned int> vec = original;
		auto start = high_resolution_clock::now();
		SortLibrary::BubbleSort(vec);
		auto end = high_resolution_clock::now();
		bubble += duration_cast<microseconds>(end - start).count();
	}

	long heap = 0;
	for (size_t i = 0; i < simulations; i++) 
	{
		vector<unsigned int> vec = original;
		auto start = high_resolution_clock::now();
		SortLibrary::myHeap(vec);
		auto end = high_resolution_clock::now();
		heap += duration_cast<microseconds>(end - start).count();
	}
 
	cout << "BubbleSort: " << bubble << " microsecondi" << endl;
	cout << "HeapSort: " << heap << " microsecondi " <<endl;

    return 0;
}