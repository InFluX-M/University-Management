#include <iostream>
#include <iomanip>
#include <cstring>
#include <ctime>
#include <chrono>
#include <cstdio>
#include <fstream>
#include <cstdlib>

using namespace std;


//Structure Declaration//

struct Lesson
{
	char name[25];
	char code[15];
	double mark;
};

struct examStudent
{
	char codeExam[20];
	float mark = 0;
};

struct Student
{
	char username[30];
	char password[20];
	char firstName[30];
	char lastName[30];
	char ID[15];
	int nLesson;
	Lesson lesson[15];
	int nExam = -1;
	examStudent Exam[30];
};

struct Teacher
{
	char username[30];
	char password[20];
	char firstName[30];
	char lastName[30];
	int nLesson;
	char ID[15];
	Lesson lesson[15];
};

struct TestQuestions
{
	char test[100];
	char answer[4][50];
	char answerkey[50];
	float score;
};

struct DescriptiveQuestions
{
	char question[150];
	char keyAnswer[8][25];
	float score;
};

struct Exam
{
	char IDTeacher[15];
	char lesson[25];
	float sumScore = 0;
	int nMinuteExam;
	tm time = { 0 };
	time_t examtime;
	char code[20];
	int nTest;
	TestQuestions test[50];
	int nDescriptive;
	DescriptiveQuestions Descriptive[10];
	bool NegativePoint;
};


//Structure Definitions//

Lesson* myLesson = new Lesson[1000000];
int nLesson;

Teacher* myTeacher = new Teacher[1000000];
int nTeacher;

Student* myStudent = new Student[1000000];
int nStudent;

Exam* myExam = new Exam[100000];
int nExam;

int indexTeacher;
int indexStudent;



//Functions Declaration//


//Welcome//

void welcomePage();

//-----------------------------//

//Start//

void startPage();

//-----------------------------//

//Admin//


//Admin Main Page
void adminPage();


//Registration//

//Registration Page Admin
void registerAdminPage();

//Register Lesson by Admin
void LessonRegistionPage();
//Register Teacher by Admin
void teacherRegistionPage();
//Register Student by Admin
void studentRegistionPage();


//List//

//Admin List Page 
void listAdminPage();


//Admin Lesson List Page
void lessonListAdmin();

//Show All Registered Lessons in System with Name and Code for Admin
void DisplayLessonListAdmin();
//Search and Show Complete Lesson Information and Edit Its Information
void SearchLessonListAdmin();


//Admin Teacher List Page 
void teacherListAdmin();

//Show All Registered Teachers in System with Name and ID for Admin
void DisplayTeacherListAdmin();
//Search and Show Complete Teacher Information and Edit Its Information
void SearchTeacherListAdmin();

//Admin Student List Page
void studentListAdmin();

//Show All Registered Students in System with Name and ID for Admin
void DisplayStudentListAdmin();
//Search and Show Complete Student Information and Edit Its Information
void SearchStudentListAdmin();


//Admin Exam List Page
void examListAdmin();

//Show All Registered Exams in System with Lesson Code and Exam Code and Status for Admin 
void DisplayExamListAdmin();
//Search and Show Complete Exam Information and Students Result for Admin
void SearchExamListAdmin();

//-----------------------------//

//Teacher//

//Teacher Main Page
void teacherPage();


//List//

//Teacher List Page 
void listTeacherPage();

//Teacher Lesson List Page
void lessonListTeacher();

//Show All Teacher Registered Lessons in System with Name and Code for Teacher
void DisplayLessonListTeacher();
//Search and Show Complete Lesson Information
void SearchLessonListTeacher();

//Teacher Student List Page
void studentListTeacher();

//Show All Teacher Registered Students in System with Name and ID for Teacher
void DisplayStudentListTeacher();


//Exam//

//Teacher Exam List Page
void examTeacherPage();

//Teacher Exam List Page
void examListTeacher();

//Show All Teacher Registered Exams in System with Lesson Code and Exam Code and Status for Teacher 
void DisplayExamListTeacher();
//Search and Show Complete Exam Information and Students Result for Teacher
void SearchExamListTeacher();

//Make Descriptiv and Test Exam by Teacher
void makeExam();
//Show Exam Questions and Information for Teacher
void showExam(int indexSearchExam);

//-----------------------------//

//Student//

//Student Main Page
void studentPage();


//List//

//Student List Page 
void listStudentPage();

//Student Lesson List Page
void lessonListStudent();

//Show All Student Registered Lessons in System with Name and Code for Student
void DisplayLessonListStudnet();

//Student Teacher List Page
void teacherListStudent();

//Show All Student Registered Teachers in System with Name and ID for Student
void DisplayTeacherListStudent();


//Exam//

//Student Exam List Page
void examListStudent();

//Show All Student Registered Exams in System with Lesson Code and Exam Code and Status for Student 
void DisplayExamListStudnet();
//Search and Show Complete Exam Information and Perform Exam
void SearchExamListStudnet();

//-----------------------------//

//Others//

//Search Lesson with Code
int searchLessonATS(char Code[]);
//Search Teacher with ID
int searchTeacherATS(char ID[]);
//Search Student by ID
int searchStudentATS(char ID[]);
//Search Exam by Code
int searchExamATS(char Code[]);

//Sort Lessons Based on Code
void sortLesson();
//Sort Teachers Based on ID
void sortTeacher();
//Sort Students Based on ID
void sortStudent();

//Edit Information Lesson
void editLesson(int indexEditLesson);
//Edit Information Student
void editStudent(int indexEditStudent);
//Edit Information Teacher
void editTeacher(int indexEditTeacher);



int main()
{
	welcomePage();
}



//Functions Definitions//


//Welcome//

void welcomePage()
{

	system("color F6");

	cout << "\n";
	
	chrono::steady_clock::time_point tend0 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend0) {}
	cout << "             "; for (int i = 0; i < 93; i++)cout << char(178); cout << "\n";
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend1 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend1) {}
	cout << "             " << char(178) << "                                    Programming Project                                    " << char(178) << " \n";

	chrono::steady_clock::time_point tend3 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend3) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend4 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend4) {}
	cout << "             " << char(178) << "            Title:      Isfahan University Management and Exam System                      " << char(178) << " \n";

	chrono::steady_clock::time_point tend5 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend5) {}
	cout << "             " << char(178) << "            Lesson:     Programming Basics                                                 " << char(178) << " \n";

	chrono::steady_clock::time_point tend6 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend6) {}
	cout << "             " << char(178) << "            Teacher:    Dr.Mahvash                                                         " << char(178) << " \n";

	chrono::steady_clock::time_point tend7 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend7) {}
	cout << "             " << char(178) << "            Uniersity:  University of Isfahan (UI)                                         " << char(178) << " \n";

	chrono::steady_clock::time_point tend8 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend8) {}
	cout << "             " << char(178) << "            Student:    Matin Azami (4003623003)                                           " << char(178) << " \n";

	chrono::steady_clock::time_point tend9 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend9) {}
	cout << "             " << char(178) << "            Language:   C++                                                                " << char(178) << " \n";

	chrono::steady_clock::time_point tend10 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend10) {}
	cout << "             " << char(178) << "            Date:       23 February 2022                                                   " << char(178) << " \n";

	chrono::steady_clock::time_point tend11 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend11) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";
	cout << "             "; for (int i = 0; i < 93; i++)cout << char(178); cout << "\n";

	chrono::steady_clock::time_point tend13 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend13) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend14 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend14) {}
	cout << "             " << char(178) << "                       Isfahan University Management and Exam System                       " << char(178) << "\n";

	chrono::steady_clock::time_point tend15 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend15) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend17 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend17) {}
	cout << "             " << char(178) << "     Capabilities of Management and Exam System:                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend18 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend18) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend19 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend19) {}
	cout << "             " << char(178) << "                         1-Register Lessons with Complete Information by Admin             " << char(178) << "\n";

	chrono::steady_clock::time_point tend20 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend20) {}
	cout << "             " << char(178) << "                         2-Register Teachers with Complete Information by Admin            " << char(178) << "\n";

	chrono::steady_clock::time_point tend21 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend21) {}
	cout << "             " << char(178) << "                         3-Register Students with Complete Information by Admin            " << char(178) << "\n";

	chrono::steady_clock::time_point tend22 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend22) {}
	cout << "             " << char(178) << "                         4-List (Sorted) of Registered Lessons in System for Admin         " << char(178) << "\n";

	chrono::steady_clock::time_point tend23 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend23) {}
	cout << "             " << char(178) << "                         5-Search Lesson and Show All Its Information for Admin            " << char(178) << "\n";

	chrono::steady_clock::time_point tend24 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend24) {}
	cout << "             " << char(178) << "                         6-List (Sorted) of Registered Teachers in System for Admin        " << char(178) << "\n";

	chrono::steady_clock::time_point tend25 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend25) {}
	cout << "             " << char(178) << "                         7-Search Teacher and Show All Its Information for Admin           " << char(178) << "\n";

	chrono::steady_clock::time_point tend26 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend26) {}
	cout << "             " << char(178) << "                         8-List (Sorted) of Registered Students in System for Admin        " << char(178) << "\n";

	chrono::steady_clock::time_point tend27 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend27) {}
	cout << "             " << char(178) << "                         9-Search Student and Show All Its Information for Admin           " << char(178) << "\n";

	chrono::steady_clock::time_point tend28 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend28) {}
	cout << "             " << char(178) << "                         10-List of Created Exams in System                                " << char(178) << "\n";

	chrono::steady_clock::time_point tend29 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend29) {}
	cout << "             " << char(178) << "                         11-Search Exam and Show All Its Information and Result for Admin  " << char(178) << "\n";

	chrono::steady_clock::time_point tend30 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend30) {}
	cout << "             " << char(178) << "                         12-Edit Lesson Information by Admin                               " << char(178) << "\n";

	chrono::steady_clock::time_point tend31 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend31) {}
	cout << "             " << char(178) << "                         13-Edit Teacher Information by Admin                              " << char(178) << "\n";

	chrono::steady_clock::time_point tend32 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend32) {}
	cout << "             " << char(178) << "                         14-Edit Student Information by Admin                              " << char(178) << "\n";

	chrono::steady_clock::time_point tend33 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend33) {}
	cout << "             " << char(178) << "                         15-List of Teacher's Lessons in System for Teacher                " << char(178) << "\n";

	chrono::steady_clock::time_point tend34 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend34) {}
	cout << "             " << char(178) << "                         16-List of Teacher's Students in System for Teacher               " << char(178) << "\n";

	chrono::steady_clock::time_point tend35 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend35) {}
	cout << "             " << char(178) << "                         17-List of Teacher's Exams in System for Teacher                  " << char(178) << "\n";

	chrono::steady_clock::time_point tend36 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend36) {}
	cout << "             " << char(178) << "                         18-Search Exam and Show All Its Information and Result for Teacher" << char(178) << "\n";

	chrono::steady_clock::time_point tend37 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend37) {}
	cout << "             " << char(178) << "                         19-Create Test and Descriptive Exam by Teacher                    " << char(178) << "\n";

	chrono::steady_clock::time_point tend38 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend38) {}
	cout << "             " << char(178) << "                         20-List of Student's Lessons in System for Student                " << char(178) << "\n";

	chrono::steady_clock::time_point tend39 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend39) {}
	cout << "             " << char(178) << "                         21-List of Student's Teachers in System for Student               " << char(178) << "\n";

	chrono::steady_clock::time_point tend40 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend40) {}
	cout << "             " << char(178) << "                         22-List of Teacher's Exams in System for Student                  " << char(178) << "\n";

	chrono::steady_clock::time_point tend41 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend41) {}
	cout << "             " << char(178) << "                         23-Search Exam and Show Its Information and Result for Student    " << char(178) << "\n";

	chrono::steady_clock::time_point tend42 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend42) {}
	cout << "             " << char(178) << "                         24-Participating in Exam by Student                               " << char(178) << "\n";

	chrono::steady_clock::time_point tend43 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend43) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";
	cout << "             "; for (int i = 0; i < 93; i++)cout << char(178); cout << "\n";

	chrono::steady_clock::time_point tend45 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend45) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend46 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend46) {}
	cout << "             " << char(178) << "     System Usage Conditions:                                                              " << char(178) << "\n";

	chrono::steady_clock::time_point tend47 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend47) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend48 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend48) {}
	cout << "             " << char(178) << "           1-The Length of The Input Strings for The Lesson Fields Should Be Less than 18  " << char(178) << "\n";

	chrono::steady_clock::time_point tend49 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend49) {}
	cout << "             " << char(178) << "           2-The Length of The Input Strings for The Teacher Fields Should Be Less than 18 " << char(178) << "\n";

	chrono::steady_clock::time_point tend50 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend50) {}
	cout << "             " << char(178) << "           3-The Length of The Input Strings for The Student Fields Should Be Less than 18 " << char(178) << "\n";

	chrono::steady_clock::time_point tend51 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend51) {}
	cout << "             " << char(178) << "           4-The Lessons Code Start from 14000001                                          " << char(178) << "\n";

	chrono::steady_clock::time_point tend52 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend52) {}
	cout << "             " << char(178) << "           5-The Teacher ID Start from 41000001                                            " << char(178) << "\n";

	chrono::steady_clock::time_point tend53 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend53) {}
	cout << "             " << char(178) << "           6-The Students ID Start from 40000001                                           " << char(178) << "\n";

	chrono::steady_clock::time_point tend54 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend54) {}
	cout << "             " << char(178) << "           7-The Exam Code Start from 14100001                                             " << char(178) << "\n";

	chrono::steady_clock::time_point tend55 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend55) {}
	cout << "             " << char(178) << "           8-Maximum Number of Teacher and Students and Lessons: 1000000                   " << char(178) << "\n";

	chrono::steady_clock::time_point tend56 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend56) {}
	cout << "             " << char(178) << "           9-Maximum Number of Exams: 100000                                               " << char(178) << "\n";

	chrono::steady_clock::time_point tend57 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend57) {}
	cout << "             " << char(178) << "           10-Define only One Teacher for Each lesson                                      " << char(178) << "\n";

	chrono::steady_clock::time_point tend58 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend58) {}
	cout << "             " << char(178) << "           11-Enter 0 to Not Answer a test                                                 " << char(178) << "\n";

	chrono::steady_clock::time_point tend59 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend59) {}
	cout << "             " << char(178) << "           12-Maximum Test Questions for Exam: 50                                          " << char(178) << "\n";

	chrono::steady_clock::time_point tend60 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend60) {}
	cout << "             " << char(178) << "           13-Maximum Descriptive Questions for Exam: 10                                   " << char(178) << "\n";

	chrono::steady_clock::time_point tend61 = chrono::steady_clock::now() + chrono::seconds(1); while (chrono::steady_clock::now() < tend61) {}
	cout << "             " << char(178) << "                                                                                           " << char(178) << "\n";
	cout << "             "; for (int i = 0; i < 93; i++)cout << char(178); cout << "\n";

	cin.ignore();

	system("cls");

	startPage();

}

//-----------------------------//

//Start//

void startPage()
{
	system("color F0");

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "   University of Isfahan Management and Exam system    " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";



	cout << "                 -------------------------------------------   \n";
	cout << "                    UserName: ";
	char Username[30];
	cin >> Username;
	cout << "                    Password: ";
	char Password[30];
	cin >> Password;
	cout << "                 -------------------------------------------   ";
	cout << "\n\n";



	if (strcmp(Username, "admin") == 0)
	{
		if (strcmp(Password, "admin") == 0)
		{
			system("cls");
			adminPage();
		}

	}



	FILE* fpLoginTeacher;
	fpLoginTeacher = fopen("Teacher.dat", "rt");
	if (!fpLoginTeacher)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myTeacher[0], sizeof(Teacher), 1, fpLoginTeacher);
	int indexT = 0;
	while (!feof(fpLoginTeacher))
	{
		if (strcmp(Username, myTeacher[indexT].username) == 0)
		{
			if (strcmp(Password, myTeacher[indexT].password) == 0)
			{
				indexTeacher = indexT;

				FILE* fp2;
				fp2 = fopen("indexTeacher.dat", "wt");
				fseek(fp2, 0, SEEK_SET);
				fwrite(&indexTeacher, sizeof(int), 1, fp2);
				fclose(fp2);

				fclose(fpLoginTeacher);

				system("cls");
				teacherPage();
			}
			else
			{
				system("cls");
				cout << "\n";
				cout << "             ----------------------------------------------------- \n";
				cout << "             |       Username Does not Match this Password       | \n";
				cout << "             ----------------------------------------------------- \n";

				fclose(fpLoginTeacher);
				startPage();
			}
		}

		indexT++;
		fread(&myTeacher[indexT], sizeof(Teacher), 1, fpLoginTeacher);

	}
	fclose(fpLoginTeacher);




	FILE* fpLoginStudent;
	fpLoginStudent = fopen("Student.dat", "rt");
	if (!fpLoginStudent)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myStudent[0], sizeof(Student), 1, fpLoginStudent);
	int indexS = 0;
	while (!feof(fpLoginStudent))
	{
		if (strcmp(Username, myStudent[indexS].username) == 0)
		{
			if (strcmp(Password, myStudent[indexS].password) == 0)
			{
				indexStudent = indexS;

				FILE* fp2;
				fp2 = fopen("indexStudent.dat", "wt");
				fseek(fp2, 0, SEEK_SET);
				fwrite(&indexStudent, sizeof(int), 1, fp2);
				fclose(fp2);

				fclose(fpLoginStudent);

				system("cls");
				studentPage();

			}
			else
			{
				system("cls");
				cout << "\n";
				cout << "             ----------------------------------------------------- \n";
				cout << "             |       Username Does not Match this Password       | \n";
				cout << "             ----------------------------------------------------- \n";

				fclose(fpLoginStudent);
				startPage();
			}
		}

		indexS++;
		fread(&myStudent[indexS], sizeof(Student), 1, fpLoginStudent);

	}
	fclose(fpLoginStudent);


	system("cls");

	cout << "\n";
	cout << "            -------------------------------------------------------- \n";
	cout << "            |                 User is not Available                 | \n";
	cout << "            -------------------------------------------------------- \n";

	startPage();

}

//-----------------------------//

//Admin//

void adminPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                    Management Page                    " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";



	cout << "              1-Register               2-List               3-Logout \n\n";

	cout << "                Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "Register") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		registerAdminPage();
	}
	else if (strcmp(myMethod, "List") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listAdminPage();

	}
	else if (strcmp(myMethod, "Logout") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		startPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		adminPage();

	}

	system("cls");

}


void registerAdminPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                     Register Page                     " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";



	cout << "           1-Lesson         2-Teacher         3-Student         4-Back  \n\n";

	cout << "                Input Type: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "Lesson") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		LessonRegistionPage();

	}
	else if (strcmp(myMethod, "Teacher") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		teacherRegistionPage();
	}
	else if (strcmp(myMethod, "Student") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		studentRegistionPage();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "4") == 0)
	{
		system("cls");
		adminPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |             Please Input Correct Type...!             | \n";
		cout << "            --------------------------------------------------------- \n";

		registerAdminPage();

	}

	system("cls");

}

void LessonRegistionPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                Lesson Registration Page               " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	FILE* fpNLesson;
	fpNLesson = fopen("nLesson.dat", "rt");
	if (!fpNLesson)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fseek(fpNLesson, 0, SEEK_SET);
	fread(&nLesson, sizeof(int), 1, fpNLesson);
	fclose(fpNLesson);


	nLesson++;


	cout << "            " << "---------------------------------------------------------" << "\n";

	cout << "               Registration Lesson Name: ";
	cin.ignore();
	gets_s(myLesson[nLesson].name);

	cout << "               Registration Lesson Code: ";
	cin >> myLesson[nLesson].code;
	if (nLesson != 0)
	{
		while (searchLessonATS(myLesson[nLesson].code) >= 0)
		{
			cout << "              This Code Already Registered...! \n";

			cout << "               Registration Code Lesson: ";
			cin >> myLesson[nLesson].code;

		}
	}

	cout << "               Registration Lesson Minimum Mark: ";
	cin >> myLesson[nLesson].mark;

	cout << "            " << "--------------------------------------------------------- \n";

	cout << "\n            Input information is correct (y,n) ? ";

	char sure;
	cin >> sure;

	if (sure == 'y')
	{

		FILE* fpnLesson;
		fpnLesson = fopen("nLesson.dat", "wt");
		if (!fpnLesson)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fseek(fpnLesson, 0, SEEK_SET);
		fwrite(&nLesson, sizeof(int), 1, fpnLesson);
		fclose(fpnLesson);


		FILE* fpRegistLesson;
		fpRegistLesson = fopen("Lesson.dat", "at");
		if (!fpRegistLesson)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fwrite(&myLesson[nLesson], sizeof(Lesson), 1, fpRegistLesson);
		fclose(fpRegistLesson);

		cout << "\n";
		cout << "            -------------------------------------------------------- \n";
		cout << "               " << myLesson[nLesson].name << " / " << myLesson[nLesson].code << " added Succesfuli... :)            \n";
		cout << "               The number of Lessons registered in the system: " << nLesson + 1 << "\n";
		cout << "            -------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		sortLesson();

		system("cls");

		registerAdminPage();

	}
	else if (sure == 'n')
	{

		nLesson--;

		FILE* fpnLesson;
		fpnLesson = fopen("nLesson.dat", "wt");
		fseek(fpnLesson, 0, SEEK_SET);
		fwrite(&nLesson, sizeof(int), 1, fpnLesson);
		fclose(fpnLesson);

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |                  OK...! Regist again                  | \n";
		cout << "            --------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		system("cls");

		registerAdminPage();

	}

	system("cls");

}
void teacherRegistionPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "               Teacher Registration Page               " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	FILE* fpNTeacher;
	fpNTeacher = fopen("nTeacher.dat", "rt");
	if (!fpNTeacher)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fseek(fpNTeacher, 0, SEEK_SET);
	fread(&nTeacher, sizeof(int), 1, fpNTeacher);
	fclose(fpNTeacher);


	nTeacher++;


	cout << "            " << "---------------------------------------------------------" << "\n";

	cout << "               Registration Teacher FirstName: ";
	cin.ignore();
	gets_s(myTeacher[nTeacher].firstName);

	cout << "               Registration Teacher LastName: ";
	gets_s(myTeacher[nTeacher].lastName);

	cout << "               Registration Teacher ID: ";
	cin >> myTeacher[nTeacher].ID;
	if (nTeacher != 0)
	{
		while (searchTeacherATS(myTeacher[nTeacher].ID) >= 0)
		{
			cout << "              This ID Already Registered...! \n";

			cout << "               Registration Teacher ID: ";
			cin >> myTeacher[nTeacher].ID;

		}
	}

	cout << "               Registration Teacher Username: ";
	cin >> myTeacher[nTeacher].username;

	cout << "               Registration Teacher Password: ";
	cin >> myTeacher[nTeacher].password;

	cout << "               Registration number of Teacher's Lessons: ";
	cin >> myTeacher[nTeacher].nLesson;

	cout << "\n";
	for (int i = 0; i < myTeacher[nTeacher].nLesson; i++)
	{
		cout << "                      Registration Teacher's Lesson code" << i + 1 << ": ";
		cin >> myTeacher[nTeacher].lesson[i].code;

		while (searchLessonATS(myTeacher[nTeacher].lesson[i].code) == -1)
		{
			cout << "                     Invalid Lesson Code...!" << "\n";

			cout << "                      Registration Teacher's Lesson code" << i + 1 << ": ";
			cin >> myTeacher[nTeacher].lesson[i].code;
		}

		strcpy_s(myTeacher[nTeacher].lesson[i].name, myLesson[searchLessonATS(myTeacher[nTeacher].lesson[i].code)].name);

	}

	cout << "            " << "--------------------------------------------------------- \n";

	cout << "\n            Input information is correct (y,n) ? ";

	char sure;
	cin >> sure;

	if (sure == 'y')
	{

		FILE* fpnTeacher;
		fpnTeacher = fopen("nTeacher.dat", "wt");
		if (!fpnTeacher)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fseek(fpnTeacher, 0, SEEK_SET);
		fwrite(&nTeacher, sizeof(int), 1, fpnTeacher);
		fclose(fpnTeacher);


		FILE* fpRegistTeacher;
		fpRegistTeacher = fopen("Teacher.dat", "at");
		if (!fpRegistTeacher)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fwrite(&myTeacher[nTeacher], sizeof(Teacher), 1, fpRegistTeacher);
		fclose(fpRegistTeacher);

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "               " << myTeacher[nTeacher].firstName << " " << myTeacher[nTeacher].lastName << " added Succesfuli... :)            \n";
		cout << "               The number of Teachers registered in the system: " << nTeacher + 1 << "\n";
		cout << "            --------------------------------------------------------- \n";
		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		sortTeacher();

		system("cls");

		registerAdminPage();

	}
	else if (sure == 'n')
	{
		FILE* fpnTeacher;
		fpnTeacher = fopen("nTeacher.dat", "wt");
		if (!fpnTeacher)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fseek(fpnTeacher, 0, SEEK_SET);
		fwrite(&nTeacher, sizeof(int), 1, fpnTeacher);
		fclose(fpnTeacher);

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |                  OK...! Regist again                  | \n";
		cout << "            --------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		system("cls");

		registerAdminPage();
	}

	system("cls");

}
void studentRegistionPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "               Student Registration Page               " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	FILE* fpNStudent;
	fpNStudent = fopen("nStudent.dat", "rt");
	if (!fpNStudent)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fseek(fpNStudent, 0, SEEK_SET);
	fread(&nStudent, sizeof(int), 1, fpNStudent);
	fclose(fpNStudent);


	nStudent++;


	cout << "            " << "---------------------------------------------------------" << "\n";

	cout << "               Registration Student FirstName: ";
	cin.ignore();
	gets_s(myStudent[nStudent].firstName);

	cout << "               Registration Student LastName: ";
	gets_s(myStudent[nStudent].lastName);

	cout << "               Registration Student ID: ";
	cin >> myStudent[nStudent].ID;
	if (nStudent != 0)
	{
		while (searchStudentATS(myStudent[nStudent].ID) >= 0)
		{
			cout << "              This ID Already Registered...! \n";

			cout << "               Registration Student ID: ";
			cin >> myStudent[nStudent].ID;

		}
	}

	cout << "               Registration Student Username: ";
	cin >> myStudent[nStudent].username;

	cout << "               Registration Student Password: ";
	cin >> myStudent[nStudent].password;

	cout << "               Registration number of Student's Lessons: ";
	cin >> myStudent[nStudent].nLesson;

	cout << "\n";
	for (int i = 0; i < myStudent[nStudent].nLesson; i++)
	{
		cout << "                      Registion Student's Lesson code" << i + 1 << ": ";
		cin >> myStudent[nStudent].lesson[i].code;

		while (searchLessonATS(myStudent[nStudent].lesson[i].code) == -1)
		{
			cout << "                     Invalid Lesson Code...!" << "\n";

			cout << "                      Registion Student's Lesson code" << i + 1 << ": ";
			cin >> myStudent[nStudent].lesson[i].code;
		}

		strcpy_s(myStudent[nStudent].lesson[i].name, myLesson[searchLessonATS(myStudent[nStudent].lesson[i].code)].name);
	}

	cout << "            " << "--------------------------------------------------------- \n";


	cout << "\n            Input Information is Correct (y,n) ? ";

	char sure;
	cin >> sure;

	if (sure == 'y')
	{

		FILE* fpnStudent;
		fpnStudent = fopen("nStudent.dat", "wt");
		if (!fpnStudent)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fseek(fpnStudent, 0, SEEK_SET);
		fwrite(&nStudent, sizeof(int), 1, fpnStudent);
		fclose(fpnStudent);


		FILE* fpRegistStudent;
		fpRegistStudent = fopen("Student.dat", "at");
		if (!fpRegistStudent)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fwrite(&myStudent[nStudent], sizeof(Student), 1, fpRegistStudent);
		fclose(fpRegistStudent);


		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "               " << myStudent[nStudent].firstName << " " << myStudent[nStudent].lastName << " added Succesfuli... :)            \n";
		cout << "               The number of Students registered in the system: " << nStudent + 1 << "\n";
		cout << "            --------------------------------------------------------- \n";


		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		sortStudent();

		system("cls");

		registerAdminPage();

	}
	else if (sure == 'n')
	{

		nStudent--;

		FILE* fpnStudent;
		fpnStudent = fopen("nStudent.dat", "wt");
		fseek(fpnStudent, 0, SEEK_SET);
		fwrite(&nStudent, sizeof(int), 1, fpnStudent);
		fclose(fpnStudent);

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |                  OK...! Regist again                  | \n";
		cout << "            --------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		system("cls");

		registerAdminPage();
	}

	system("cls");

}


void listAdminPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                       Lists Page                      " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "     1-Lessons       2-Teachers       3-Students       4-Exams       5-Back \n\n";

	cout << "                Input Type: ";

	char Type[20];
	cin >> Type;

	if (strcmp(Type, "Lessons") == 0 || strcmp(Type, "1") == 0)
	{
		system("cls");
		lessonListAdmin();
	}
	else if (strcmp(Type, "Teachers") == 0 || strcmp(Type, "2") == 0)
	{
		system("cls");
		teacherListAdmin();
	}
	else if (strcmp(Type, "Students") == 0 || strcmp(Type, "3") == 0)
	{
		system("cls");
		studentListAdmin();
	}
	else if (strcmp(Type, "Exams") == 0 || strcmp(Type, "4") == 0)
	{
		system("cls");
		examListAdmin();
	}
	else if (strcmp(Type, "Back") == 0 || strcmp(Type, "5") == 0)
	{
		system("cls");
		adminPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Choose Correct Type... !            | \n";
		cout << "            --------------------------------------------------------- \n";

		listAdminPage();

	}

	system("cls");

}

void lessonListAdmin()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Lessons List                     " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "             1-Display                2-Search                3-Back \n\n";

	cout << "               Input Method: ";

	char myMethod[20];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		DisplayLessonListAdmin();
	}
	else if (strcmp(myMethod, "Search") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		SearchLessonListAdmin();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		listAdminPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n\n";

		lessonListAdmin();

	}

	system("cls");

}

void DisplayLessonListAdmin()
{

	cout << "\n";

	cout << "                       Lessons List \n\n";

	cout << "         "; for (int i = 0; i < 40; i++) cout << char(178); cout << "\n";

	cout << "         " << char(178) << "                                      " << char(178) << "\n";
	cout << "         " << char(178) << "      NameLesson          Code        " << char(178) << "\n";
	cout << "         " << char(178) << "                                      " << char(178) << "\n";

	cout << "         "; cout << char(178); for (int i = 0; i < 38; i++) cout << char(223); cout << char(178); cout << "\n";


	FILE* fpDisplayLesson;
	fpDisplayLesson = fopen("Lesson.dat", "rt");
	if (!fpDisplayLesson)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myLesson[0], sizeof(Lesson), 1, fpDisplayLesson);
	int indexL = 0;
	while (!feof(fpDisplayLesson))
	{

		cout << "         " << char(178) << "      " << myLesson[indexL].name;
		for (int i = 1; i <= (20 - strlen(myLesson[indexL].name)); i++) cout << " ";

		cout << myLesson[indexL].code;
		for (int i = 1; i <= (12 - strlen(myLesson[indexL].code)); i++) cout << " ";

		cout << char(178) << "\n";

		cout << "         " << char(178) << "--------------------------------------" << char(178) << "\n";


		indexL++;
		fread(&myLesson[indexL], sizeof(Lesson), 1, fpDisplayLesson);

	}
	fclose(fpDisplayLesson);


	cout << "         "; for (int i = 0; i < 40; i++) cout << char(178); cout << "\n\n";


	cout << "        1-MainPage        2-ListPage        3-Back \n\n";

	cout << "          Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		adminPage();

	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listAdminPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		lessonListAdmin();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		DisplayLessonListAdmin();
	}


	system("cls");

}
void SearchLessonListAdmin()
{

	cout << "\n";

	cout << "        ---------------------------------------\n";
	char Code[15];
	cout << "         Please Input Lesson Code: ";
	cin >> Code;
	cout << "        ---------------------------------------\n";

	system("cls");


	int indexSearchLesson = searchLessonATS(Code);


	if (indexSearchLesson >= 0)
	{

		cout << "\n";

		cout << "                                General Information \n\n";

		cout << "              "; for (int i = 0; i < 55; i++) cout << char(178); cout << "\n";
		cout << "              " << char(178) << "                                                     " << char(178) << "\n";

		cout << "              " << char(178) << "              " << "Lesson Name: " << myLesson[indexSearchLesson].name;
		for (int i = 1; i <= 26 - strlen(myLesson[indexSearchLesson].name); i++) cout << " "; cout << char(178) << "\n";

		cout << "              " << char(178) << "-----------------------------------------------------" << char(178) << "\n";

		cout << "              " << char(178) << "   " << "Lesson Code: " << myLesson[indexSearchLesson].code;
		for (int i = 1; i <= 17 - strlen(myLesson[indexSearchLesson].code); i++) cout << " ";

		cout << "Lowest Mark: " << setprecision(2) << fixed << showpoint << myLesson[indexSearchLesson].mark << "  " << char(178) << "\n";

		cout << "              " << char(178) << "                                                     " << char(178) << "\n";
		cout << "              "; for (int i = 0; i < 55; i++) cout << char(178);

		cout << "\n\n\n";

		cout << "                                   Students List \n\n";

		cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n";

		cout << "         " << char(178) << "                                                               " << char(178) << "\n";
		cout << "         " << char(178) << "        FirstName             LastName             ID          " << char(178) << "\n";
		cout << "         " << char(178) << "                                                               " << char(178) << "\n";

		cout << "         "; cout << char(178); for (int i = 0; i < 63; i++) cout << char(223); cout << char(178) << "\n";


		FILE* fpDisplayStudent;
		fpDisplayStudent = fopen("Student.dat", "rt");
		if (!fpDisplayStudent)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fread(&myStudent[0], sizeof(Student), 1, fpDisplayStudent);
		int indexS = 0;
		while (!feof(fpDisplayStudent))
		{
			for (int i = 0; i < myStudent[indexS].nLesson; i++)
			{
				if (strcmp(myLesson[indexSearchLesson].code, myStudent[indexS].lesson[i].code) == 0)
				{

					cout << "         " << char(178) << "        " << myStudent[indexS].firstName;
					for (int i = 1; i <= 22 - strlen(myStudent[indexS].firstName); i++) cout << " ";

					cout << myStudent[indexS].lastName;
					for (int i = 1; i <= 21 - strlen(myStudent[indexS].lastName); i++) cout << " ";

					cout << myStudent[indexS].ID;
					for (int i = 1; i <= 12 - strlen(myStudent[indexS].ID); i++) cout << " ";
					cout << char(178) << "\n";

					cout << "         " << char(178) << "---------------------------------------------------------------" << char(178) << "\n";

					break;

				}

			}

			indexS++;
			fread(&myStudent[indexS], sizeof(Student), 1, fpDisplayStudent);

		}
		fclose(fpDisplayStudent);


		cout << "         "; for (int i = 0; i < 65; i++) cout << char(178);

	}
	else
	{
		cout << "\n";
		cout << "            ----------------------------------------------------------- " << "\n";
		cout << "            |        Lesson with this Code is not Available...!       | " << "\n";
		cout << "            |           Please Enter Correct Lesson Code...           | " << "\n";
		cout << "            ----------------------------------------------------------- ";
	}


	cout << "\n\n";

	cout << "           1-Edit         2-MainPage          3-ListPage          4-Back \n\n";

	cout << "               Input Method: ";


	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "Edit") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		editLesson(indexSearchLesson);
	}
	else if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		adminPage();

	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		listAdminPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "4") == 0)
	{
		system("cls");
		lessonListAdmin();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		SearchLessonListAdmin();
	}

	system("cls");

}


void teacherListAdmin()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Teachers List                    " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "             1-Display                2-Search                3-Back \n\n";

	cout << "                Input Method: ";

	char myMethod[20];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		DisplayTeacherListAdmin();
	}
	else if (strcmp(myMethod, "Search") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		SearchTeacherListAdmin();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		listAdminPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		teacherListAdmin();

	}

	system("cls");

}

void DisplayTeacherListAdmin()
{

	cout << "\n";

	cout << "                                   Teachers List \n\n";

	cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n";

	cout << "         " << char(178) << "                                                               " << char(178) << "\n";
	cout << "         " << char(178) << "        FirstName             LastName             ID          " << char(178) << "\n";
	cout << "         " << char(178) << "                                                               " << char(178) << "\n";
	cout << "         ";
	cout << char(178); for (int i = 0; i < 63; i++) cout << char(223); cout << char(178) << "\n";


	FILE* fpDisplayTeacher;
	fpDisplayTeacher = fopen("Teacher.dat", "rt");
	if (!fpDisplayTeacher)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myTeacher[0], sizeof(Teacher), 1, fpDisplayTeacher);
	int indexT = 0;
	while (!feof(fpDisplayTeacher))
	{

		cout << "         " << char(178) << "        " << myTeacher[indexT].firstName;
		for (int i = 1; i <= 22 - strlen(myTeacher[indexT].firstName); i++) cout << " ";

		cout << myTeacher[indexT].lastName;
		for (int i = 1; i <= 21 - strlen(myTeacher[indexT].lastName); i++) cout << " ";

		cout << myTeacher[indexT].ID;
		for (int i = 1; i <= 12 - strlen(myTeacher[indexT].ID); i++) cout << " ";
		cout << char(178) << "\n";

		cout << "         " << char(178) << "---------------------------------------------------------------" << char(178) << "\n";


		indexT++;
		fread(&myTeacher[indexT], sizeof(Teacher), 1, fpDisplayTeacher);

	}
	fclose(fpDisplayTeacher);


	cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n\n";


	cout << "           1-MainPage                  2-ListPage                  3-Back \n\n";

	cout << "                 Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		adminPage();

	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listAdminPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		teacherListAdmin();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		DisplayTeacherListAdmin();
	}

	system("cls");

}
void SearchTeacherListAdmin()
{

	cout << "\n";

	cout << "        ---------------------------------------\n";
	char ID[15];
	cout << "         Please Input Teacher ID: ";
	cin >> ID;
	cout << "        ---------------------------------------\n";

	system("cls");

	int indexSearchTeacher = searchTeacherATS(ID);

	if (indexSearchTeacher >= 0)
	{
		cout << "\n\n";

		cout << "                          General Information Teacher \n\n";

		cout << "             "; for (int i = 0; i < 54; i++) cout << char(178); cout << "\n";
		cout << "             " << char(178) << "                                                    " << char(178) << "\n";


		cout << "             " << char(178) << "   Name: " << myTeacher[indexSearchTeacher].firstName << " " << myTeacher[indexSearchTeacher].lastName;
		for (int i = 0; i < 20 - strlen(myTeacher[indexSearchTeacher].firstName) - strlen(myTeacher[indexSearchTeacher].lastName); i++)cout << " ";

		cout << "ID: " << myTeacher[indexSearchTeacher].ID;
		for (int i = 0; i < 18 - strlen(myTeacher[indexSearchTeacher].ID); i++) cout << " ";
		cout << char(178) << "\n";

		cout << "             " << char(178) << "----------------------------------------------------" << char(178) << "\n";

		cout << "             " << char(178) << "   Username: " << myTeacher[indexSearchTeacher].username;
		for (int i = 0; i < 17 - strlen(myTeacher[indexSearchTeacher].username); i++) cout << " ";

		cout << "Password: " << myTeacher[indexSearchTeacher].password;
		for (int i = 0; i < 12 - strlen(myTeacher[indexSearchTeacher].password); i++) cout << " ";
		cout << char(178) << "\n";

		cout << "             " << char(178) << "                                                    " << char(178) << "\n";
		cout << "             "; for (int i = 0; i < 54; i++) cout << char(178); cout << "\n\n\n";



		cout << "                           Lesson Information Teacher \n\n";

		cout << "                    "; for (int i = 0; i < 40; i++) cout << char(178); cout << "\n";
		cout << "                    " << char(178) << "                                      " << char(178) << "\n";

		cout << "                    " << char(178) << "   LessonName              Code       " << char(178) << "\n";
		cout << "                    " << char(178) << "                                      " << char(178) << "\n";

		cout << "                    " << char(178); for (int i = 0; i < 38; i++) cout << char(223); cout << char(178) << "\n";


		for (int i = 0; i < myTeacher[indexSearchTeacher].nLesson; i++)
		{

			cout << "                    " << char(178) << "   " << myTeacher[indexSearchTeacher].lesson[i].name;
			for (int j = 1; j <= 24 - strlen(myTeacher[indexSearchTeacher].lesson[i].name); j++) cout << " ";

			cout << myTeacher[indexSearchTeacher].lesson[i].code;
			for (int j = 1; j <= 8 - strlen(myTeacher[indexSearchTeacher].lesson[i].code); j++) cout << " ";
			cout << "   " << char(178) << "\n";

			cout << "                    " << char(178) << "--------------------------------------" << char(178) << "\n";

		}

		cout << "                    "; for (int i = 0; i < 40; i++) cout << char(178);

	}
	else
	{
		cout << "\n";
		cout << "           ---------------------------------------------------------- " << "\n";
		cout << "           |       Teacher with this ID is not Available...!        | " << "\n";
		cout << "           |           Please Enter Correct Teacher ID...           | " << "\n";
		cout << "           ----------------------------------------------------------";
	}


	cout << "\n\n";


	cout << "         1-Edit        2-MainPage           3-ListPage           4-Back \n\n";

	cout << "                   Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "Edit") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		editTeacher(indexSearchTeacher);
	}
	else if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		adminPage();
	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		listAdminPage();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "4") == 0)
	{
		system("cls");
		teacherListAdmin();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		SearchTeacherListAdmin();
	}

	system("cls");

}


void studentListAdmin()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Students List                    " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "             1-Display                2-Search                3-Back \n\n";

	cout << "                Input Method: ";

	char Method[20];
	cin >> Method;

	if (strcmp(Method, "Display") == 0 || strcmp(Method, "1") == 0)
	{
		system("cls");
		DisplayStudentListAdmin();
	}
	else if (strcmp(Method, "Search") == 0 || strcmp(Method, "2") == 0)
	{
		system("cls");
		SearchStudentListAdmin();
	}
	else if (strcmp(Method, "Back") == 0 || strcmp(Method, "3") == 0)
	{
		system("cls");
		listAdminPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		studentListAdmin();

	}

	system("cls");

}

void DisplayStudentListAdmin()
{

	cout << "\n";

	cout << "                                   Students List \n\n";

	cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n";

	cout << "         " << char(178) << "                                                               " << char(178) << "\n";
	cout << "         " << char(178) << "        FirstName             LastName             ID          " << char(178) << "\n";
	cout << "         " << char(178) << "                                                               " << char(178) << "\n";

	cout << "         "; cout << char(178); for (int i = 0; i < 63; i++) cout << char(223); cout << char(178) << "\n";


	FILE* fpDisplayStudent;
	fpDisplayStudent = fopen("Student.dat", "rt");
	if (!fpDisplayStudent)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myStudent[0], sizeof(Student), 1, fpDisplayStudent);
	int indexS = 0;
	while (!feof(fpDisplayStudent))
	{

		cout << "         " << char(178) << "        " << myStudent[indexS].firstName;
		for (int i = 1; i <= 22 - strlen(myStudent[indexS].firstName); i++) cout << " ";

		cout << myStudent[indexS].lastName;
		for (int i = 1; i <= 21 - strlen(myStudent[indexS].lastName); i++) cout << " ";

		cout << myStudent[indexS].ID;
		for (int i = 1; i <= 12 - strlen(myStudent[indexS].ID); i++) cout << " ";
		cout << char(178) << "\n";

		cout << "         " << char(178) << "---------------------------------------------------------------" << char(178) << "\n";

		indexS++;
		fread(&myStudent[indexS], sizeof(Student), 1, fpDisplayStudent);

	}
	fclose(fpDisplayStudent);


	cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n\n";

	cout << "           1-MainPage                  2-ListPage                  3-Back \n\n";

	cout << "                 Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		adminPage();

	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listAdminPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		studentListAdmin();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		DisplayStudentListAdmin();
	}

	system("cls");

}
void SearchStudentListAdmin()
{

	cout << "\n";

	cout << "        ---------------------------------------\n";
	char ID[15];
	cout << "         Please Input Student ID: ";
	cin >> ID;
	cout << "        ---------------------------------------\n";


	system("cls");


	int indexSearchStudent = searchStudentATS(ID);

	if (indexSearchStudent >= 0)
	{

		cout << "\n";

		cout << "                          General Information Student \n\n";

		cout << "             "; for (int i = 0; i < 53; i++) cout << char(178); cout << "\n";
		cout << "             " << char(178) << "                                                   " << char(178) << "\n";

		cout << "             " << char(178) << "   Name: " << myStudent[indexSearchStudent].firstName << " " << myStudent[indexSearchStudent].lastName;
		for (int i = 0; i < 20 - strlen(myStudent[indexSearchStudent].firstName) - strlen(myStudent[indexSearchStudent].lastName); i++)cout << " ";

		cout << "ID: " << myStudent[indexSearchStudent].ID;
		for (int i = 0; i < 17 - strlen(myStudent[indexSearchStudent].ID); i++) cout << " ";
		cout << char(178) << "\n";

		cout << "             " << char(178) << "---------------------------------------------------" << char(178) << "\n";

		cout << "             " << char(178) << "   Username: " << myStudent[indexSearchStudent].username;
		for (int i = 0; i < 17 - strlen(myStudent[indexSearchStudent].username); i++)cout << " ";

		cout << "Password: " << myStudent[indexSearchStudent].password;
		for (int i = 0; i < 11 - strlen(myStudent[indexSearchStudent].password); i++) cout << " ";
		cout << char(178) << "\n";

		cout << "             " << char(178) << "                                                   " << char(178) << "\n";
		cout << "             "; for (int i = 0; i < 53; i++) cout << char(178); cout << "\n\n";



		cout << "                           Lesson Information Student \n\n";

		cout << "                    "; for (int i = 0; i < 40; i++) cout << char(178); cout << "\n";
		cout << "                    " << char(178) << "                                      " << char(178) << "\n";
		cout << "                    " << char(178) << "   LessonName              Code       " << char(178) << "\n";
		cout << "                    " << char(178) << "                                      " << char(178) << "\n";
		cout << "                    "; cout << char(178); for (int i = 0; i < 38; i++) cout << char(223); cout << char(178) << "\n";


		for (int i = 0; i < myStudent[indexSearchStudent].nLesson; i++)
		{
			cout << "                    " << char(178) << "   " << myStudent[indexSearchStudent].lesson[i].name;
			for (int j = 1; j <= 24 - strlen(myStudent[indexSearchStudent].lesson[i].name); j++) cout << " ";
			cout << myStudent[indexSearchStudent].lesson[i].code;
			for (int j = 1; j <= 8 - strlen(myStudent[indexSearchStudent].lesson[i].code); j++) cout << " ";
			cout << "   " << char(178) << "\n";
			cout << "                    " << char(178) << "--------------------------------------" << char(178) << "\n";
		}


		cout << "                    "; for (int i = 0; i < 40; i++) cout << char(178);


	}
	else
	{

		cout << "\n";
		cout << "           ---------------------------------------------------------- " << "\n";
		cout << "           |       Student with this ID is not Available...!        | " << "\n";
		cout << "           |           Please Enter Correct Student ID...           | " << "\n";
		cout << "           ----------------------------------------------------------";

	}

	cout << "\n\n";

	cout << "         1-Edit        2-MainPage           3-ListPage           4-Back \n\n";

	cout << "                   Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "Edit") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		editStudent(indexSearchStudent);
	}
	else if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		adminPage();
	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		listAdminPage();
	}
	else if (strcmp(myMethod, "back") == 0 || strcmp(myMethod, "4") == 0)
	{
		system("cls");
		studentListAdmin();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		SearchStudentListAdmin();
	}

	system("cls");

}


void examListAdmin()
{

	cout << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Exams List                       " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            ";
	for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "             1-Display                2-Search                3-Back \n\n";

	cout << "               Input Method: ";

	char myMethod[20];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		DisplayExamListAdmin();
	}
	else if (strcmp(myMethod, "Search") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		SearchExamListAdmin();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");

		listAdminPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		examListAdmin();

	}

	system("cls");

}

void DisplayExamListAdmin()
{

	cout << "\n";

	cout << "                                Exams List \n\n";

	cout << "         "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "         " << char(178) << "                                                       " << char(178) << "\n";
	cout << "         " << char(178) << "      ExamLesson          Code          Status         " << char(178) << "\n";
	cout << "         " << char(178) << "                                                       " << char(178) << "\n";

	cout << "         "; cout << char(178); for (int i = 0; i < 55; i++) cout << char(223); cout << char(178) << "\n";


	FILE* fpDisplayExam;
	fpDisplayExam = fopen("Exam.dat", "rt");
	if (!fpDisplayExam)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myExam[0], sizeof(Exam), 1, fpDisplayExam);
	int indexE = 0;
	while (!feof(fpDisplayExam))
	{

		cout << "         " << char(178) << "      ";
		cout << myExam[indexE].lesson;
		for (int i = 1; i <= (20 - strlen(myExam[indexE].lesson)); i++) cout << " ";

		cout << myExam[indexE].code;
		for (int i = 1; i <= (14 - strlen(myExam[indexE].code)); i++) cout << " ";

		time_t noww; noww = time(NULL);

		if ((difftime(myExam[indexE].examtime, noww) >= -(myExam[indexE].nMinuteExam * 60 + 30)) && (difftime(myExam[indexE].examtime, noww) <= 30)) cout << "On Performing";
		else if (difftime(myExam[indexE].examtime, noww) < -(myExam[indexE].nMinuteExam * 60 + 30)) cout << "Expired      ";
		else if (difftime(myExam[indexE].examtime, noww) > 30) cout << "Not Held     ";


		cout << "  " << char(178) << "\n";
		cout << "         " << char(178) << "-------------------------------------------------------" << char(178) << "\n";

		indexE++;
		fread(&myExam[indexE], sizeof(Exam), 1, fpDisplayExam);

	}
	fclose(fpDisplayExam);


	cout << "         "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n\n";


	cout << "          1-MainPage              2-ListPage              3-Back \n\n";

	cout << "            Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		adminPage();
	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listAdminPage();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		examListAdmin();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		DisplayExamListAdmin();
	}

	system("cls");

}
void SearchExamListAdmin()
{

	cout << "\n        ---------------------------------------\n";
	cout << "         Please Input Exam Code: ";
	char codeExam[20];
	cin >> codeExam;
	cout << "        ---------------------------------------\n";


	system("cls");


	int indexSearchExam = searchExamATS(codeExam);

	if (indexSearchExam >= 0)
	{
		time_t noww; noww = time(NULL);

		if ((difftime(myExam[indexSearchExam].examtime, noww) >= -(myExam[indexSearchExam].nMinuteExam * 60 + 30)) && (difftime(myExam[indexSearchExam].examtime, noww) <= 30))
		{
			cout << "\n";

			cout << "                      -----------------------------------   \n   ";
			cout << "                   |                                 |   \n   ";
			cout << "                   |      Exam On Performing...      |   \n   ";
			cout << "                   |                                 |   \n   ";
			cout << "                   -----------------------------------   \n\n  ";



			cout << "                          General Information Exam \n\n";

			cout << "             "; for (int i = 0; i < 53; i++) cout << char(178); cout << "\n";
			cout << "             " << char(178) << "                                                   " << char(178) << "\n";



			cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
			for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

			int iL = searchLessonATS(myExam[indexSearchExam].lesson);
			if (iL >= 0)
			{
				cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
				for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

			}

			cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
			for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

			int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
			if (iT >= 0)
			{

				cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
				for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

			}

			cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
			for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";

			cout << "             " << char(178) << "   Number of DescriptiveQuestions: " << myExam[indexSearchExam].nDescriptive;
			int nk2 = 0, temp12 = myExam[indexSearchExam].nDescriptive;
			while (temp12 != 0)
			{
				nk2++; temp12 /= 10;
			}
			for (int i = 1; i <= 16 - nk2; i++) cout << " "; cout << char(178) << "\n";

			cout << "             " << char(178) << "   Number of TestQuestions: " << myExam[indexSearchExam].nTest;
			int nk = 0, temp1 = myExam[indexSearchExam].nTest;
			while (temp1 != 0)
			{
				nk++; temp1 /= 10;
			}
			for (int i = 1; i <= 24 - nk; i++) cout << " "; cout << char(178) << "\n";

			char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
			cout << "                 Date and Time Exam: " << ExamTime;

			cout << "             " << char(178) << "   Time Exam: " << myExam[indexSearchExam].nMinuteExam << " Minute";
			int mk = 0, temp11 = myExam[indexSearchExam].nMinuteExam;
			while (temp11 != 0)
			{
				mk++; temp11 /= 10;
			}
			for (int i = 1; i <= 30 - mk; i++) cout << " "; cout << char(178) << "\n";


			cout << "             " << char(178) << "                                                   " << char(178) << "\n";
			cout << "             "; for (int i = 0; i < 53; i++) cout << char(178);

		}
		else if (difftime(myExam[indexSearchExam].examtime, noww) < -(myExam[indexSearchExam].nMinuteExam * 60 + 30))
		{
			cout << "\n";

			cout << "                       -----------------------------------   \n   ";
			cout << "                    |                                 |   \n   ";
			cout << "                    |         Exam Expired...         |   \n   ";
			cout << "                    |                                 |   \n   ";
			cout << "                    -----------------------------------   \n\n  ";


			cout << "                          General Information Exam \n\n";


			cout << "             "; for (int i = 0; i < 53; i++) cout << char(178); cout << "\n";
			cout << "             " << char(178) << "                                                   " << char(178) << "\n";


			cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
			for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

			int iL = searchLessonATS(myExam[indexSearchExam].lesson);
			if (iL >= 0)
			{

				cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
				for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

			}

			cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
			for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

			int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
			if (iT >= 0)
			{

				cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
				for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

			}

			cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
			for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";

			cout << "             " << char(178) << "   Number of DescriptiveQuestions: " << myExam[indexSearchExam].nDescriptive;
			int nk2 = 0, temp12 = myExam[indexSearchExam].nDescriptive;
			while (temp12 != 0)
			{
				nk2++; temp12 /= 10;
			}
			for (int i = 1; i <= 16 - nk2; i++) cout << " "; cout << char(178) << "\n";

			cout << "             " << char(178) << "   Number of TestQuestion: " << myExam[indexSearchExam].nTest;
			int nk = 0, temp1 = myExam[indexSearchExam].nTest;
			while (temp1 != 0)
			{
				nk++; temp1 /= 10;
			}
			for (int i = 1; i <= 24 - nk; i++) cout << " "; cout << char(178) << "\n";

			char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
			cout << "             " << "    Date and Time Exam: " << ExamTime;

			cout << "             " << char(178) << "   Time Exam: " << myExam[indexSearchExam].nMinuteExam << " Minute";
			int mk = 0, temp11 = myExam[indexSearchExam].nMinuteExam;
			while (temp11 != 0)
			{
				mk++; temp11 /= 10;
			}


			for (int i = 1; i <= 30 - mk; i++) cout << " "; cout << char(178) << "\n";
			cout << "             " << char(178) << "                                                   " << char(178) << "\n";
			cout << "             ";
			for (int i = 0; i < 53; i++) cout << char(178);
			cout << "\n\n\n";


			cout << "                                  Marks List \n\n";
			cout << "             ";
			for (int i = 0; i < 54; i++) cout << char(178);
			cout << "\n";
			cout << "             " << char(178) << "                                                    " << char(178) << "\n";
			cout << "             " << char(178) << "     Name                     ID             Mark   " << char(178) << "\n";
			cout << "             " << char(178) << "                                                    " << char(178) << "\n";
			cout << "             ";
			cout << char(178);
			for (int i = 0; i < 52; i++) cout << char(223);
			cout << char(178);
			cout << "\n";


			FILE* fpDisplayStudent;
			fpDisplayStudent = fopen("Student.dat", "rt");
			if (!fpDisplayStudent)
			{
				cout << "            -------------------------------------------------------- \n";
				cout << "            |              File Was Not Available...!              | \n";
				cout << "            |                    Try Again...!                     | \n";
				cout << "            -------------------------------------------------------- \n";
				exit(0);
			}
			fread(&myStudent[0], sizeof(Student), 1, fpDisplayStudent);
			int indexS = 0;
			while (!feof(fpDisplayStudent))
			{
				for (int i = 0; i <= myStudent[indexS].nExam; i++)
				{
					if (strcmp(myExam[indexSearchExam].code, myStudent[indexS].Exam[i].codeExam) == 0)
					{

						cout << "                   " << myStudent[indexS].firstName << " " << myStudent[indexS].lastName;
						for (int i = 1; i <= 24 - strlen(myStudent[indexS].firstName) - strlen(myStudent[indexS].lastName); i++) cout << " ";
						cout << myStudent[indexS].ID;
						for (int i = 1; i <= 15 - strlen(myStudent[indexS].ID); i++) cout << " ";
						cout << setprecision(2) << fixed << showpoint << myStudent[indexS].Exam[i].mark * 100;
						cout << "\n             " << char(178) << "----------------------------------------------------" << char(178) << "\n";

					}
				}

				indexS++;
				fread(&myStudent[indexS], sizeof(Student), 1, fpDisplayStudent);

			}
			fclose(fpDisplayStudent);


			cout << "             ";
			for (int i = 0; i < 54; i++) cout << char(178);

		}
		else if (difftime(myExam[indexSearchExam].examtime, noww) > 30)
		{
			cout << "\n";

			cout << "                      -----------------------------------   \n   ";
			cout << "                   |                                 |   \n   ";
			cout << "                   |         Exam Not Held...        |   \n   ";
			cout << "                   |                                 |   \n   ";
			cout << "                   -----------------------------------   \n\n  ";



			cout << "                          General Information Exam \n\n";


			cout << "             "; for (int i = 0; i < 53; i++) cout << char(178); cout << "\n";
			cout << "             " << char(178) << "                                                   " << char(178) << "\n";


			cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
			for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

			int iL = searchLessonATS(myExam[indexSearchExam].lesson);
			if (iL >= 0)
			{

				cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
				for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

			}

			cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
			for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

			int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
			if (iT >= 0)
			{

				cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
				for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

			}

			cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
			for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";

			cout << "             " << char(178) << "   Number of DescriptiveQuestions: " << myExam[indexSearchExam].nDescriptive;
			int nk2 = 0, temp12 = myExam[indexSearchExam].nDescriptive;
			while (temp12 != 0)
			{
				nk2++; temp12 /= 10;
			}
			for (int i = 1; i <= 16 - nk2; i++) cout << " "; cout << char(178) << "\n";

			cout << "             " << char(178) << "   Number of TestQuestion: " << myExam[indexSearchExam].nTest;
			int nk = 0, temp1 = myExam[indexSearchExam].nTest;
			while (temp1 != 0)
			{
				nk++; temp1 /= 10;
			}
			for (int i = 1; i <= 24 - nk; i++) cout << " "; cout << char(178) << "\n";

			char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
			cout << "                 Date and Time Exam: " << ExamTime;

			cout << "             " << char(178) << "   Time Exam: " << myExam[indexSearchExam].nMinuteExam << " Minute";
			int mk = 0, temp11 = myExam[indexSearchExam].nMinuteExam;
			while (temp11 != 0)
			{
				mk++; temp11 /= 10;
			}
			for (int i = 1; i <= 30 - mk; i++) cout << " "; cout << char(178) << "\n";


			cout << "             " << char(178) << "                                                   " << char(178) << "\n";
			cout << "             ";
			for (int i = 0; i < 53; i++) cout << char(178);

		}
	}
	else
	{
		cout << "\n";
		cout << "           ------------------------------------------------------- " << "\n";
		cout << "           |       Exam with this Code is not Available...!      | " << "\n";
		cout << "           |           Please Enter Correct Exam Code...         | " << "\n";
		cout << "           ------------------------------------------------------- ";
	}


	cout << "\n\n";

	cout << "              1-MainPage            2-ListPage            3-Back \n\n";

	cout << "                Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		adminPage();
	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listAdminPage();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		examListAdmin();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		SearchExamListAdmin();
	}

	system("cls");


}

//-----------------------------//

//Teacher//

void teacherPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                      Teacher Page                     " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "              1-List                 2-Exam                 3-Logout \n\n";

	cout << "                Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "List") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		listTeacherPage();
	}
	else if (strcmp(myMethod, "Exam") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		examTeacherPage();
	}
	else if (strcmp(myMethod, "Logout") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		startPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		teacherPage();

	}

	system("cls");

}


void listTeacherPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                       Lists Page                      " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "              1-Lessons               2-Students              3-Back \n\n";

	cout << "                Input Type: ";

	char myType[20];
	cin >> myType;


	if (strcmp(myType, "Lessons") == 0 || strcmp(myType, "1") == 0)
	{
		system("cls");
		lessonListTeacher();
	}
	else if (strcmp(myType, "Students") == 0 || strcmp(myType, "2") == 0)
	{
		system("cls");
		studentListTeacher();

	}
	else if (strcmp(myType, "Back") == 0 || strcmp(myType, "3") == 0)
	{
		system("cls");
		teacherPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Choose Correct Type... !            | \n";
		cout << "            --------------------------------------------------------- \n";

		listTeacherPage();

	}

	system("cls");

}

void lessonListTeacher()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Lessons List                     " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "              1-Display                2-Search               3-Back \n\n";

	cout << "                Input Method: ";

	char myMethod[20];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		DisplayLessonListTeacher();
	}
	else if (strcmp(myMethod, "Search") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		SearchLessonListTeacher();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		listTeacherPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		lessonListTeacher();

	}

	system("cls");

}

void DisplayLessonListTeacher()
{

	cout << "\n";

	cout << "                       Lessons List \n\n";

	cout << "         "; for (int i = 0; i < 40; i++) cout << char(178); cout << "\n";

	cout << "         " << char(178) << "                                      " << char(178) << "\n";
	cout << "         " << char(178) << "      NameLesson          Code        " << char(178) << "\n";
	cout << "         " << char(178) << "                                      " << char(178) << "\n";

	cout << "         "; cout << char(178); for (int i = 0; i < 38; i++) cout << char(223); cout << char(178); cout << "\n";


	FILE* fpDisplayLessonTeacher;
	fpDisplayLessonTeacher = fopen("Teacher.dat", "rt");
	fread(&myTeacher[0], sizeof(Teacher), 1, fpDisplayLessonTeacher);
	int indexT = 0;
	while (!feof(fpDisplayLessonTeacher))
	{
		if (indexT == indexTeacher) break;

		indexT++;
		fread(&myTeacher[indexT], sizeof(Teacher), 1, fpDisplayLessonTeacher);

	}
	fclose(fpDisplayLessonTeacher);


	for (int i = 0; i < myTeacher[indexTeacher].nLesson; i++)
	{

		cout << "         " << char(178) << "      " << myTeacher[indexTeacher].lesson[i].name;
		for (int j = 1; j <= 20 - strlen(myTeacher[indexTeacher].lesson[i].name); j++) cout << " ";

		cout << myTeacher[indexTeacher].lesson[i].code;
		for (int j = 1; j <= (12 - strlen(myTeacher[indexTeacher].lesson[i].code)); j++) cout << " ";
		cout << char(178) << "\n";

		cout << "         " << char(178) << "--------------------------------------" << char(178) << "\n";

	}


	cout << "         "; for (int i = 0; i < 40; i++) cout << char(178); cout << "\n\n";


	cout << "        1-MainPage        2-ListPage        3-Back \n\n";

	cout << "          Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		teacherPage();
	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listTeacherPage();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		lessonListTeacher();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		DisplayLessonListTeacher();

	}

	system("cls");

}
void SearchLessonListTeacher()
{

	cout << "\n";
	cout << "        ---------------------------------------\n";
	char Code[15];
	cout << "         Please Input Lesson Code: ";
	cin >> Code;
	cout << "        ---------------------------------------\n";

	system("cls");


	int indexSearchLesson = searchLessonATS(Code);


	if (indexSearchLesson >= 0)
	{
		int indexTeacherLesson;
		for (indexTeacherLesson = 0; indexTeacherLesson < myTeacher[indexTeacher].nLesson; indexTeacherLesson++)
			if (strcmp(myLesson[indexSearchLesson].code, myTeacher[indexTeacher].lesson[indexTeacherLesson].code) == 0)
			{
				cout << "\n";

				cout << "                                General Information \n\n";

				cout << "              "; for (int i = 0; i < 55; i++) cout << char(178); cout << "\n";
				cout << "              " << char(178) << "                                                     " << char(178) << "\n";

				cout << "              " << char(178) << "              " << "Lesson Name: " << myLesson[indexSearchLesson].name;
				for (int i = 1; i <= 26 - strlen(myLesson[indexSearchLesson].name); i++) cout << " "; cout << char(178) << "\n";

				cout << "              " << char(178) << "-----------------------------------------------------" << char(178) << "\n";

				cout << "              " << char(178) << "   " << "Lesson Code: " << myLesson[indexSearchLesson].code;
				for (int i = 1; i <= 17 - strlen(myLesson[indexSearchLesson].code); i++) cout << " ";

				cout << "Lowest Mark: " << setprecision(2) << fixed << showpoint << myLesson[indexSearchLesson].mark << "  " << char(178) << "\n";

				cout << "              " << char(178) << "                                                     " << char(178) << "\n";
				cout << "              "; for (int i = 0; i < 55; i++) cout << char(178);

				cout << "\n\n\n";

				cout << "                                   Students List \n\n";

				cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n";

				cout << "         " << char(178) << "                                                               " << char(178) << "\n";
				cout << "         " << char(178) << "        FirstName             LastName             ID          " << char(178) << "\n";
				cout << "         " << char(178) << "                                                               " << char(178) << "\n";

				cout << "         "; cout << char(178); for (int i = 0; i < 63; i++) cout << char(223); cout << char(178) << "\n";


				FILE* fpDisplayStudent;
				fpDisplayStudent = fopen("Student.dat", "rt");
				if (!fpDisplayStudent)
				{
					cout << "            -------------------------------------------------------- \n";
					cout << "            |              File Was Not Available...!              | \n";
					cout << "            |                    Try Again...!                     | \n";
					cout << "            -------------------------------------------------------- \n";
					exit(0);
				}
				fread(&myStudent[0], sizeof(Student), 1, fpDisplayStudent);
				int indexS = 0;
				while (!feof(fpDisplayStudent))
				{
					for (int i = 0; i < myStudent[indexS].nLesson; i++)
					{
						if (strcmp(myLesson[indexSearchLesson].code, myStudent[indexS].lesson[i].code) == 0)
						{

							cout << "         " << char(178) << "        " << myStudent[indexS].firstName;
							for (int i = 1; i <= 22 - strlen(myStudent[indexS].firstName); i++) cout << " ";

							cout << myStudent[indexS].lastName;
							for (int i = 1; i <= 21 - strlen(myStudent[indexS].lastName); i++) cout << " ";

							cout << myStudent[indexS].ID;
							for (int i = 1; i <= 12 - strlen(myStudent[indexS].ID); i++) cout << " ";
							cout << char(178) << "\n";

							cout << "         " << char(178) << "---------------------------------------------------------------" << char(178) << "\n";

							break;

						}

					}

					indexS++;
					fread(&myStudent[indexS], sizeof(Student), 1, fpDisplayStudent);

				}
				fclose(fpDisplayStudent);


				cout << "         "; for (int i = 0; i < 65; i++) cout << char(178);

				break;
			}

		
		if (indexTeacherLesson == myTeacher[indexTeacher].nLesson)
		{
			cout << "\n";
			cout << "              ------------------------------------------------------- " << "\n";
			cout << "              |      You are not Allowed to access this Lesson      | " << "\n";
			cout << "              |           Please Enter New Lesson Code...           | " << "\n";
			cout << "              ------------------------------------------------------- ";
		}

	}
	else
	{
		cout << "\n";
		cout << "            ----------------------------------------------------------- " << "\n";
		cout << "            |        Lesson with this Code is not Available...!       | " << "\n";
		cout << "            |           Please Enter Correct Lesson Code...           | " << "\n";
		cout << "            ----------------------------------------------------------- ";
	}

	cout << "\n\n";

	cout << "           1-MainPage                  2-ListPage                  3-Back \n\n";

	cout << "               Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		teacherPage();
	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listTeacherPage();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		lessonListTeacher();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		SearchLessonListTeacher();
	}

	system("cls");

}


void studentListTeacher()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Students List                    " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "                        1-Display                  2-Back \n\n";

	cout << "                Input Method: ";

	char myMethod[20];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		DisplayStudentListTeacher();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listTeacherPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		studentListTeacher();

	}

	system("cls");

}

void DisplayStudentListTeacher()
{

	cout << "\n";

	cout << "                                   Students List \n\n";

	cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n";

	cout << "         " << char(178) << "                                                               " << char(178) << "\n";
	cout << "         " << char(178) << "        FirstName             LastName             ID          " << char(178) << "\n";
	cout << "         " << char(178) << "                                                               " << char(178) << "\n";

	cout << "         "; cout << char(178); for (int i = 0; i < 63; i++) cout << char(223); cout << char(178) << "\n";


	FILE* fpDisplayStudentTeacher;
	fpDisplayStudentTeacher = fopen("Student.dat", "rt");
	if (!fpDisplayStudentTeacher)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myStudent[0], sizeof(Student), 1, fpDisplayStudentTeacher);
	int indexS = 0;
	while (!feof(fpDisplayStudentTeacher))
	{
		bool brk = false;
		for (int j = 0; j < myStudent[indexS].nLesson; j++)
		{
			for (int i = 0; i < myTeacher[indexTeacher].nLesson; i++)
			{
				if (strcmp(myStudent[indexS].lesson[j].code, myTeacher[indexTeacher].lesson[i].code) == 0)
				{

					cout << "         " << char(178) << "        " << myStudent[indexS].firstName;
					for (int i = 1; i <= 22 - strlen(myStudent[indexS].firstName); i++) cout << " ";

					cout << myStudent[indexS].lastName;
					for (int i = 1; i <= 21 - strlen(myStudent[indexS].lastName); i++) cout << " ";

					cout << myStudent[indexS].ID;
					for (int i = 1; i <= 12 - strlen(myStudent[indexS].ID); i++) cout << " ";
					cout << char(178) << "\n";

					cout << "         " << char(178) << "---------------------------------------------------------------" << char(178) << "\n";

					brk = true;

				}
				if (brk) break;
			}
			if (brk) break;
		}

		indexS++;
		fread(&myStudent[indexS], sizeof(Student), 1, fpDisplayStudentTeacher);

	}
	fclose(fpDisplayStudentTeacher);


	cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n\n";


	cout << "          1-MainPage                  2-ListPage                  3-Back \n\n";

	cout << "            Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		teacherPage();

	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listTeacherPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		studentListTeacher();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		DisplayStudentListTeacher();

	}

	system("cls");

}


void examTeacherPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                      Exams Page                       " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            ";
	for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "              1-List                2-MakeExam                3-Back \n\n";

	cout << "                Input Method: ";

	char Method[20];
	cin >> Method;

	if (strcmp(Method, "List") == 0 || strcmp(Method, "1") == 0)
	{
		system("cls");
		examListTeacher();
	}
	else if (strcmp(Method, "Make") == 0 || strcmp(Method, "2") == 0)
	{
		system("cls");
		makeExam();
	}
	else if (strcmp(Method, "Back") == 0 || strcmp(Method, "3") == 0)
	{
		system("cls");
		teacherPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |           Please Choose Correct Method... !           | \n";
		cout << "            --------------------------------------------------------- \n";

		examTeacherPage();

	}

	system("cls");

}

void examListTeacher()
{

	cout << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Exams List                       " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            ";
	for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "              1-Display                2-Search               3-Back \n\n";

	cout << "                Input Method: ";

	char Module[20];
	cin >> Module;

	if (strcmp(Module, "Display") == 0 || strcmp(Module, "1") == 0)
	{
		system("cls");
		DisplayExamListTeacher();
	}
	else if (strcmp(Module, "Search") == 0 || strcmp(Module, "2") == 0)
	{
		system("cls");
		SearchExamListTeacher();
	}
	else if (strcmp(Module, "Back") == 0 || strcmp(Module, "3") == 0)
	{
		system("cls");
		examTeacherPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		examListTeacher();

	}

	system("cls");
}

void DisplayExamListTeacher()
{

	cout << "\n";

	cout << "                                Exams List \n\n";

	cout << "         "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "         " << char(178) << "                                                       " << char(178) << "\n";
	cout << "         " << char(178) << "      ExamLesson          Code          Status         " << char(178) << "\n";
	cout << "         " << char(178) << "                                                       " << char(178) << "\n";

	cout << "         "; cout << char(178); for (int i = 0; i < 55; i++) cout << char(223); cout << char(178) << "\n";


	FILE* DisplayExamTeacher;
	DisplayExamTeacher = fopen("Teacher.dat", "rt");
	fread(&myTeacher[0], sizeof(Teacher), 1, DisplayExamTeacher);
	int indexT = 0;
	while (!feof(DisplayExamTeacher))
	{
		if (indexTeacher == indexT) break;

		indexT++;
		fread(&myTeacher[indexT], sizeof(Teacher), 1, DisplayExamTeacher);

	}
	fclose(DisplayExamTeacher);


	FILE* fpDisplayExam;
	fpDisplayExam = fopen("Exam.dat", "rt");
	if (!fpDisplayExam)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myExam[0], sizeof(Exam), 1, fpDisplayExam);
	int indexE = 0;
	while (!feof(fpDisplayExam))
	{

		if (strcmp(myExam[indexE].IDTeacher, myTeacher[indexTeacher].ID) == 0)
		{

			cout << "         " << char(178) << "      ";

			cout << myExam[indexE].lesson;
			for (int i = 1; i <= (20 - strlen(myExam[indexE].lesson)); i++) cout << " ";

			cout << myExam[indexE].code;
			for (int i = 1; i <= (14 - strlen(myExam[indexE].code)); i++) cout << " ";

			time_t noww; noww = time(NULL);
			if ((difftime(myExam[indexE].examtime, noww) >= -(myExam[indexE].nMinuteExam * 60 + 30)) && (difftime(myExam[indexE].examtime, noww) <= 30)) cout << "On Performing";
			else if (difftime(myExam[indexE].examtime, noww) < -(myExam[indexE].nMinuteExam * 60 + 30)) cout << "Expired      ";
			else if (difftime(myExam[indexE].examtime, noww) > 30) cout << "Not Held     ";

			cout << "  " << char(178) << "\n";

			cout << "         " << char(178) << "-------------------------------------------------------" << char(178) << "\n";
		}


		indexE++;
		fread(&myExam[indexE], sizeof(Exam), 1, fpDisplayExam);

	}
	fclose(fpDisplayExam);


	cout << "         "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n\n";


	cout << "           1-MainPage              2-ListPage              3-Back \n\n";

	cout << "             Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		teacherPage();

	}
	if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listTeacherPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		examListTeacher();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		DisplayExamListTeacher();

	}

	system("cls");

}
void SearchExamListTeacher()
{

	cout << "\n";
	cout << "        ---------------------------------------\n";
	cout << "         Please Input Exam Code: ";
	char codeExam[20];
	cin >> codeExam;
	cout << "        ---------------------------------------\n";

	system("cls");

	int indexSearchExam = searchExamATS(codeExam);

	if (indexSearchExam >= 0)
	{
		if (strcmp(myTeacher[indexTeacher].ID, myExam[indexSearchExam].IDTeacher) == 0)
		{

			time_t noww; noww = time(NULL);

			if ((difftime(myExam[indexSearchExam].examtime, noww) >= -(myExam[indexSearchExam].nMinuteExam * 60 + 30)) && (difftime(myExam[indexSearchExam].examtime, noww) <= 30))
			{

				cout << "\n";
				cout << "                      -----------------------------------   \n   ";
				cout << "                   |                                 |   \n   ";
				cout << "                   |      Exam On Performing...      |   \n   ";
				cout << "                   |                                 |   \n   ";
				cout << "                   -----------------------------------   \n\n  ";



				cout << "                          General Information Exam \n\n";
				cout << "             ";
				for (int i = 0; i < 53; i++) cout << char(178);
				cout << "\n";
				cout << "             " << char(178) << "                                                   " << char(178) << "\n";



				cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
				for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

				int iL = searchLessonATS(myExam[indexSearchExam].lesson);
				if (iL >= 0)
				{

					cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
					for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

				}

				cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
				for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

				int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
				if (iT >= 0)
				{

					cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
					for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

				}

				cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
				for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";


				cout << "             " << char(178) << "   Number of DescriptiveQuestions: " << myExam[indexSearchExam].nDescriptive;
				int nk2 = 0, temp12 = myExam[indexSearchExam].nDescriptive;
				while (temp12 != 0)
				{
					nk2++; temp12 /= 10;
				}
				for (int i = 1; i <= 16 - nk2; i++) cout << " "; cout << char(178) << "\n";

				cout << "             " << char(178) << "   Number of TestQuestion: " << myExam[indexSearchExam].nTest;
				int nk = 0, temp1 = myExam[indexSearchExam].nTest;
				while (temp1 != 0)
				{
					nk++; temp1 /= 10;
				}
				for (int i = 1; i <= 24 - nk; i++) cout << " "; cout << char(178) << "\n";

				char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
				cout << "                 Date and Time Exam: " << ExamTime;

				cout << "             " << char(178) << "   Time Exam: " << myExam[indexSearchExam].nMinuteExam << " Minute";
				int mk = 0, temp11 = myExam[indexSearchExam].nMinuteExam;
				while (temp11 != 0)
				{
					mk++; temp11 /= 10;
				}
				for (int i = 1; i <= 30 - mk; i++) cout << " "; cout << char(178) << "\n";


				cout << "             " << char(178) << "                                                   " << char(178) << "\n";
				cout << "             ";
				for (int i = 0; i < 53; i++) cout << char(178);

			}
			else if (difftime(myExam[indexSearchExam].examtime, noww) < -(myExam[indexSearchExam].nMinuteExam * 60 + 30))
			{

				cout << "\n";
				cout << "                       -----------------------------------   \n   ";
				cout << "                    |                                 |   \n   ";
				cout << "                    |         Exam Expired...         |   \n   ";
				cout << "                    |                                 |   \n   ";
				cout << "                    -----------------------------------   \n\n  ";


				cout << "                          General Information Exam \n\n";


				cout << "             ";
				for (int i = 0; i < 53; i++) cout << char(178);
				cout << "\n";
				cout << "             " << char(178) << "                                                   " << char(178) << "\n";


				cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
				for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

				int iL = searchLessonATS(myExam[indexSearchExam].lesson);
				if (iL >= 0)
				{

					cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
					for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

				}

				cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
				for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

				int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
				if (iT >= 0)
				{

					cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
					for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

				}

				cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
				for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";


				cout << "             " << char(178) << "   Number of DescriptiveQuestions: " << myExam[indexSearchExam].nDescriptive;
				int nk2 = 0, temp12 = myExam[indexSearchExam].nDescriptive;
				while (temp12 != 0)
				{
					nk2++; temp12 /= 10;
				}
				for (int i = 1; i <= 16 - nk2; i++) cout << " "; cout << char(178) << "\n";

				cout << "             " << char(178) << "   Number of TestQuestion: " << myExam[indexSearchExam].nTest;
				int nk = 0, temp1 = myExam[indexSearchExam].nTest;
				while (temp1 != 0)
				{
					nk++; temp1 /= 10;
				}
				for (int i = 1; i <= 24 - nk; i++) cout << " "; cout << char(178) << "\n";

				char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
				cout << "             " << "    Date and Time Exam: " << ExamTime;

				cout << "             " << char(178) << "   Time Exam: " << myExam[indexSearchExam].nMinuteExam << " Minute";
				int mk = 0, temp11 = myExam[indexSearchExam].nMinuteExam;
				while (temp11 != 0)
				{
					mk++; temp11 /= 10;
				}


				for (int i = 1; i <= 30 - mk; i++) cout << " "; cout << char(178) << "\n";
				cout << "             " << char(178) << "                                                   " << char(178) << "\n";
				cout << "             ";
				for (int i = 0; i < 53; i++) cout << char(178);
				cout << "\n\n\n";


				cout << "                                  Marks List \n\n";
				cout << "             ";
				for (int i = 0; i < 54; i++) cout << char(178);
				cout << "\n";
				cout << "             " << char(178) << "                                                    " << char(178) << "\n";
				cout << "             " << char(178) << "     Name                     ID             Mark   " << char(178) << "\n";
				cout << "             " << char(178) << "                                                    " << char(178) << "\n";
				cout << "             ";
				cout << char(178);
				for (int i = 0; i < 52; i++) cout << char(223);
				cout << char(178);
				cout << "\n";


				FILE* fpDisplayStudent;
				fpDisplayStudent = fopen("Student.dat", "rt");
				if (!fpDisplayStudent)
				{
					cout << "            -------------------------------------------------------- \n";
					cout << "            |              File Was Not Available...!              | \n";
					cout << "            |                    Try Again...!                     | \n";
					cout << "            -------------------------------------------------------- \n";
					exit(0);
				}
				fread(&myStudent[0], sizeof(Student), 1, fpDisplayStudent);
				int indexS = 0;
				while (!feof(fpDisplayStudent))
				{
					for (int i = 0; i <= myStudent[indexS].nExam; i++)
					{
						if (strcmp(myExam[indexSearchExam].code, myStudent[indexS].Exam[i].codeExam) == 0)
						{

							cout << "                   " << myStudent[indexS].firstName << " " << myStudent[indexS].lastName;
							for (int i = 1; i <= 24 - strlen(myStudent[indexS].firstName) - strlen(myStudent[indexS].lastName); i++) cout << " ";
							cout << myStudent[indexS].ID;
							for (int i = 1; i <= 15 - strlen(myStudent[indexS].ID); i++) cout << " ";
							cout << setprecision(2) << fixed << showpoint << myStudent[indexS].Exam[i].mark * 100;
							cout << "\n             " << char(178) << "----------------------------------------------------" << char(178) << "\n";

						}
					}

					indexS++;
					fread(&myStudent[indexS], sizeof(Student), 1, fpDisplayStudent);

				}
				fclose(fpDisplayStudent);


				cout << "             ";
				for (int i = 0; i < 54; i++) cout << char(178);

			}
			else if (difftime(myExam[indexSearchExam].examtime, noww) > 30)
			{

				cout << "\n";
				cout << "                      -----------------------------------   \n   ";
				cout << "                   |                                 |   \n   ";
				cout << "                   |         Exam Not Held...        |   \n   ";
				cout << "                   |                                 |   \n   ";
				cout << "                   -----------------------------------   \n\n  ";



				cout << "                          General Information Exam \n\n";


				cout << "             ";
				for (int i = 0; i < 53; i++) cout << char(178);
				cout << "\n";
				cout << "             " << char(178) << "                                                   " << char(178) << "\n";


				cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
				for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

				int iL = searchLessonATS(myExam[indexSearchExam].lesson);
				if (iL >= 0)
				{

					cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
					for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

				}

				cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
				for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

				int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
				if (iT >= 0)
				{

					cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
					for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

				}

				cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
				for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";

				cout << "             " << char(178) << "   Number of DescriptiveQuestions: " << myExam[indexSearchExam].nDescriptive;
				int nk2 = 0, temp12 = myExam[indexSearchExam].nDescriptive;
				while (temp12 != 0)
				{
					nk2++; temp12 /= 10;
				}
				for (int i = 1; i <= 16 - nk2; i++) cout << " "; cout << char(178) << "\n";

				cout << "             " << char(178) << "   Number of TestQuestion: " << myExam[indexSearchExam].nTest;
				int nk = 0, temp1 = myExam[indexSearchExam].nTest;
				while (temp1 != 0)
				{
					nk++; temp1 /= 10;
				}
				for (int i = 1; i <= 24 - nk; i++) cout << " "; cout << char(178) << "\n";

				char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
				cout << "                 Date and Time Exam: " << ExamTime;

				cout << "             " << char(178) << "   Time Exam: " << myExam[indexSearchExam].nMinuteExam << " Minute";
				int mk = 0, temp11 = myExam[indexSearchExam].nMinuteExam;
				while (temp11 != 0)
				{
					mk++; temp11 /= 10;
				}
				for (int i = 1; i <= 30 - mk; i++) cout << " "; cout << char(178) << "\n";


				cout << "             " << char(178) << "                                                   " << char(178) << "\n";
				cout << "             ";
				for (int i = 0; i < 53; i++) cout << char(178);

			}
		}
		else
		{
			cout << "\n";
			cout << "           ------------------------------------------------------- " << "\n";
			cout << "           |       You are not Allowed to access this Exam       | " << "\n";
			cout << "           |            Please Enter New Exam Code...            | " << "\n";
			cout << "           ------------------------------------------------------- ";
		}

	}
	else
	{
		cout << "\n";
		cout << "           ------------------------------------------------------- " << "\n";
		cout << "           |       Exam with this Code is not Available...!      | " << "\n";
		cout << "           |           Please Enter Correct Exam Code...         | " << "\n";
		cout << "           ------------------------------------------------------- ";
	}

	                                                                            
	cout << "\n\n";
	cout << "       1-Display          2-MainPage          3-ListPage          4-Back \n\n";

	cout << "                Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		showExam(indexSearchExam);
	}
	else if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		teacherPage();
	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		listTeacherPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "4") == 0)
	{
		system("cls");
		examListTeacher();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		SearchExamListTeacher();
	}

	system("cls");

}


void makeExam()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                    Make Exam Page                     " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            ";
	for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	FILE* fpNExam;
	fpNExam = fopen("nExam.dat", "rt");
	if (!fpNExam)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&nExam, sizeof(int), 1, fpNExam);
	fclose(fpNExam);


	nExam++;


	cout << "            " << "---------------------------------------------------------" << "\n";

	cout << "               Code Exam: ";
	char TempCode[15];
	cin >> TempCode;
	if (nExam != 0)
	{
		while (searchExamATS(TempCode) >= 0)
		{
			cout << "              This Code Already Registered...! \n";

			cout << "               Exam Code: ";
			cin >> TempCode;
		}
	}
	strcpy(myExam[nExam].code, TempCode);

	cout << "               LessonCode's Exam: ";
	cin >> myExam[nExam].lesson;
	while (searchLessonATS(myExam[nExam].lesson) == -1)
	{
		cout << "              Invalid Lesson Code...!" << "\n";

		cout << "               LessonCode's Exam: ";
		cin >> myExam[nExam].lesson;
	}

	strcpy(myExam[nExam].IDTeacher, myTeacher[indexTeacher].ID);

	cout << "            " << "---------------------------------------------------------" << "\n";

	cout << "\n                            Date and Time of The Exam \n";

	cout << "               Year: ";
	int year; cin >> year;
	myExam[nExam].time.tm_year = year - 1900;

	cout << "               Month: ";
	int month; cin >> month;
	myExam[nExam].time.tm_mon = month - 1;

	cout << "               Day: ";
	cin >> myExam[nExam].time.tm_mday;

	cout << "               Day of Week: ";
	char week[10]; cin >> week;
	if (strcmp(week, "Saturday") == 0 || strcmp(week, "1") == 0) myExam[nExam].time.tm_wday = 6;
	else if (strcmp(week, "Sunday") == 0 || strcmp(week, "2") == 0) myExam[nExam].time.tm_wday = 0;
	else if (strcmp(week, "Monday") == 0 || strcmp(week, "3") == 0) myExam[nExam].time.tm_wday = 1;
	else if (strcmp(week, "Thursday") == 0 || strcmp(week, "4") == 0) myExam[nExam].time.tm_wday = 2;
	else if (strcmp(week, "Wednesday") == 0 || strcmp(week, "5") == 0) myExam[nExam].time.tm_wday = 3;
	else if (strcmp(week, "Tuesday") == 0 || strcmp(week, "6") == 0) myExam[nExam].time.tm_wday = 4;
	else if (strcmp(week, "Friday") == 0 || strcmp(week, "7") == 0) myExam[nExam].time.tm_wday = 5;

	cout << "               Hour: ";
	cin >> myExam[nExam].time.tm_hour;

	cout << "               Minute: ";
	cin >> myExam[nExam].time.tm_min;
	myExam[nExam].examtime = mktime(&myExam[nExam].time);

	cout << "               Exam Time (Minute): ";
	cin >> myExam[nExam].nMinuteExam;

	cout << "            " << "---------------------------------------------------------" << "\n";

	cout << "                                    Questions Exam";
	cout << "\n\n";
	cout << "               Number Exam Test Questions: ";
	cin >> myExam[nExam].nTest;
	cout << "\n";

	for (int i = 0; i < myExam[nExam].nTest; i++)
	{
		cout << "               Test Question " << i + 1 << ": ";
		cin.ignore();
		gets_s(myExam[nExam].test[i].test);

		for (int j = 0; j < 4; j++)
		{
			cout << "                Option" << j + 1 << ": ";
			gets_s(myExam[nExam].test[i].answer[j]);
		}

		cout << "                 Test Question" << i + 1 << " Answer: ";
		gets_s(myExam[nExam].test[i].answerkey);

		cout << "                 Test Question" << i + 1 << " Score: ";
		cin >> myExam[nExam].test[i].score;

		myExam[nExam].sumScore += myExam[nExam].test[i].score;

		cout << "\n";
	}

	cout << "\n";
	cout << "               Number Exam Descriptive Questions: ";
	cin >> myExam[nExam].nDescriptive;
	cout << "\n";

	for (int i = 0; i < myExam[nExam].nDescriptive; i++)
	{
		cout << "               Descriptive Question " << i + 1 << ": ";
		cin.ignore();
		gets_s(myExam[nExam].Descriptive[i].question);

		for (int j = 0; j < 8; j++)
		{
			cout << "                Key Word" << j + 1 << " for Answer: ";
			gets_s(myExam[nExam].Descriptive[i].keyAnswer[j]);
		}


		cout << "                 Descriptive Question" << i + 1 << " Score: ";
		cin >> myExam[nExam].Descriptive[i].score;

		myExam[nExam].sumScore += myExam[nExam].Descriptive[i].score;

		cout << "\n";
	}

	cout << "\n";
	cout << "            Is There a Negative Score for The Test Questions?: (y,n) ? ";
	char NegativeS;
	cin >> NegativeS;
	if (NegativeS == 'y') myExam[nExam].NegativePoint = true;
	else if (NegativeS == 'n') myExam[nExam].NegativePoint = false;


	cout << "\n\n            Input Information and Question Exam is Correct (y,n) ? ";

	char sure;
	cin >> sure;

	if (sure == 'y')
	{
		FILE* fpNStudent;
		fpNStudent = fopen("nStudent.dat", "rt");
		fseek(fpNStudent, 0, SEEK_SET);
		fread(&nStudent, sizeof(int), 1, fpNStudent);
		fclose(fpNStudent);

		FILE* fpnExam;
		fpnExam = fopen("nExam.dat", "wt");
		if (!fpnExam)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fwrite(&nExam, sizeof(int), 1, fpnExam);
		fclose(fpnExam);


		FILE* fpMakeExam;
		fpMakeExam = fopen("Exam.dat", "at");
		if (!fpMakeExam)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fwrite(&myExam[nExam], sizeof(Exam), 1, fpMakeExam);
		fclose(fpMakeExam);


		FILE* fpExamStudent;
		fpExamStudent = fopen("Student.dat", "rt");
		if (!fpExamStudent)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fread(&myStudent[0], sizeof(Student), 1, fpExamStudent);
		int indexS = 0;
		while (!feof(fpExamStudent))
		{

			for (int i = 0; i < myStudent[indexS].nLesson; i++)
			{
				if (strcmp(myExam[nExam].lesson, myStudent[indexS].lesson[i].code) == 0)
				{
					myStudent[indexS].nExam++;
					strcpy(myStudent[indexS].Exam[myStudent[indexS].nExam].codeExam, myExam[nExam].code);
					break;
				}
			}

			indexS++;
			fread(&myStudent[indexS], sizeof(Student), 1, fpExamStudent);

		}
		fclose(fpExamStudent);



		FILE* fpWriteStudent;
		fpWriteStudent = fopen("Student.dat", "wt");
		for (int i = 0; i <= nStudent; i++)
		{
			fwrite(&myStudent[i], sizeof(Student), 1, fpWriteStudent);
		}
		fclose(fpWriteStudent);




		cout << "            --------------------------------------------------------- \n";
		cout << "                 " << myExam[nExam].code << " " << myExam[nExam].lesson << " added Succesfuli... :)            \n";
		cout << "                 The number of Exam registered in the system: " << nExam + 1 << "\n";
		cout << "            --------------------------------------------------------- \n";
		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(2);
		while (chrono::steady_clock::now() < tend) {}


		system("cls");
		examTeacherPage();

	}
	else if (sure == 'n')
	{
		nExam--;

		FILE* fpnExam;
		fpnExam = fopen("nExam.dat", "wt");
		if (!fpnExam)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fwrite(&nExam, sizeof(int), 1, fpnExam);
		fclose(fpnExam);


		cout << "            --------------------------------------------------------- \n";
		cout << "            |                   OK...! Make again                   | \n";
		cout << "            --------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(10);
		while (chrono::steady_clock::now() < tend)
		{

		}

		system("cls");
		examTeacherPage();
	}

	system("cls");

}
void showExam(int indexSearchExam)
{
	cout << "\n";
	cout << "                        Questions Exam and Answer" << "\n\n\n";


	cout << "           Test Questions" << "\n";

	for (int indexTest = 0; indexTest < myExam[indexSearchExam].nTest; indexTest++)
	{
		cout << "    ------------------------------------------------------------------------- \n";
		cout << "     " << indexTest + 1 << "- " << myExam[indexSearchExam].test[indexTest].test << "\n";
		for (int iOption = 0; iOption < 4; iOption++) cout << "      " << iOption + 1 << ") " << myExam[indexSearchExam].test[indexTest].answer[iOption] << "\n";
		cout << "        Answer Test: " << myExam[indexSearchExam].test[indexTest].answerkey << "\n";
		cout << "        Score Test: " << myExam[indexSearchExam].test[indexTest].score << "\n";

	}

	cout << "\n";
	cout << "        Is There a Negative Score for The Test Questions?: ";
	if (myExam[indexSearchExam].NegativePoint) cout << "YES...! " << "\n";
	else cout << "NO...! " << "\n";


	cout << "    ------------------------------------------------------------------------- \n";

	cout << "\n\n";
	cout << "           Descriptive Questions" << "\n";

	for (int indexDescriptive = 0; indexDescriptive < myExam[indexSearchExam].nDescriptive; indexDescriptive++)
	{
		cout << "    ------------------------------------------------------------------------- \n";
		cout << "     " << indexDescriptive + 1 << "- " << myExam[indexSearchExam].Descriptive[indexDescriptive].question << "\n";
		cout << "       Answer Keys: " << "\n";
		for (int iKey = 0; iKey < 8; iKey++) cout << "                    " << iKey + 1 << ") " << myExam[indexSearchExam].Descriptive[indexDescriptive].keyAnswer[iKey] << "\n";
		cout << "        Score Question: " << myExam[indexSearchExam].Descriptive[indexDescriptive].score << "\n";

	}
	cout << "    ------------------------------------------------------------------------- \n";

	cout << "\n";
	cout << "          1-MainPage              2-ExamPage              3-Back \n\n";
	 
	cout << "                Input Method: ";

	char myMethod[10];
	cin >> myMethod;


	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		teacherPage();
	}
	else if (strcmp(myMethod, "ExamPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		examTeacherPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		SearchExamListTeacher();
	}

	system("cls");

}

//-----------------------------//

//Student//


void studentPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                      Student Page                     " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "              1-List                 2-Exam                 3-Logout \n\n";

	cout << "                Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "List") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		listStudentPage();
	}
	else if (strcmp(myMethod, "Exam") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		examListStudent();
	}
	else if (strcmp(myMethod, "Logout") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		startPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		studentPage();

	}

	system("cls");

}


void listStudentPage()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                       Lists Page                      " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "              1-Lessons               2-Teacher               3-Back \n\n";

	cout << "                Input Type: ";

	char myType[20];
	cin >> myType;


	if (strcmp(myType, "Lessons") == 0 || strcmp(myType, "1") == 0)
	{
		system("cls");
		lessonListStudent();
	}
	else if (strcmp(myType, "Teacher") == 0 || strcmp(myType, "2") == 0)
	{
		system("cls");
		teacherListStudent();
	}
	else if (strcmp(myType, "Back") == 0 || strcmp(myType, "3") == 0)
	{
		system("cls");
		studentPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Choose Correct List... !            | \n";
		cout << "            --------------------------------------------------------- \n";

		listStudentPage();

	}

	system("cls");

}

void lessonListStudent()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Lessons List                     " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "                        1-Display                  2-Back \n\n";

	cout << "                Input Method: ";


	char myMethod[20];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		DisplayLessonListStudnet();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listStudentPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		lessonListStudent();

	}

	system("cls");

}

void DisplayLessonListStudnet()
{

	cout << "\n";

	cout << "                       Lessons List \n\n";

	cout << "         "; for (int i = 0; i < 40; i++) cout << char(178); cout << "\n";

	cout << "         " << char(178) << "                                      " << char(178) << "\n";
	cout << "         " << char(178) << "      NameLesson          Code        " << char(178) << "\n";
	cout << "         " << char(178) << "                                      " << char(178) << "\n";

	cout << "         "; cout << char(178); for (int i = 0; i < 38; i++) cout << char(223); cout << char(178); cout << "\n";


	FILE* fpReadStudent;
	fpReadStudent = fopen("Student.dat", "rt");
	fread(&myStudent[0], sizeof(Student), 1, fpReadStudent);
	int indexS = 0;
	while (!feof(fpReadStudent))
	{
		if (indexS == indexStudent) break;

		indexS++;
		fread(&myStudent[indexS], sizeof(Student), 1, fpReadStudent);

	}
	fclose(fpReadStudent);


	for (int i = 0; i < myStudent[indexStudent].nLesson; i++)
	{

		cout << "         " << char(178) << "      " << myStudent[indexStudent].lesson[i].name;
		for (int j = 1; j <= (20 - strlen(myStudent[indexStudent].lesson[i].name)); j++) cout << " ";

		cout << myStudent[indexStudent].lesson[i].code;
		for (int j = 1; j <= (12 - strlen(myStudent[indexStudent].lesson[i].code)); j++) cout << " ";
		cout << char(178) << "\n";

		cout << "         " << char(178) << "--------------------------------------" << char(178) << "\n";

	}

	cout << "         "; for (int i = 0; i < 40; i++) cout << char(178); cout << "\n\n";


	cout << "        1-MainPage        2-ListPage        3-Back \n\n";

	cout << "          Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		studentPage();
	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listStudentPage();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		lessonListStudent();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		DisplayLessonListStudnet();

	}

	system("cls");

}


void teacherListStudent()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            " << char(177) << "                      Teachers List                    " << char(177) << "\n";
	cout << "            " << char(177) << "                                                       " << char(177) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(177); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "                        1-Display                  2-Back \n\n";

	cout << "                Input Method: ";


	char myMethod[20];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		DisplayTeacherListStudent();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listStudentPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		teacherListStudent();

	}

	system("cls");

}

void DisplayTeacherListStudent()
{

	cout << "\n";

	cout << "                                   Teachers List \n\n";

	cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n";

	cout << "         " << char(178) << "                                                               " << char(178) << "\n";
	cout << "         " << char(178) << "        FirstName             LastName             ID          " << char(178) << "\n";
	cout << "         " << char(178) << "                                                               " << char(178) << "\n";
	cout << "         ";
	cout << char(178); for (int i = 0; i < 63; i++) cout << char(223); cout << char(178) << "\n";


	FILE* fpDisplayTeacherStudent;
	fpDisplayTeacherStudent = fopen("Teacher.dat", "rt");
	if (!fpDisplayTeacherStudent)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myTeacher[0], sizeof(Teacher), 1, fpDisplayTeacherStudent);
	int indexT = 0;
	while (!feof(fpDisplayTeacherStudent))
	{
		bool brk = false;

		for (int j = 0; j < myTeacher[indexT].nLesson; j++)
		{
			for (int i = 0; i < myStudent[indexStudent].nLesson; i++)
			{
				if (strcmp(myTeacher[indexT].lesson[j].code, myStudent[indexStudent].lesson[i].code) == 0)
				{

					cout << "         " << char(178) << "        " << myTeacher[indexT].firstName;
					for (int i = 1; i <= 22 - strlen(myTeacher[indexT].firstName); i++) cout << " ";

					cout << myTeacher[indexT].lastName;
					for (int i = 1; i <= 21 - strlen(myTeacher[indexT].lastName); i++) cout << " ";

					cout << myTeacher[indexT].ID;
					for (int i = 1; i <= 12 - strlen(myTeacher[indexT].ID); i++) cout << " ";
					cout << char(178) << "\n";

					cout << "         " << char(178) << "---------------------------------------------------------------" << char(178) << "\n";
					brk = true;

				}
				if (brk) break;
			}
			if (brk) break;
		}


		indexT++;
		fread(&myTeacher[indexT], sizeof(Teacher), 1, fpDisplayTeacherStudent);

	}
	fclose(fpDisplayTeacherStudent);


	cout << "         "; for (int i = 0; i < 65; i++) cout << char(178); cout << "\n\n";


	cout << "          1-MainPage                  2-ListPage                  3-Back \n\n";

	cout << "            Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		studentPage();

	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listStudentPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		teacherListStudent();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n\n";

		DisplayTeacherListStudent();

	}

	system("cls");

}


void examListStudent()
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            " << char(178) << "                      Exams Page                       " << char(178) << "\n";
	cout << "            " << char(178) << "                                                       " << char(178) << "\n";
	cout << "            ";
	for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";

	time_t now; now = time(NULL); char* noww; noww = new char[25]; noww = ctime(&now);
	cout << "                            " << noww << "\n";


	cout << "              1-Display                2-Search               3-Back \n\n";

	cout << "                Input Method: ";

	char myMethod[20];
	cin >> myMethod;

	if (strcmp(myMethod, "Display") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		DisplayExamListStudnet();
	}
	else if (strcmp(myMethod, "Search") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		SearchExamListStudnet();
	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		studentPage();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n";

		examListStudent();

	}

	system("cls");

}

void DisplayExamListStudnet()
{

	cout << "\n";

	cout << "                                Exams List \n\n";

	cout << "         "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n";
	cout << "         " << char(178) << "                                                       " << char(178) << "\n";
	cout << "         " << char(178) << "      ExamLesson          Code          Status         " << char(178) << "\n";
	cout << "         " << char(178) << "                                                       " << char(178) << "\n";

	cout << "         "; cout << char(178); for (int i = 0; i < 55; i++) cout << char(223); cout << char(178) << "\n";


	FILE* fpReadStudent;
	fpReadStudent = fopen("Student.dat", "rt");
	fread(&myStudent[0], sizeof(Student), 1, fpReadStudent);
	int indexS = 0;
	while (!feof(fpReadStudent))
	{
		if (indexStudent == indexS) break;

		indexS++;
		fread(&myStudent[indexS], sizeof(Student), 1, fpReadStudent);

	}
	fclose(fpReadStudent);


	for (int i = 0; i <= myStudent[indexStudent].nExam; i++)
	{

		int indexE = searchExamATS(myStudent[indexStudent].Exam[i].codeExam);

		cout << "         " << char(178) << "      " << myExam[indexE].lesson;
		for (int i = 1; i <= (20 - strlen(myExam[indexE].lesson)); i++) cout << " ";

		cout << myExam[indexE].code;
		for (int i = 1; i <= (14 - strlen(myExam[indexE].code)); i++) cout << " ";

		time_t noww; noww = time(NULL);
		if ((difftime(myExam[indexE].examtime, noww) >= -(myExam[indexE].nMinuteExam * 60 + 30)) && (difftime(myExam[indexE].examtime, noww) <= 30)) cout << "On Performing";
		else if (difftime(myExam[indexE].examtime, noww) < -(myExam[indexE].nMinuteExam * 60 + 30)) cout << "Expired      ";
		else if (difftime(myExam[indexE].examtime, noww) > 30) cout << "Not Held     ";


		cout << "  " << char(178) << "\n";

		cout << "         " << char(178) << "-------------------------------------------------------" << char(178) << "\n";
	}


	cout << "         "; for (int i = 0; i < 57; i++) cout << char(178); cout << "\n\n";


	cout << "           1-MainPage              2-ListPage              3-Back \n\n";

	cout << "             Input Method: ";

	char myMethod[10];
	cin >> myMethod;

	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		studentPage();

	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listStudentPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		examListStudent();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n\n";

		DisplayExamListStudnet();
	}

	system("cls");

}
void SearchExamListStudnet()
{

	cout << "\n";
	cout << "        ---------------------------------------\n";
	cout << "         Please Input Exam Code: ";
	char codeExam[20];
	cin >> codeExam;
	cout << "        ---------------------------------------\n";


	system("cls");


	FILE* fpDisplayStudent;
	fpDisplayStudent = fopen("Student.dat", "rt");
	if (!fpDisplayStudent)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myStudent[0], sizeof(Student), 1, fpDisplayStudent);
	int indexS = 0;
	while (!feof(fpDisplayStudent))
	{
		indexS++;
		fread(&myStudent[indexS], sizeof(Student), 1, fpDisplayStudent);

	}
	fclose(fpDisplayStudent);

	FILE* fpNStudent;
	fpNStudent = fopen("nStudent.dat", "rt");
	if (!fpNStudent)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fseek(fpNStudent, 0, SEEK_SET);
	fread(&nStudent, sizeof(int), 1, fpNStudent);
	fclose(fpNStudent);


	int indexSearchExam = searchExamATS(codeExam);

	if (indexSearchExam >= 0)
	{
		int indexExamStudent;

		for (indexExamStudent = 0; indexExamStudent <= myStudent[indexStudent].nExam; indexExamStudent++)
			if (strcmp(myExam[indexSearchExam].code, myStudent[indexStudent].Exam[indexExamStudent].codeExam) == 0)
			{

				time_t noww; noww = time(NULL);

				if ((difftime(myExam[indexSearchExam].examtime, noww) >= -(myExam[indexSearchExam].nMinuteExam * 60 + 30)) && (difftime(myExam[indexSearchExam].examtime, noww) <= 30))
				{									

					cout << "\n\n";

					cout << "                          General Information Exam \n\n";


					cout << "             ";
					for (int i = 0; i < 53; i++) cout << char(178);
					cout << "\n";
					cout << "             " << char(178) << "                                                   " << char(178) << "\n";


					cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
					for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

					int iL = searchLessonATS(myExam[indexSearchExam].lesson);
					if (iL >= 0)
					{

						cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
						for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

					}

					cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
					for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

					int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
					if (iT >= 0)
					{

						cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
						for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

					}

					cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
					for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";

					cout << "             " << char(178) << "   Number of DescriptiveQuestions: " << myExam[indexSearchExam].nDescriptive;
					int nk2 = 0, temp12 = myExam[indexSearchExam].nDescriptive;
					while (temp12 != 0)
					{
						nk2++; temp12 /= 10;
					}
					for (int i = 1; i <= 16 - nk2; i++) cout << " "; cout << char(178) << "\n";

					cout << "             " << char(178) << "   Number of TestQuestion: " << myExam[indexSearchExam].nTest;
					int nk = 0, temp1 = myExam[indexSearchExam].nTest;
					while (temp1 != 0)
					{
						nk++; temp1 /= 10;
					}

					for (int i = 1; i <= 24 - nk; i++) cout << " "; cout << char(178) << "\n";
					char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
					cout << "                 Date and Time Exam: " << ExamTime;

					cout << "             " << char(178) << "   Time Exam: " << myExam[indexSearchExam].nMinuteExam << " Minute";
					int mk = 0, temp11 = myExam[indexSearchExam].nMinuteExam;
					while (temp11 != 0)
					{
						mk++; temp11 /= 10;
					}

					for (int i = 1; i <= 30 - mk; i++) cout << " "; cout << char(178) << "\n";


					cout << "             " << char(178) << "                                                   " << char(178) << "\n";
					cout << "             ";
					for (int i = 0; i < 53; i++) cout << char(178);
					cout << "\n\n";


					cout << "                       1-Start                    2-Back \n\n";

					cout << "                  Input Method: ";

					char Method[20];
					cin >> Method;


					if (strcmp(Method, "1") == 0 || strcmp(Method, "Start") == 0)
					{

						system("cls");

						float point = 0.0;

						int indexTest = 0;
						int indexDescriptive = 0;

						time_t StartExam = time(0);

						std::chrono::steady_clock::time_point tend = std::chrono::steady_clock::now() + std::chrono::minutes(myExam[indexSearchExam].nMinuteExam);
						while (std::chrono::steady_clock::now() < tend)
						{

							system("cls");

							time_t now; now = time(NULL);

							cout << "                        ------------------------------" << "\n";
							cout << "                                    Status            " << "\n";
							cout << "                                                      " << "\n";
							cout << "                          Total Number of Tests: " << myExam[indexSearchExam].nTest << "\n";
							cout << "                          Remaning Test Questions: " << myExam[indexSearchExam].nTest - indexTest << "\n";
							cout << "                          Remaning Descriptive Questions: " << myExam[indexSearchExam].nDescriptive - indexDescriptive << "\n";

							int TimeRemaning = myExam[indexSearchExam].nMinuteExam - (int(difftime(now, StartExam)) / 60);

							if (TimeRemaning <= 1)
							{
								cout << "                          Remaning Time (Minute): " << TimeRemaning << "\n";
								cout << "                          The Exam Time will End in a few Moments... !";

							}
							else 
								cout << "                          Remaning Time (Minute): " << TimeRemaning;

							cout << "\n";
							cout << "                        ------------------------------" << "\n";


							if (indexTest == myExam[indexSearchExam].nTest && indexDescriptive < myExam[indexSearchExam].nDescriptive)
							{
								cout << "\n";

								cout << "    ------------------------------------------------------------------------- \n";
								cout << "     " << indexDescriptive + 1 << "- " << myExam[indexSearchExam].Descriptive[indexDescriptive].question << "? \n\n";

								char descriptiveAnswer[150];
								cout << "      Answer: ";

								if (indexDescriptive == 0) cin.ignore();
								gets_s(descriptiveAnswer);

								int pAnswer = 0;
								
								//Check the Descriptive Question Answer
								for (int i = 0; i < 8; i++)
								{
									for (int j = 0; j <= strlen(descriptiveAnswer) - strlen(myExam[indexSearchExam].Descriptive[indexDescriptive].keyAnswer[i]); j++)
									{
										bool correct = true;

										for (int k = j; k < j + strlen(myExam[indexSearchExam].Descriptive[indexDescriptive].keyAnswer[i]); k++)
										{
											if (descriptiveAnswer[k] != myExam[indexSearchExam].Descriptive[indexDescriptive].keyAnswer[i][k - j]) correct = false;

											if (!correct) break;
										}

										if (correct)
										{
											pAnswer++;
											break;
										}
									}
								}

								point += (1.0 * pAnswer / 8.0) * myExam[indexSearchExam].Descriptive[indexDescriptive].score;

								indexDescriptive++;

								if (indexDescriptive == myExam[indexSearchExam].nDescriptive) break;

							}
							else if (indexTest < myExam[indexSearchExam].nTest)
							{

								cout << "\n";

								cout << "    ------------------------------------------------------------------------- \n";
								cout << "     " << indexTest + 1 << "- " << myExam[indexSearchExam].test[indexTest].test << "\n";
								for (int iOption = 0; iOption < 4; iOption++) cout << "      " << iOption + 1 << ") " << myExam[indexSearchExam].test[indexTest].answer[iOption] << "\n";
								cout << "    ------------------------------------------------------------------------- \n";

								cout << "     Choose Correct Option: ";

								int yourAnswer;
								cin >> yourAnswer;
								cout << "\n";

								//Check the Test Question Answer
								if (myExam[indexSearchExam].NegativePoint)
								{
									if (yourAnswer == 0);
									else if (strcmp(myExam[indexSearchExam].test[indexTest].answer[yourAnswer - 1], myExam[indexSearchExam].test[indexTest].answerkey) == 0)
										point += myExam[indexSearchExam].test[indexTest].score;
									else
										point -= myExam[indexSearchExam].test[indexTest].score / 3.0;
								}
								else
								{
									if (yourAnswer == 0);
									else if (strcmp(myExam[indexSearchExam].test[indexTest].answer[yourAnswer - 1], myExam[indexSearchExam].test[indexTest].answerkey) == 0)
										point += myExam[indexSearchExam].test[indexTest].score;
								}


								cout << "       Sure? (y,n): ";
								char sure;
								cin >> sure;
								cout << "\n";

								if (sure == 'y') indexTest++;
								else if (sure == 'n')
								{
									if (myExam[indexSearchExam].NegativePoint)
									{
										if (yourAnswer == 0);
										else if (strcmp(myExam[indexSearchExam].test[indexTest].answer[yourAnswer - 1], myExam[indexSearchExam].test[indexTest].answerkey) == 0)
											point -= myExam[indexSearchExam].test[indexTest].score;
										else
											point += myExam[indexSearchExam].test[indexTest].score / 3.0;
									}
									else
									{
										if (yourAnswer == 0);
										else if (strcmp(myExam[indexSearchExam].test[indexTest].answer[yourAnswer - 1], myExam[indexSearchExam].test[indexTest].answerkey) == 0)
											point -= myExam[indexSearchExam].test[indexTest].score;
									}

									cout << "     Choose Correct Option For Last Time: ";
									int yourAnswer;
									cin >> yourAnswer;
									cout << "\n";

									//Check the Test Question Answer
									if (myExam[indexSearchExam].NegativePoint)
									{
										if (yourAnswer == 0);
										else if (strcmp(myExam[indexSearchExam].test[indexTest].answer[yourAnswer - 1], myExam[indexSearchExam].test[indexTest].answerkey) == 0)
											point += myExam[indexSearchExam].test[indexTest].score;
										else
											point -= myExam[indexSearchExam].test[indexTest].score / 3.0;
									}
									else
									{
										if (yourAnswer == 0);
										else if (strcmp(myExam[indexSearchExam].test[indexTest].answer[yourAnswer - 1], myExam[indexSearchExam].test[indexTest].answerkey) == 0)
											point += myExam[indexSearchExam].test[indexTest].score;
									}


									indexTest++;

								}

								if (indexTest == myExam[indexSearchExam].nTest && myExam[indexSearchExam].nDescriptive == 0) break;
							

							}

						}

						myStudent[indexStudent].Exam[indexExamStudent].mark = 1.0 * point / myExam[indexSearchExam].sumScore;

						FILE* fpWriteStudent;
						fpWriteStudent = fopen("Student.dat", "wt");
						for (int i = 0; i <= nStudent; i++)
						{
							fwrite(&myStudent[i], sizeof(Student), 1, fpWriteStudent);
						}
						fclose(fpWriteStudent);


						system("cls");

						cout << "\n";
						cout << "            --------------------------------------------------------- \n";
						cout << "            |            Your Exam is Finished, GoodLuck            | \n";
						cout << "            ---------------------------------------------------------";

					}
					else if (strcmp(Method, "2") == 0 || strcmp(Method, "Back") == 0)
					{
						system("cls");
						examListStudent();
					}

				}
				else if (difftime(myExam[indexSearchExam].examtime, noww) < -(myExam[indexSearchExam].nMinuteExam * 60 + 30))
				{

					cout << "\n";
					cout << "                    -----------------------------------   \n   ";
					cout << "                 |                                 |   \n   ";
					cout << "                 |         Exam Expired...         |   \n   ";
					cout << "                 |                                 |   \n   ";
					cout << "                 -----------------------------------   \n  ";

					cout << "\n";

					cout << "                          General Information Exam \n\n";


					cout << "             ";
					for (int i = 0; i < 53; i++) cout << char(178);
					cout << "\n";
					cout << "                                                                " << "\n";


					cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
					for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

					int iL = searchLessonATS(myExam[indexSearchExam].lesson);
					if (iL >= 0)
					{

						cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
						for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

					}

					cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
					for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

					int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
					if (iT >= 0)
					{

						cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
						for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

					}

					cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
					for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";

					char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
					cout << "                 Date and Time Exam: " << ExamTime;
					cout << "             " << char(178) << "         ---------------------------------         " << char(178) << "\n";
					cout << "                        Your Mark in This Exam: " << setprecision(2) << fixed << showpoint << myStudent[indexStudent].Exam[indexExamStudent].mark * 100 << "\n";
					cout << "             " << char(178) << "         ---------------------------------         " << char(178) << "\n";


					cout << "             ";
					for (int i = 0; i < 53; i++) cout << char(178);

				}
				else if (difftime(myExam[indexSearchExam].examtime, noww) > 30)
				{

					cout << "\n";
					cout << "                      -----------------------------------   \n   ";
					cout << "                   |                                 |   \n   ";
					cout << "                   |         Exam Not Held...        |   \n   ";
					cout << "                   |                                 |   \n   ";
					cout << "                   -----------------------------------   \n\n  ";


					cout << "                          General Information Exam \n\n";
					cout << "             ";
					for (int i = 0; i < 53; i++) cout << char(178);
					cout << "\n";
					cout << "             " << char(178) << "                                                   " << char(178) << "\n";



					cout << "             " << char(178) << "   Code Exam: " << myExam[indexSearchExam].code;
					for (int i = 1; i <= 37 - strlen(myExam[indexSearchExam].code); i++) cout << " "; cout << char(178) << "\n";

					int iL = searchLessonATS(myExam[indexSearchExam].lesson);
					if (iL >= 0)
					{

						cout << "             " << char(178) << "   Name Lesson: " << myLesson[iL].name;
						for (int i = 1; i <= 35 - strlen(myLesson[iL].name); i++) cout << " "; cout << char(178) << "\n";

					}

					cout << "             " << char(178) << "   Code Lesson: " << myExam[indexSearchExam].lesson;
					for (int i = 1; i <= 35 - strlen(myExam[indexSearchExam].lesson); i++) cout << " "; cout << char(178) << "\n";

					int iT = searchTeacherATS(myExam[indexSearchExam].IDTeacher);
					if (iT >= 0)
					{

						cout << "             " << char(178) << "   Name Teacher: " << myTeacher[iT].firstName << " " << myTeacher[iT].lastName;
						for (int i = 1; i <= 34 - strlen(myTeacher[iT].firstName) - strlen(myTeacher[iT].lastName) - 1; i++) cout << " "; cout << char(178) << "\n";

					}

					cout << "             " << char(178) << "   ID Teacher: " << myExam[indexSearchExam].IDTeacher;
					for (int i = 1; i <= 36 - strlen(myExam[indexSearchExam].IDTeacher); i++) cout << " "; cout << char(178) << "\n";

					char* ExamTime; ExamTime = new char[100]; ExamTime = ctime(&myExam[indexSearchExam].examtime);
					cout << "                 Date and Time Exam: " << ExamTime;

					cout << "             " << char(178) << "   Time Exam: " << myExam[indexSearchExam].nMinuteExam << " Minute";
					int mk = 0, temp11 = myExam[indexSearchExam].nMinuteExam;
					while (temp11 != 0)
					{
						mk++; temp11 /= 10;
					}
					for (int i = 1; i <= 30 - mk; i++) cout << " "; cout << char(178) << "\n";


					cout << "             " << char(178) << "                                                   " << char(178) << "\n";
					cout << "             ";
					for (int i = 0; i < 53; i++) cout << char(178);

				}

				break;

			}
		

		if (indexExamStudent == myStudent[indexStudent].nExam + 1)
		{
			cout << "\n"; 
			cout << "           ------------------------------------------------------- " << "\n";
			cout << "           |       You are not Allowed to access this Exam       | " << "\n";
			cout << "           |            Please Enter New Exam Code...            | " << "\n";
			cout << "           ------------------------------------------------------- ";
		}


	}
	else
	{
		cout << "\n";
		cout << "           ------------------------------------------------------- " << "\n";
		cout << "           |       Exam with this Code is not Available...!      | " << "\n";
		cout << "           |           Please Enter Correct Exam Code...         | " << "\n";
		cout << "           -------------------------------------------------------";
	}


	cout << "\n\n";
	cout << "              1-MainPage            2-ListPage            3-Back \n\n";

	cout << "                Input Method: ";

	char myMethod[10];
	cin >> myMethod;


	if (strcmp(myMethod, "MainPage") == 0 || strcmp(myMethod, "1") == 0)
	{
		system("cls");
		studentPage();

	}
	else if (strcmp(myMethod, "ListPage") == 0 || strcmp(myMethod, "2") == 0)
	{
		system("cls");
		listStudentPage();

	}
	else if (strcmp(myMethod, "Back") == 0 || strcmp(myMethod, "3") == 0)
	{
		system("cls");
		examListStudent();
	}
	else
	{
		system("cls");

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |            Please Input Correct Method...!            | \n";
		cout << "            --------------------------------------------------------- \n\n";

		SearchExamListStudnet();
	}

	system("cls");

}

//-----------------------------//

//Others//


//Search
int searchLessonATS(char Code[])
{

	FILE* fpReadLessonSearch;
	fpReadLessonSearch = fopen("Lesson.dat", "rt");
	if (!fpReadLessonSearch)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myLesson[0], sizeof(Lesson), 1, fpReadLessonSearch);
	int indexL = 0;
	while (!feof(fpReadLessonSearch))
	{
		if (strcmp(Code, myLesson[indexL].code) == 0)
		{
			fclose(fpReadLessonSearch);
			return indexL;
		}

		indexL++;
		fread(&myLesson[indexL], sizeof(Lesson), 1, fpReadLessonSearch);

	}
	fclose(fpReadLessonSearch);

	return -1;

}
int searchTeacherATS(char ID[])
{

	FILE* fpReadTeacherSearch;
	fpReadTeacherSearch = fopen("Teacher.dat", "rt");
	if (!fpReadTeacherSearch)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myTeacher[0], sizeof(Teacher), 1, fpReadTeacherSearch);
	int indexT = 0;
	while (!feof(fpReadTeacherSearch))
	{
		if (strcmp(ID, myTeacher[indexT].ID) == 0)
		{
			fclose(fpReadTeacherSearch);
			return indexT;
		}
		indexT++;
		fread(&myTeacher[indexT], sizeof(Teacher), 1, fpReadTeacherSearch);

	}
	fclose(fpReadTeacherSearch);

	return -1;

}
int searchStudentATS(char ID[])
{

	FILE* fpReadStudentSearch;
	fpReadStudentSearch = fopen("Student.dat", "rt");
	if (!fpReadStudentSearch)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myStudent[0], sizeof(Student), 1, fpReadStudentSearch);
	int indexS = 0;
	while (!feof(fpReadStudentSearch))
	{
		if (strcmp(ID, myStudent[indexS].ID) == 0)
		{
			fclose(fpReadStudentSearch);
			return indexS;
		}
		indexS++;
		fread(&myStudent[indexS], sizeof(Student), 1, fpReadStudentSearch);

	}
	fclose(fpReadStudentSearch);

	return -1;

}
int searchExamATS(char Code[])
{

	FILE* fpReadExamSearch;
	fpReadExamSearch = fopen("Exam.dat", "rt");
	if (!fpReadExamSearch)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myExam[0], sizeof(Exam), 1, fpReadExamSearch);
	int indexE = 0;
	while (!feof(fpReadExamSearch))
	{
		if (strcmp(Code, myExam[indexE].code) == 0)
		{
			fclose(fpReadExamSearch);
			return indexE;
		}
		indexE++;
		fread(&myExam[indexE], sizeof(Exam), 1, fpReadExamSearch);

	}
	fclose(fpReadExamSearch);

	return -1;
}


//Sort
void sortLesson()
{

	FILE* fpNLesson;
	fpNLesson = fopen("nLesson.dat", "rt");
	if (!fpNLesson)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fseek(fpNLesson, 0, SEEK_SET);
	fread(&nLesson, sizeof(int), 1, fpNLesson);
	fclose(fpNLesson);


	FILE* fpReadLessonSort;
	fpReadLessonSort = fopen("Lesson.dat", "rt");
	if (!fpReadLessonSort)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myLesson[0], sizeof(Lesson), 1, fpReadLessonSort);
	int indexL = 0;
	while (!feof(fpReadLessonSort))
	{
		indexL++;
		fread(&myLesson[indexL], sizeof(Lesson), 1, fpReadLessonSort);

	}
	fclose(fpReadLessonSort);


	for (int j = 0; j <= nLesson; j++)
	{
		bool Finish = true;

		for (int i = 0; i < nLesson - j; i++)
		{
			if (strcmp(myLesson[i].code, myLesson[i + 1].code) == 1)
			{
				Lesson temp;
				temp = myLesson[i];
				myLesson[i] = myLesson[i + 1];
				myLesson[i + 1] = temp;

				Finish = false;
			}
		}

		if (Finish) break;
	}


	FILE* fpWriteLessonSort;
	fpWriteLessonSort = fopen("Lesson.dat", "wt");
	if (!fpWriteLessonSort)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	for (int i = 0; i <= nLesson; i++)
	{
		fwrite(&myLesson[i], sizeof(Lesson), 1, fpWriteLessonSort);
	}
	fclose(fpWriteLessonSort);

}
void sortTeacher()
{

	FILE* fpNTeacher;
	fpNTeacher = fopen("nTeacher.dat", "rt");
	if (!fpNTeacher)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fseek(fpNTeacher, 0, SEEK_SET);
	fread(&nTeacher, sizeof(int), 1, fpNTeacher);
	fclose(fpNTeacher);


	FILE* fpReadTeacherSort;
	fpReadTeacherSort = fopen("Teacher.dat", "rt");
	if (!fpReadTeacherSort)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myTeacher[0], sizeof(Teacher), 1, fpReadTeacherSort);
	int indexT = 0;
	while (!feof(fpReadTeacherSort))
	{
		indexT++;
		fread(&myTeacher[indexT], sizeof(Teacher), 1, fpReadTeacherSort);

	}
	fclose(fpReadTeacherSort);


	for (int j = 0; j <= nTeacher; j++)
	{
		bool Finish = true;

		for (int i = 0; i < nTeacher - j; i++)
		{
			if (strcmp(myTeacher[i].ID, myTeacher[i + 1].ID) == 1)
			{
				Teacher temp;
				temp = myTeacher[i];
				myTeacher[i] = myTeacher[i + 1];
				myTeacher[i + 1] = temp;

				Finish = false;
			}
		}

		if (Finish) break;

	}


	FILE* fpWriteTeacherSort;
	fpWriteTeacherSort = fopen("Teacher.dat", "wt");
	if (!fpWriteTeacherSort)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	for (int i = 0; i <= nTeacher; i++)
	{
		fwrite(&myTeacher[i], sizeof(Teacher), 1, fpWriteTeacherSort);
	}
	fclose(fpWriteTeacherSort);

}
void sortStudent()
{

	FILE* fpNStudent;
	fpNStudent = fopen("nStudent.dat", "rt");
	if (!fpNStudent)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fseek(fpNStudent, 0, SEEK_SET);
	fread(&nStudent, sizeof(int), 1, fpNStudent);
	fclose(fpNStudent);


	FILE* fpReadStudentSort;
	fpReadStudentSort = fopen("Student.dat", "rt");
	if (!fpReadStudentSort)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	fread(&myStudent[0], sizeof(Student), 1, fpReadStudentSort);
	int indexS = 0;
	while (!feof(fpReadStudentSort))
	{
		indexS++;
		fread(&myStudent[indexS], sizeof(Student), 1, fpReadStudentSort);

	}
	fclose(fpReadStudentSort);


	for (int j = 0; j <= nStudent; j++)
	{
		bool Finish = true;

		for (int i = 0; i < nStudent - j; i++)
		{
			if (strcmp(myStudent[i].ID, myStudent[i + 1].ID) == 1)
			{
				Student temp;
				temp = myStudent[i];
				myStudent[i] = myStudent[i + 1];
				myStudent[i + 1] = temp;

				Finish = false;
			}
		}

		if (Finish) break;

	}


	FILE* fpWriteStudentSort;
	fpWriteStudentSort = fopen("Student.dat", "wt");
	if (!fpWriteStudentSort)
	{
		cout << "            -------------------------------------------------------- \n";
		cout << "            |              File Was Not Available...!              | \n";
		cout << "            |                    Try Again...!                     | \n";
		cout << "            -------------------------------------------------------- \n";
		exit(0);
	}
	for (int i = 0; i <= nStudent; i++)
	{
		fwrite(&myStudent[i], sizeof(Student), 1, fpWriteStudentSort);
	}
	fclose(fpWriteStudentSort);


}


//Edit
void editLesson(int indexEditLesson)
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(176); cout << "\n";
	cout << "            " << char(176) << "                                                       " << char(176) << "\n";
	cout << "            " << char(176) << "                    Lesson Edit Page                   " << char(176) << "\n";
	cout << "            " << char(176) << "                                                       " << char(176) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(176); cout << "\n\n";


	cout << "            " << "---------------------------------------------------------" << "\n";

	cin.ignore();
	cout << "               Lesson New Name: ";
	gets_s(myLesson[indexEditLesson].name);

	cout << "               Lesson New Code: ";
	char TempCode[15];
	cin >> TempCode;
	while (searchLessonATS(TempCode) >= 0)
	{
		cout << "              This Code Already Registered...! \n";

		cout << "               Lesson New Code: ";
		cin >> TempCode;
	}
	strcpy_s(myLesson[indexEditLesson].code, TempCode);

	cout << "               Lesson New Minimum Mark: ";
	cin >> myLesson[indexEditLesson].mark;

	cout << "            " << "--------------------------------------------------------- \n";

	cout << "\n            Input information is correct (y,n) ? ";
	char sure;
	cin >> sure;

	if (sure == 'y')
	{

		FILE* fpnLesson;
		fpnLesson = fopen("nLesson.dat", "rt");
		if (!fpnLesson)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fseek(fpnLesson, 0, SEEK_SET);
		fread(&nLesson, sizeof(int), 1, fpnLesson);
		fclose(fpnLesson);


		FILE* fpEditLesson;
		fpEditLesson = fopen("Lesson.dat", "wt");
		if (!fpEditLesson)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		for (int i = 0; i <= nLesson; i++)
		{
			fwrite(&myLesson[i], sizeof(Lesson), 1, fpEditLesson);
		}
		fclose(fpEditLesson);

		cout << "\n";
		cout << "            -------------------------------------------------------- \n";
		cout << "               " << myLesson[indexEditLesson].name << " / " << myLesson[indexEditLesson].code << " Edited Succesfuli... :)            \n";
		cout << "               The number of Lessons registered in the system: " << nLesson + 1 << "\n";
		cout << "            -------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		sortLesson();

		system("cls");

		lessonListAdmin();

	}
	else if (sure == 'n')
	{
		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |                  OK...! Regist again                  | \n";
		cout << "            --------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		system("cls");

		lessonListAdmin();

	}

	system("cls");

}
void editStudent(int indexEditStudent)
{

	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(176); cout << "\n";
	cout << "            " << char(176) << "                                                       " << char(176) << "\n";
	cout << "            " << char(176) << "                    Student Edit Page                  " << char(176) << "\n";
	cout << "            " << char(176) << "                                                       " << char(176) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(176); cout << "\n\n";


	cout << "            " << "---------------------------------------------------------" << "\n";

	cout << "               Student New FirstName: ";
	cin.ignore();
	gets_s(myStudent[indexEditStudent].firstName);

	cout << "               Student New LastName: ";
	gets_s(myStudent[indexEditStudent].lastName);

	cout << "               Student New ID: ";
	char TempID[15];
	cin >> TempID;
	while (searchStudentATS(TempID) >= 0)
	{
		cout << "              This ID Already Registered...! \n";

		cout << "               New ID Student: ";
		cin >> TempID;
	}
	strcpy_s(myStudent[indexEditStudent].ID, TempID);

	cout << "               Student New Username: ";
	cin >> myStudent[indexEditStudent].username;

	cout << "               Student New Password: ";
	cin >> myStudent[indexEditStudent].password;

	cout << "               New number of Student's Lessons: ";
	cin >> myStudent[indexEditStudent].nLesson;

	cout << "\n";
	for (int i = 0; i < myStudent[indexEditStudent].nLesson; i++)
	{
		cout << "                      Student's Lesson New code" << i + 1 << ": ";
		cin >> myStudent[indexEditStudent].lesson[i].code;

		while (searchLessonATS(myStudent[indexEditStudent].lesson[i].code) == -1)
		{
			cout << "                     Invalid Lesson Code...!" << "\n";

			cout << "                      Student's Lesson New code" << i + 1 << ": ";
			cin >> myStudent[indexEditStudent].lesson[i].code;
		}

		strcpy_s(myStudent[indexEditStudent].lesson[i].name, myLesson[searchLessonATS(myStudent[indexEditStudent].lesson[i].code)].name);
	}

	cout << "            " << "--------------------------------------------------------- \n";


	cout << "\n            Input Information is Correct (y,n) ? ";

	char sure;
	cin >> sure;


	if (sure == 'y')
	{

		FILE* fpNStudent;
		fpNStudent = fopen("nStudent.dat", "rt");
		if (!fpNStudent)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fseek(fpNStudent, 0, SEEK_SET);
		fread(&nStudent, sizeof(int), 1, fpNStudent);
		fclose(fpNStudent);


		FILE* fpEditStudent;
		fpEditStudent = fopen("Student.dat", "wt");
		if (!fpEditStudent)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		for (int i = 0; i <= nStudent; i++)
		{
			fwrite(&myStudent[i], sizeof(Student), 1, fpEditStudent);
		}
		fclose(fpEditStudent);

		cout << "\n";
		cout << "            -------------------------------------------------------- \n";
		cout << "               " << myStudent[indexEditStudent].firstName << " / " << myStudent[indexEditStudent].lastName << " Edited Succesfuli... :)            \n";
		cout << "               The number of Students registered in the system: " << nStudent + 1 << "\n";
		cout << "            -------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		sortStudent();

		system("cls");

		studentListAdmin();

	}
	else if (sure == 'n')
	{

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |                   OK...! Edit again                   | \n";
		cout << "            --------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		system("cls");

		studentListAdmin();

	}

	system("cls");


}
void editTeacher(int indexEditTeacher)
{
	cout << "\n";

	cout << "            "; for (int i = 0; i < 57; i++) cout << char(176); cout << "\n";
	cout << "            " << char(176) << "                                                       " << char(176) << "\n";
	cout << "            " << char(176) << "                    Teacher Edit Page                  " << char(176) << "\n";
	cout << "            " << char(176) << "                                                       " << char(176) << "\n";
	cout << "            "; for (int i = 0; i < 57; i++) cout << char(176); cout << "\n\n";


	cout << "            " << "---------------------------------------------------------" << "\n";

	cin.ignore();
	cout << "               Teacher New FirstName: ";
	gets_s(myTeacher[indexEditTeacher].firstName);

	cout << "               Teacher New LastName: ";
	gets_s(myTeacher[indexEditTeacher].lastName);

	cout << "               Teacher New ID: ";
	char TempID[15];
	cin >> TempID;
	while (searchTeacherATS(TempID) >= 0)
	{
		cout << "              This ID Already Registered...! \n";

		cout << "               Teacher New ID: ";
		cin >> TempID;
	}
	strcpy_s(myTeacher[indexEditTeacher].ID, TempID);

	cout << "               Teacher New Username: ";
	cin >> myTeacher[indexEditTeacher].username;

	cout << "               Teacher New Password: ";
	cin >> myTeacher[indexEditTeacher].password;

	cout << "               New number of Teacher's Lessons: ";
	cin >> myTeacher[indexEditTeacher].nLesson;

	cout << "\n";
	for (int i = 0; i < myTeacher[indexEditTeacher].nLesson; i++)
	{
		cout << "                      New Teacher's Lesson code" << i + 1 << ": ";
		cin >> myTeacher[indexEditTeacher].lesson[i].code;


		while (searchLessonATS(myTeacher[indexEditTeacher].lesson[i].code) == -1)
		{
			cout << "                     Invalid Lesson Code...!" << "\n";

			cout << "                      New Teacher's Lesson code" << i + 1 << ": ";
			cin >> myTeacher[indexEditTeacher].lesson[i].code;
		}

		strcpy_s(myTeacher[indexEditTeacher].lesson[i].name, myLesson[searchLessonATS(myTeacher[indexEditTeacher].lesson[i].code)].name);
	}

	cout << "            " << "--------------------------------------------------------- \n";

	cout << "\n            Input Information is Correct (y,n) ? ";

	char sure;
	cin >> sure;

	if (sure == 'y')
	{

		FILE* fpNTeacher;
		fpNTeacher = fopen("nTeacher.dat", "rt");
		if (!fpNTeacher)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		fseek(fpNTeacher, 0, SEEK_SET);
		fread(&nTeacher, sizeof(int), 1, fpNTeacher);
		fclose(fpNTeacher);


		FILE* fpEditTeacher;
		fpEditTeacher = fopen("Teacher.dat", "wt");
		if (!fpEditTeacher)
		{
			cout << "            -------------------------------------------------------- \n";
			cout << "            |              File Was Not Available...!              | \n";
			cout << "            |                    Try Again...!                     | \n";
			cout << "            -------------------------------------------------------- \n";
			exit(0);
		}
		for (int i = 0; i <= nTeacher; i++)
		{
			fwrite(&myTeacher[i], sizeof(Teacher), 1, fpEditTeacher);
		}
		fclose(fpEditTeacher);

		cout << "\n";
		cout << "            -------------------------------------------------------- \n";
		cout << "               " << myTeacher[indexEditTeacher].firstName << " / " << myTeacher[indexEditTeacher].lastName << " Edited Succesfuli... :)            \n";
		cout << "               The number of Teachers registered in the system: " << nTeacher + 1 << "\n";
		cout << "            -------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		sortTeacher();

		system("cls");

		teacherListAdmin();

	}
	else if (sure == 'n')
	{

		cout << "\n";
		cout << "            --------------------------------------------------------- \n";
		cout << "            |                   OK...! Edit again                   | \n";
		cout << "            --------------------------------------------------------- \n";

		chrono::steady_clock::time_point tend = chrono::steady_clock::now() + chrono::seconds(5);
		while (chrono::steady_clock::now() < tend)
		{

		}

		system("cls");

		teacherListAdmin();

	}

	system("cls");

}
