/*#include <iostream>

using namespace std;

int main()
{
    string DNASeq;
    cin >> DNASeq;
    // A T C G
    int repeatition = 1;

    int repeat[DNASeq.size()];
    for (int i = 0; i < int(DNASeq.size()) - 1; i++)
    {
        if (DNASeq[i] == DNASeq[i + 1])
        {
            repeatition++;
        }
        else
        {
            repeat[i] = repeatition;
            repeatition = 1;
        }

        cout << repeatition;
    }

    cout << repeatition;
    return 0;
}*/

#include <iostream>

using namespace std;

int main()
{
    int max_length = 0;
    int temp_length = 1;
    string DNA;
    cin >> DNA;
    for (int i = 0; i < int(DNA.size()) - 1; i++)
    {
        if (DNA[i] == DNA[i + 1])
        {
            temp_length++;
        }
        else
        {
            if (max_length < temp_length)
            {

                max_length = temp_length;
                temp_length = 1;
            }
            else
            {
                temp_length=1;
            }
            
        }
    }
    if (max_length<temp_length)
    {
        max_length=temp_length;
    }
    
    cout << max_length;
    return 0;
}