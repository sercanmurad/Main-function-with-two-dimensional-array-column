#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void inputArray(int a[][4])
	{
		cout<<"Please enter the array:";
		for (int i = 0; i < 4; ++i) 
		{
            for (int j = 0; j < 4; ++j) 
		    {
	            //cout << "a[" << i << "][" << j << "]: ";
	            cin >> a[i][j];
            }
        }
	}
void replaceFunction(int a[][4])
	{
		for(int j=0;j<4;j++)
		{
			for(int i=0;i<4;i++)
			{
				if(a[i][j]%3==0)
				{
					a[i][j]=0;
					break;
				}
			}
		}
	}
void outputArray(int a[][4])
	{
		cout<<"The output is:"<<endl;
		for (int i = 0; i < 4; ++i) 
		{
            for (int j = 0; j < 4; ++j) 
		    {
	          cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
	}
int main(int argc, char** argv) {
	int a[4][4];
		
	inputArray(a);
	replaceFunction(a);
	outputArray(a);
	
	return 0;
}
