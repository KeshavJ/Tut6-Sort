#include<iostream> 
#include<string.h>
#include<sstream>

using namespace std;

template <typename name>
void sort(name nameArr[], int len)
{
	int i, j;
	bool flag = 1;    
	name temp;             
	
	for (i = 1; (i <= len) && flag; i++)
	{
		flag = 0;
		for (j = 0; j < (len - 1); j++)
		{
			if (nameArr[j + 1] > nameArr[j])     
			{
				temp = nameArr[j];             
				nameArr[j] = nameArr[j + 1];
				nameArr[j + 1] = temp;
				flag = 1;               
			}
		}
	}
}

int main() {
	const int x = 10;
	int integerArray[x] = {2,4,6,7,9,82,78,24,69,30};
	sort(integerArray, x);
	cout << "integer values" << endl;
	for (int i = 0; i < 10; i++) {
		cout << integerArray[i] << endl;
	}
	const int y = 10;
	float FloatArray[y] = {10.5,78.2,98,89.6,52.2,4,6,71.8,45,6.89};
	sort(FloatArray, y);
	cout << "floating point numbers" << endl;
	for (int i = 0; i < 10; i++) {
		cout << FloatArray[i] << endl;
	}
	const int z = 5;
	string stringArray[z] = { "keshav", "jeewanlall", "allisha", "batman", "ironman" };
	sort(stringArray, z);
	cout << "string" << endl;
	for (int i = 0; i < z; i++) {
		cout << stringArray[i] << endl;
	}
}
