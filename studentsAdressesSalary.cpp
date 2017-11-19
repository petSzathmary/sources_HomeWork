#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

typedef struct {
	char city[20];
	int pc;
}address_detail;

typedef struct {
	char name[20];
	int age;
	float salary;
	address_detail address;
} person;

int main()
{
	srand(time(NULL));

	person student[20];
	strcpy_s(student[0].name, "Sebastian"); student[0].age = 35; student[0].salary = 1452;
	strcpy_s(student[0].address.city, "Kosice"); student[0].address.pc = 92512;
	strcpy_s(student[1].name, "David"); student[1].age = 45; student[1].salary = 1471;
	strcpy_s(student[1].address.city, "Kosice"); student[1].address.pc = 04001;
	strcpy_s(student[2].name, "Filip"); student[2].age = 30; student[2].salary = 987;
	strcpy_s(student[2].address.city, "Bardejov"); student[2].address.pc = 82356;
	strcpy_s(student[3].name, "Janka"); student[3].age = 19; student[3].salary = 1203;
	strcpy_s(student[3].address.city, "Levoca"); student[3].address.pc = 14780;
	strcpy_s(student[4].name, "Denisa"); student[4].age = 35; student[4].salary = 859;
	strcpy_s(student[4].address.city, "Kosice"); student[4].address.pc = 90845;

	strcpy_s(student[5].name, "Dominik"); student[5].age = 28; student[5].salary = 1452;
	strcpy_s(student[5].address.city, "Kosice"); student[5].address.pc = 84652;
	strcpy_s(student[6].name, "Jan"); student[6].age = 31; student[6].salary = 1020;
	strcpy_s(student[6].address.city, "Senica"); student[6].address.pc = 71254;
	strcpy_s(student[7].name, "Tobias"); student[7].age = 32; student[7].salary = 456;
	strcpy_s(student[7].address.city, "Senec"); student[7].address.pc = 12387;
	strcpy_s(student[8].name, "Tereza"); student[8].age = 41; student[8].salary = 785;
	strcpy_s(student[8].address.city, "Poprad"); student[8].address.pc = 12874;
	strcpy_s(student[9].name, "Slavka"); student[9].age = 20; student[9].salary = 1025;
	strcpy_s(student[9].address.city, "Kosice"); student[9].address.pc = 68787;

	strcpy_s(student[10].name, "Samuel"); student[10].age = 24; student[10].salary = 1332;
	strcpy_s(student[10].address.city, "Kosice"); student[10].address.pc = 87458;
	strcpy_s(student[11].name, "Xenia"); student[11].age = 22; student[11].salary = 800;
	strcpy_s(student[11].address.city, "Presov"); student[11].address.pc = 8001;
	strcpy_s(student[12].name, "Daniel"); student[12].age = 44; student[12].salary = 1701;
	strcpy_s(student[12].address.city, "Michalovce"); student[12].address.pc = 07101;
	strcpy_s(student[13].name, "Branislav"); student[13].age = 25; student[13].salary = 1101;
	strcpy_s(student[13].address.city, "Martin"); student[13].address.pc = 41444;
	strcpy_s(student[14].name, "Simona"); student[14].age = 32; student[14].salary = 1045;
	strcpy_s(student[14].address.city, "Kosice"); student[14].address.pc = 04022;

	strcpy_s(student[15].name, "Dusan"); student[15].age = 18; student[15].salary = 697;
	strcpy_s(student[15].address.city, "Michalovce"); student[15].address.pc = 55654;
	strcpy_s(student[16].name, "Kamil"); student[16].age = 28; student[16].salary = 1500;
	strcpy_s(student[16].address.city, "Kosice"); student[16].address.pc = 04011;
	strcpy_s(student[17].name, "Michaela"); student[17].age = 27; student[17].salary = 1300;
	strcpy_s(student[17].address.city, "Senec"); student[17].address.pc = 92545;
	strcpy_s(student[18].name, "Roman"); student[18].age = 18; student[18].salary = 1005;
	strcpy_s(student[18].address.city, "Presov"); student[18].address.pc = 04001;
	strcpy_s(student[19].name, "Oliver"); student[19].age = 30; student[19].salary = 1206;
	strcpy_s(student[19].address.city, "Kosice"); student[19].address.pc = 04012;

	// TO DO

	// 1. write down name and city of all students

	// 2. write down the name and salary of student with highest salary

	// 3. write down all students from Kosice or Presov

	// 4. write down all student that their salary is between 1000 and 1300

	// 5. calculate average age of all students

	// 6. calculate average salary of student that are under 30 years old

	// 7. count number of students not from Kosice

	// 8. find and write down the oldest student

	// 9. write down number of student that their name is longer than 7 characters

	// 10. sort students by salary ascending and write down the list 
	// ---------------------------------------------------------------------------

	// 1. write down name and city of all students

	int i;
	printf("Writing down name and city of all students:\n");
	for (i = 0; i<20; i++)
	{
		printf("Name: %s\n", student[i].name);
		printf("City: %s\n\n", student[i].address.city);
	}

	// 2. write down the name and salary of student with highest salary

	int maxSalaryMoney = student[0].salary;
	char richestStudent[20];
	for (i = 1; i<20; i++)
	{
		if (student[i].salary>maxSalaryMoney)
		{
			maxSalaryMoney = student[i].salary;
			strcpy_s(richestStudent, student[i].name);
		}
	}
	printf("Richest student:\n");
	printf("Name: %s\n", richestStudent);
	printf("Salary: %d\n\n", maxSalaryMoney);

	// 3. write down all students from Kosice or Presov

	char cityKE[20], cityPO[20];
	strcpy_s(cityKE, "Kosice");
	strcpy_s(cityPO, "Presov");

	printf("Writing down all students from Kosice or Presov:\n");
	for (i = 0; i<20; i++)
	{
		if (strcmp(student[i].address.city, cityKE) == 0 || strcmp(student[i].address.city, cityPO) == 0)
		{
			printf("Name: %s\n", student[i].name);
		}
	}

	// 4. write down all student that their salary is between 1000 and 1300

	printf("\nWriting down all student that their salary is between 1000 and 1300:\n");
	for (i = 0; i<20; i++)
	{
		if (student[i].salary >= 1000 && student[i].salary <= 1300)
		{
			printf("Name: %s\t\tSalary: %.2f\n", student[i].name, student[i].salary);
		}
	}

	printf("\n");

	// 5. calculate average age of all students

	int sumAge = 0;
	int students = 0;
	for (i = 0; i<20; i++)
	{
		sumAge = sumAge + student[i].age;
		students++;
	}
	printf("Calculate average age of all students:\n");
	printf("Age sum (all students: %d): %d\n", students, sumAge);
	// average age of students
	float averageAge = (float)sumAge / (float)students;
	printf("Average age: %d\n\n", (int)averageAge);

	// 6. calculate average salary of student that are under 30 years old

	printf("Calculating average salary of student that are under 30 years old:\n");
	int sumSalary=0;
	int studentsUnder30 = 0;
	for (i = 0; i<20; i++)
	{
		if (student[i].age<30)
		{
			sumSalary = sumSalary + (int)student[i].salary;
			studentsUnder30++;
		}
	}
	printf("(all students under 30: %d) Salary sum: %d\n", studentsUnder30, sumSalary);
	float averageSalaryOfStudentsUnder30 = (float)sumSalary / (float)studentsUnder30;
	printf("Average salary of students who are younger than 30: %.2f\n\n", averageSalaryOfStudentsUnder30);

	// 7. count number of students not from Kosice

	printf("Counting number of students not from Kosice:\n");
	int studentsNotFromKE = 0;
	for (i = 0; i<20; i++)
	{
		if (strcmp(student[i].address.city, cityKE) != 0)
		{
			studentsNotFromKE++;
		}
	}
	printf("There are %d students not from Kosice.\n\n", studentsNotFromKE);

	// 8. find and write down the oldest student

	printf("Find and write down the oldest student:\n");
	int oldestStudentAge = student[0].age;
	char oldestStudentName[20];
	printf("The oldest student is: ");
	for (i = 1; i<20; i++)
	{
		if (student[i].age>oldestStudentAge)
		{
			oldestStudentAge = student[i].age;
			strcpy_s(oldestStudentName, student[i].name);
		}
	}
	printf("%s (%d)\n\n", oldestStudentName, oldestStudentAge);

	// 9. write down number of student that their name is longer than 7 characters

	printf("Writing down number of student that their name is longer than 7 characters:\n");
	for (i = 0; i<20; i++)
	{
		if (strlen(student[i].name)>7)
		{
			printf("Name: %s\n", student[i].name);
		}
	}
	printf("\n");

	// 10. sort students by salary ascending and write down the list

	printf("Sorting students by salary ASCENDING and writing down the list:\n");
	// sorting
	float temp; char tempName[20];
	for (i = 0; i < 20; i++)
	{
		int j;
		for (j = 1; j < 20; j++)
		{
			if (student[j].salary > student[i].salary)
			{
				temp = student[i].salary;
				student[i].salary = student[j].salary;
				student[j].salary = temp;
				strcpy_s(tempName, student[i].name);
				strcpy_s(student[i].name, student[j].name);
				strcpy_s(student[j].name, tempName);
			}
		}
	}
	// printing them
	for (i = 1; i < 20; i++)
	{
		printf("Name: %s\tSalary: %f\n", student[i].name, student[i].salary);
	}

	return 0;
}