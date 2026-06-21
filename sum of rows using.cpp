#include <iostream>
using namespace std;
int main() 
{
	int sum[3][3]={0}; 
    int matrix[3][3] ;  
    cout <<"Enter Values of Matrix:" << endl;
    for (int i=0;i<3;i++) 
	{
        for (int j=0;j<3;j++) 
		{
            cin>>matrix[i][j];
        }
    }
    cout<<"Matrix Entered By You:"<<endl;
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	 for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		sum[i][j]= sum[i][j] + matrix[i][j];
		}
		cout<<"sum of matrix is"<<endl;
	}
		 for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
}
}
