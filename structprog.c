#include <stdio.h>
#include <string.h>

struct show {
    int rollno;
    char compy_name[10];
    char add[30];
    float salary;
};

int main() {
    struct show view;
    
    printf("Rollno\n");
    scanf("%d", &view.rollno);
    
    printf("compy_name\n");
    scanf("%s", view.compy_name);
    
    printf("add\n");
    scanf("%s", view.add);
    
    printf("salary\n");
    scanf("%f", &view.salary);

    printf("Show Details\n");
    printf("Rollno: %d\n", view.rollno);
    printf("compy_name: %s\n", view.compy_name);
    printf("add: %s\n", view.add);
    printf("salary: %.2f\n", view.salary);

    return 0;
}
