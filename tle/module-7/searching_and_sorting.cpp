#include <bits/stdc++.h>
#define ll long long

using namespace std;
int linear_search(const vector<int> &args, int target)
{
    for (int i = 0; i < args.size(); i++)
    {
        if (args[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int lowerBound(const vector<int> &array, int target)
{
    int low = 0, high = array.size() - 1, result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == target)
        {
            result = mid;
            high = mid - 1;
        }
        else if (array[mid]<target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid-1;
        }
    }

    return result;
}
// if there is no lowerbound then there was no first occurence hence 0 occurences 
int upperBound(const vector<int> &array,int target){
    int low = 0, high = array.size() - 1, result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == target)
        {
            result = mid;
            low = mid + 1;// move the searh to the right side for upper Bound since sorted
        }
        else if (array[mid]<target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid-1;//if more then move to left
        }
    }
    return 0;
}
void selectionSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n-1; i++)
    {
        int minindex =i;//assuming it is lowest then check
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex = j;
            }
            
        }
        if (minindex!=i)
        {
            swap(arr[i], arr[minindex]);
        }
        
        
    }
    
}
// optionally we have vector.find() which does linear search (also it's beneficial for only small datasets)

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    string s = "yo mama", x = "hello";
    // cin >> x >> s;
    // cout<<s.rfind("hel"); // very useful find -attribute --> Emerald Alert!
    int indic_x = 0;
    int indic_s = 0;
    while (indic_x < (int)x.size() && indic_s < (int)s.size())
    {
        if (s[indic_s] == x[indic_x])
        {
            s[indic_s] = '-';
            indic_s++;
        }
        // if (indic_s!=0)
        // {
        // }

        indic_x++;
    }
    cout << indic_s << "\n";
    cout << indic_x << "\n";
    cout << s << "\n";
    x.append(x);
    cout << x << "\n";
    // }
    cout << "" << "\n";
    cout << "" << "\n";
    cout << "" << "\n";

    return 0;
}