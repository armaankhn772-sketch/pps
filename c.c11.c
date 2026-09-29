
//c programme to check the grade of students marks based upon the condition -use if else
int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A");
    }
    else if (marks >= 80) {
        printf("Grade: B");
    }
    else if (marks >= 70) {
        printf("Grade: C");
    }
    else if (marks >= 60) {
        printf("Grade: D");
    }
    else if (marks >= 50) {
        printf("Grade: E");
    }
    else {
        printf("Grade: F");
    }

    return 0;
}

