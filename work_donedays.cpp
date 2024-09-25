#include <iostream>

using namespace std;
int calculateWork(int task[], int low, int N)  //calculate workdone
{
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
        
        temp += (task[i] + low - 1) / low;   // Calculate the number of days
    }
    return temp;
}

int main()
{
    int N, task[10], days, low = 1;
    cout << "Enter nunber o tasks: ";
    cin >> N;

   
    for (int i = 0; i < N; i++) //amount of work for each task
     {
        cout << "Enter " << i << "th work: ";
        cin >> task[i];
    }
    cout << "Enter max number of days: ";
    cin >> days;

    while (true)
        {
        int work = calculateWork(task, low, N);
        if (work <= days)
        {
            cout << "Minimum work to be done per day: " << low << endl;
            break;
        }
        low++;
    }

    return 0;
}