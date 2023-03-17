#include<iostream>
#include<string>
using namespace std;
int main()
{
	struct{
		int empid;
		string empname;
		string empdesg;
		int empage;
		string empnbr;
		float empslr;
	} emp1, emp2, emp3, emp4, emp5, emp6;
	 
	 emp1.empid=1234;
	 emp1.empname="rakesh master";
	 emp1.empdesg="developer";
	 emp1.empage=26;
	 emp1.empnbr="9191919191";
	 emp1.empslr=45067.76;
	 
	  emp2.empid=1235;
	 emp2.empname=" aggi petti macha";
	 emp2.empdesg="developer";
	 emp2.empage=27;
	 emp2.empnbr="9292929292";
	 emp2.empslr=46067.76;
	 
	  emp3.empid=1236;
	 emp3.empname=" thonda";
	 emp3.empdesg="developer";
	 emp3.empage=24;
	 emp3.empnbr="9393939393";
	 emp3.empslr=44567.76;
	 
	 	  emp4.empid=1237;
	 emp4.empname="dhampalam ";
	 emp4.empdesg="developer";
	 emp4.empage=27;
	 emp4.empnbr="9494949494";
	 emp4.empslr=33567.76;
	 
	   emp5.empid=1238;
	 emp5.empname="avesam star ";
	 emp5.empdesg="developer";
	 emp5.empage=26;
	 emp5.empnbr="9595959595";
	 emp5.empslr=78567.76;
	 
	   emp6.empid=1239;
	 emp6.empname="quatar papa ";
	 emp6.empdesg="developer";
	 emp6.empage=27;
	 emp6.empnbr="9696969696";
	 emp6.empslr=55567.76;
	  
	   cout<<"the detailes of employee-1:"<<endl;
	  cout<<"id: \t"<<emp1.empid<<endl<< "name: \t "<<emp1.empname<<endl<<"designation: "<<emp1.empdesg<<endl;
	  cout<<"age: \t"<<emp1.empage<<endl<<"phone no: x	"<<emp1.empnbr<<endl<<"salary: \t"<<emp1.empslr<<endl<<endl;
	  
	   cout<<"the detailes of employee-2:"<<endl;
	  cout<<"id: \t "<<emp2.empid<<endl<< "name: \t"<<emp2.empname<<endl<<"designation: "<<emp2.empdesg<<endl;
	  cout<<"age:\t "<<emp2.empage<<endl<<"phone no:  "<<emp2.empnbr<<endl<<"salary:\t "<<emp2.empslr<<endl<<endl;
	  
	   cout<<"the detailes of employee-3:"<<endl;
	  cout<<"id: \t "<<emp3.empid<<endl<< "name:\t "<<emp3.empname<<endl<<"designation: "<<emp3.empdesg<<endl;
	  cout<<"age:\t "<<emp3.empage<<endl<<"phone no:  "<<emp3.empnbr<<endl<<"salary: \t"<<emp3.empslr<<endl<<endl;
	  
	   cout<<"the detailes of employee-4:"<<endl;
	  cout<<"id: \t"<<emp4.empid<<endl<< "name:\t "<<emp4.empname<<endl<<"designation: "<<emp4.empdesg<<endl;
	  cout<<"age: \t "<<emp4.empage<<endl<<"phone no: "<<emp4.empnbr<<endl<<"salary: "<<emp4.empslr<<endl<<endl;
	  
	   cout<<"the detailes of employee-5:"<<endl;
	  cout<<"id: \t"<<emp5.empid<<endl<< "name:\t "<<emp5.empname<<endl<<"designation: "<<emp5.empdesg<<endl;
	  cout<<"age: \t"<<emp5.empage<<endl<<"phone no:   "<<emp5.empnbr<<endl<<"salary:\t "<<emp5.empslr<<endl<<endl;
	  
	  cout<<"the detailes of employee-6:"<<endl;
	  cout<<"id: \t"<<emp6.empid<<endl<< "name: \t"<<emp6.empname<<endl<<"designation: "<<emp6.empdesg<<endl;
	  cout<<"age: "<<emp6.empage<<endl<<"phone no: "<<emp6.empnbr<<endl<<"salary: "<<emp6.empslr<<endl;
	  

	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  

	
	
	return 0;
}