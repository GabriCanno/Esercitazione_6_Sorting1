#pragma once

#include <iostream>
#include <vector>

using namespace std;

namespace SortLibrary {

template<typename T>
void BubbleSort(vector<T>& v)
{
	const unsigned int n = v.size();
	for(size_t i = 0; i <= n-2; i++)
	{
		for(size_t j = i+1; j <= n-1; j++)
		{
			if (v[j]<v[i])
			{
			//swap:
			const T tmp = v[i];
			v[i] = v[j];
			v[j] = tmp;
			}
				
		}
	}
}

template<typename T>
void myHeap(vector<T>& v)
{   
    unsigned int n = v.size();

    while(n)
    {
        for(size_t i = 1; i < n; i++)    // creazione di un heap di dimensione n
        {
            unsigned int p = (i-1)/2; 
            while(v[p] < v[i])
            {
                //swap:
                const T tmp = v[i];
                v[i] = v[p];
                v[p] = tmp;

                if(p!=0)
                {
                    i=p;
                    p=(i-1)/2; 
                }                
            }
        }
        
        //Dequeue:
        T tmp = v[n-1];
        v[n-1] = v[0];
        v[0] = tmp;

        n--;
    }
}

}
