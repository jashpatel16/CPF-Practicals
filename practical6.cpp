/* 6.1:- */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "********************************************" << endl;
    cout << "       SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "********************************************" << endl;
    cout << "Enter Number of Participants: ";
    cin >> n;
    string id[n];
    string name[n];
    int score[n];
    for (int i = 0; i < n; i++)
{
    cout << endl;
    cout << "Enter Participant ID: ";
    cin >> id[i];
    cin.ignore();
    cout << "Enter Participant Name: ";
    getline(cin, name[i]);
    cout << "Enter Score: ";
    cin >> score[i];
}
    int total = 0;
    int highest = score[0];
    int lowest = score[0];
    for (int i = 0; i < n; i++)
    {
        total = total + score[i];
        if (score[i] > highest)
        {
            highest = score[i];
        }
        if (score[i] < lowest)
        {
            lowest = score[i];
        }
    }
    double average = (double)total / n;
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "          Participant Performance" << endl;
    cout << "----------------------------------------------" << endl;
    cout << left << setw(10) << "ID"
         << setw(15) << "Name"
         << "Score" << endl;
    cout << "----------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left << setw(10) << id[i]
             << setw(15) << name[i]
             << score[i] << endl;
    }
    cout << "----------------------------------------------" << endl;
    cout << "Total Score: " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average Score: " << average << endl;
    cout << "Highest Score: " << highest << endl;
    cout << "Lowest Score: " << lowest << endl;
    return 0;
}



/* 6.2:- */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "********************************************" << endl;
    cout << "        SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "********************************************" << endl;
    cout << "Enter Number of Participants: ";
    cin >> n;
    string id[n];
    string name[n];
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Enter Participant ID: ";
        cin >> id[i];
        cin.ignore();
        cout << "Enter Participant Name: ";
        getline(cin, name[i]);
        cout << "Enter Score: ";
        cin >> score[i];
    }
    string searchID;
    bool found = false;
    cout << endl;
    cout << "Search Participant" << endl;
    cout << "Enter Participant ID: ";
    cin >> searchID;
    for (int i = 0; i < n; i++)
    {
        if (id[i] == searchID)
        {
            cout << endl;
            cout << "--------------------------------------" << endl;
            cout << "          Participant Found" << endl;
            cout << "--------------------------------------" << endl;
            cout << "ID    : " << id[i] << endl;
            cout << "Name  : " << name[i] << endl;
            cout << "Score : " << score[i] << endl;
            found = true;
            break;
        }
    }
    if (found == false)
    {
        cout << "Participant not found." << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (score[j] < score[j + 1])
            {
                int tempScore = score[j];
                score[j] = score[j + 1];
                score[j + 1] = tempScore;
                string tempID = id[j];
                id[j] = id[j + 1];
                id[j + 1] = tempID;
                string tempName = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tempName;
            }
        }
    }
    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "            Ranking List" << endl;
    cout << "--------------------------------------" << endl;
    cout << left << setw(8) << "Rank"
         << setw(20) << "Name"
         << "Score" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left << setw(8) << i + 1
             << setw(20) << name[i]
             << score[i] << endl;
    }
    cout << "--------------------------------------" << endl;
    cout << endl;
    cout << "Top Three Performers" << endl;
    int top = (n < 3) ? n : 3;
    for (int i = 0; i < top; i++)
    {
        cout << i + 1 << ". " << name[i]
             << " - " << score[i] << endl;
    }
    return 0;
}



/* 6.3:- */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    const int MAX = 100;
    string enrollment[MAX];
    string name[MAX];
    float percentage[MAX];
    string grade[MAX];
    int n;
    cout << "********************************************" << endl;
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;
    cout << endl;
    cout << "Enter Number of Students : ";
    cin >> n;
    cout << endl;
    cout << "Enter Student Details" << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Enrollment Number : ";
        cin >> enrollment[i];
        cin.ignore();
        cout << "Enter Student Name      : ";
        getline(cin, name[i]);
        cout << "Enter Percentage        : ";
        cin >> percentage[i];
        cout << "Enter Grade             : ";
        cin >> grade[i];
        cout << endl;
    }
    cout << "--------------------------------------------" << endl;
    cout << "Current Student Records" << endl;
    cout << "--------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << enrollment[i] << "   "
             << name[i] << "   "
             << fixed << setprecision(2) << percentage[i] << "   "
             << grade[i] << endl;
    }
    int position;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Insert New Student" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter Position : ";
    cin >> position;
    for (int i = n; i >= position; i--)
    {
        enrollment[i] = enrollment[i - 1];
        name[i] = name[i - 1];
        percentage[i] = percentage[i - 1];
        grade[i] = grade[i - 1];
    }
    cout << endl;
    cout << "Enter Enrollment Number : ";
    cin >> enrollment[position - 1];
    cin.ignore();
    cout << "Enter Student Name      : ";
    getline(cin, name[position - 1]);
    cout << "Enter Percentage        : ";
    cin >> percentage[position - 1];
    cout << "Enter Grade             : ";
    cin >> grade[position - 1];
    n++;
    cout << endl;
    cout << "Record Inserted Successfully." << endl;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Updated Student Records" << endl;
    cout << "--------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << enrollment[i] << "   "
             << name[i] << "   "
             << fixed << setprecision(2) << percentage[i] << "   "
             << grade[i] << endl;
    }
    string searchEnrollment;
    bool found = false;
    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Update Student Record" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter Enrollment Number : ";
    cin >> searchEnrollment;
    for (int i = 0; i < n; i++)
    {
        if (enrollment[i] == searchEnrollment)
        {
            cout << endl;
            cout << "Enter New Percentage : ";
            cin >> percentage[i];
            cout << "Enter New Grade      : ";
            cin >> grade[i];
            found = true;
            cout << endl;
            cout << "Record Updated Successfully." << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << endl;
        cout << "Record Not Found." << endl;
    }
    return 0;
}




/* 6.4:- */

#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], result[3][3] = {0};
    cout << "********************************************" << endl;
    cout << "          MATRIX MULTIPLICATION" << endl;
    cout << "********************************************" << endl;
    cout << endl << "Enter First Matrix (3 x 3):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl << "Enter Second Matrix (3 x 3):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    cout << endl << "First Matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl << "Second Matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl << "Resultant Matrix" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << "   ";
        }
        cout << endl;
    }
    int n1, n2;
    cout << endl;
    cout << "********************************************" << endl;
    cout << "          MERGE SORTED ARRAYS" << endl;
    cout << "********************************************" << endl;
    cout << endl << "Enter size of First Array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements in sorted order:" << endl;

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << endl << "Enter size of Second Array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements in sorted order:" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int merged[n1 + n2];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    cout << endl << "First Array" << endl;
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl << endl << "Second Array" << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl << endl << "Merged Sorted Array" << endl;
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}

