#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>


void buildVector(vector<int> & v, in numItems)
{
    srand(time(NULL));
    for(int i=1;i <= numItems; i++)
    {
        v.push_back(rand()%1000 + 1);
    }
}

void displayVector(vector<int> & v)
{
    for(int i=1;i <= v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
vector<int> numbers;
buildVector(numbers,10);
displayVector(numbers);
cout << endl;
sort(numbers.begin(), numbers.end());
displayVector(numbers);
cout << endl;
return 0;
}