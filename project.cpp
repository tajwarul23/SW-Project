 #include<iostream>

#include<conio.h>

#include<windows.h>

using namespace std;

struct student{

	
    string name,department,grade,result;
    int id,semester,CSE_101,CSE_102,CSE_103,sum;
    float avg;

};

int total=0;

student a[100];

void studentData(){

	int user=0;
    

	cout<<"How many Students data do you want to enter??"<<endl;

	cin>>user;
    /*
    ----------------Taking Input From User--------------------
    */
	for(int i=total;i<total+user;i++){

		cout<<"Enter data of Student "<<i+1<<endl<<endl;

		cout<<"Enter Student's name: ";

		cin>>a[i].name;

		cout<<"Enter id: ";

		cin>>a[i].id;

		cout<<"Enter Department: ";

		cin>>a[i].department;

		cout<<"Enter Semester: ";

		cin>>a[i].semester;

		cout<<"Enter Marks of cse_101: ";

		cin>>a[i].CSE_101;
        
		cout<<"Enter Marks of cse_102: ";

		cin>>a[i].CSE_102;
		cout<<"Enter Marks of cse_103: ";

		cin>>a[i].CSE_103;

    /* ------------Calculating Total Marks and Average Marks---------------
    */
        a[i].sum=a[i].CSE_101+a[i].CSE_102+a[i].CSE_103;
        a[i].avg=a[i].sum / 3;
        if(a[i].avg>=80){
            a[i].result="PASS";
            a[i].grade="A";
        }
        else if(a[i].avg<=60){
            a[i].result="PASS";
            a[i].grade="B";
        }
        else if(a[i].avg<=33){
            a[i].result="FAIL";
            a[i].grade="-";
        }
        
	}
    
	total=total+user;
    
    

}
/*
-------------Show Function for displaying Stored Data--------------
*/

void show(){

	if(total!=0){

	for(int i=0;i<total;i++){

		cout<<"Data of Student "<<i+1<<endl;

		cout<<"Name: "<<a[i].name<<endl;

		cout<<"ID: "<<a[i].id<<endl;

		cout<<"Department: "<<a[i].department<<endl;

		cout<<"Semester: "<<a[i].semester<<endl;

		cout<<"Total Number: "<<a[i].sum<<endl;
        
        cout<<"Result: "<<a[i].result<<endl;

        cout<<"Grade: "<<a[i].grade<<endl;

        cout<<"Percentage: "<<a[i].avg<<"%"<<endl;


	}

    }

    else{

    	cout<<"No data is entered"<<endl;

	}

}
/*
---------------Search Function for searching among existing Data----------------
*/
void search(){

	if(total!=0){

	int idS;

	cout<<"Enter id of Student which you want to search"<<endl;

	cin>>idS;

	for(int i=0;i<total;i++){

		if(a[i].id==idS){

		cout<<"Data of Student "<<i+1<<endl;

		cout<<"Name: "<<a[i].name<<endl;

		cout<<"ID: "<<a[i].id<<endl;

		cout<<"Department: "<<a[i].department<<endl;

		cout<<"Semester: "<<a[i].semester<<endl;

		cout<<"Total Number: "<<a[i].sum<<endl;
        
        cout<<"Result: "<<a[i].result<<endl;

        cout<<"Grade: "<<a[i].grade<<endl;

		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;

}

}
/*
--------------Update Function for Updating/Editing existing Data-------------
*/
void update(){

	if(total!=0){

	int id;

	cout<<"Enter id of Student which you want to update"<<endl;

	cin>>id;

	for(int i=0;i<total;i++){

		if(a[i].id==id){

		cout<<"Old data of Student "<<i+1<<endl;

		cout<<"Name: "<<a[i].name<<endl;

		cout<<"ID: "<<a[i].id<<endl;

		cout<<"Department: "<<a[i].department<<endl;

		cout<<"Semester: "<<a[i].semester<<endl;

		cout<<"Total Number: "<<a[i].sum<<endl;
        
        cout<<"Result: "<<a[i].result<<endl;

        cout<<"Grade: "<<a[i].grade<<endl;

        cout<<"Total: "<<a[i].sum<<endl;

        cout<<"Percentage: "<<a[i].avg<<"%"<<endl;

        cout<<"Result: "<<a[i].result<<endl;

		cout<<"\nEnter new data"<<endl;

		cout<<"Enter Student name: ";

		cin>>a[i].name;

		cout<<"Enter id: ";

		cin>>a[i].id;

		cout<<"Enter Department: ";

		cin>>a[i].department;

		cout<<"Enter Semester: ";

		cin>>a[i].semester;

		cout<<"Enter Marks of cse_101: ";

		cin>>a[i].CSE_101;
        
		cout<<"Enter Marks of cse_102: ";

		cin>>a[i].CSE_102;
		cout<<"Enter Marks of cse_103: ";

		cin>>a[i].CSE_103;
        int newSum=a[i].CSE_101+a[i].CSE_102+a[i].CSE_103;
        a[i].sum=newSum;
		float newAvg=a[i].sum/3;
		a[i].avg=newAvg;
		break;

		}

		if(i==total-1){

			cout<<"No such record found"<<endl;

		}

	}

}else{

	cout<<"No data is entered"<<endl;

}

}
/*
-------------Delete Function for Deleting Specific record or Full Data----------
*/
void del(){

	if(total!=0){

	int press;

	cout<<"Press 1 to delete specific record"<<endl;

	cout<<"Press 2 to delete full record"<<endl;

	cin>>press;

	if(press==1){

		int id;

		cout<<"Enter id of student which you want to delete"<<endl;

		cin>>id;

		for(int i=0;i<total;i++){

			if(a[i].id==id){

				a[i].name=a[i+1].name;

				a[i].id=a[i+1].id;

				a[i].department=a[i+1].department;

				a[i].semester=a[i+1].semester;

				a[i].CSE_101=a[i+1].CSE_101; 

				a[i].CSE_102=a[i+1].CSE_102;

				a[i].CSE_103=a[i+1].CSE_103;

				a[i].sum=a[i+1].sum;

				a[i].avg=a[i+1].avg;

				a[i].grade=a[i+1].grade;

				a[i].result=a[i+1].result;

                


				


				total--;

				cout<<"Your required record is deleted"<<endl;

				break;

			}

			if(i==total-1){

			cout<<"No such record found"<<endl;

		}

		}

	}

	else if(press==2){

		total=0;

		cout<<"All record is deleted"<<endl;

	}

	else{

		cout<<"Invalid Input"<<endl;

	}

}else{

	cout<<"No data is entered"<<endl;

}

}

main(){

	cout<<"\n\n\t\tStudent Data and Result Management System"<<endl;

/*
--------------Sign Up Activities-------------
*/

	  string username,password;

    cout<<"\n\n\n\t\t******Signup******"<<endl;

	cout<<"\t\tEnter new username: ";

	getline(cin,username);

	cout<<"\t\tEnter new password: ";

	cin>>password;

	cout<<"\t\tYour new id is creating please wait";

	for(int i=0;i<6;i++)

	{

		cout<<".";

		Sleep(500);

	}

	cout<<"\n\t\tYour id created successfully";

	Sleep(2000);

	start:

	system("CLS");

/*
--------------Login Activities------------------
*/

	string usrn,pswd;

	cout<<"\n\n\t\tStudent Result System"<<endl;

	cout<<"\n\n\n\t\t   LOGIN"<<endl;

	cout<<"\t\tEnter username: ";

	cin>>usrn;

	cout<<"\t\tEnter password: ";

	cin>>pswd;

	if(usrn==username&&pswd==password)

	{

	system("CLS");

	char ch;

	while(1){

	cout<<"\n\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to update data"<<endl;

	cout<<"Press 5 to delete data"<<endl;

	cout<<"Press 6 to logout"<<endl;

	cout<<"Press 7 to exit"<<endl;

	ch=getch();

	system("CLS");

	switch(ch){

		case '1':

			studentData();

			break;

		case '2':

			show();

			break;

		case '3':

			search();

			break;

		case '4':

			update();

			break;

		case '5':

			del();

			break;

		case '6':

			goto start;

			break;

		case '7':

			exit(0);

			break;

		default:

			cout<<"\aInvalid Input"<<endl;

			break;

	}

}

}

  else if(usrn!=username)

  {

  	cout<<"\t\t\aInvalid username please try again";

  	Sleep(3000);

  	goto start;

  }

  else if(pswd!=password)

  {

  	cout<<"\t\t\aInvalid password please try again";

  	Sleep(3000);

  	goto start;

  }

  else{

  	cout<<"\t\t\aInvalid username and password";

  	Sleep(3000);

  	goto start;

  }

}