#include "io.h"

typedef struct Student
{
    int rollNumber;
    struct Name
    {
        char *firstName;
        char *middleName;
        char *lastName;
    } name;
    enum Sex
    {
        male,
        female
    } sex;
    struct DATE
    {
        int day, month, year;
    } dob;
    struct Marks
    {
        int english, mathematics, computerScience;
    } marks;
} Student;

int input(char *message, char *format, int *where)
{
    printf("%s", message);
    scanf(format, where);
}

int main(int argc, char const *argv[])
{
    int number;
    input("Enter number: ", "%d", &number);

    printf("%d ", number);

    return 0;
}
