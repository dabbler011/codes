import java.util.*;
import java.lang.String;


class Batch {
	private int NoOfStudents,AssignmentNumber,PlagarismListSize;
	private Student[] students;
	private Assignment[] assignments;
	Scanner inpt;

	/*contructor of batch class*/
	Batch(Scanner inpt) {
		NoOfStudents = 0;
		this.inpt = inpt;
        AssignmentNumber = 0;
        PlagarismListSize = 0;

	}
	/*function to get input fromm stdin */
	public void getInput() {
		int i;
		NoOfStudents = inpt.nextInt ();
		students = new Student[NoOfStudents];
		for (i = 0;i < NoOfStudents;i++) {
			students[i] = new Student(inpt);
		}
		for (i = 0;i < NoOfStudents; i++) {
			students[i].getInput();				
		}

		AssignmentNumber = inpt.nextInt();
		assignments = new Assignment[AssignmentNumber];
		for (i = 0;i < AssignmentNumber; i++) {
			assignments[i] = new Assignment(inpt);				
		}
		for (i = 0;i < AssignmentNumber; i++) {
			assignments[i].getInput();				
		}

		PlagarismListSize = inpt.nextInt();
		while (PlagarismListSize>0) {
			String Roll = inpt.next();
			int indx = search(Roll);
			students[indx].Plags(inpt.next(),PlagarismListSize);
			PlagarismListSize--;
		}
	}
	/*function to search index of a student by its roll number*/
	public int search(String Roll) {
		int i;
		for (i = 0;i < NoOfStudents;i++) {
			if(Roll.equalsIgnoreCase(students[i].getRoll())){
				return i;
			}
		}
		return -1;
	}
    /*function to show output*/
    public void Output () {
        int i,j,type,total;
        for (i = 0;i < NoOfStudents;i++) {
            total = 0;
            type = students[i].ShowOutput();
            Sort (type);
            for (j = 0;j < AssignmentNumber;j++) {
                total += assignments[j].print(students[i].getintell_level (),students[i].SearchPlag(assignments[j].getcourseid()));
            }
            System.out.println(total+"");
        }
    }   

    /*function to sort array of assignments in accordance of type of students*/
    private void Sort (int Type) {
        if (Type == 0) {
            Arrays.sort(assignments, new Comparator<Assignment>() {
                @Override
                public int compare(Assignment o1, Assignment o2) {
                    if (o1.getyear() != o2.getyear()) {
                        return Integer.compare(o1.getyear(),o2.getyear());
                    }
                    else if (o1.getmonth() != o2.getmonth()) {
                        return Integer.compare(o1.getmonth(),o2.getmonth());
                    }
                    else if (o1.getdate() != o2.getdate()) {
                        return Integer.compare(o1.getdate(),o2.getdate());
                    }
                    else if (o1.getassid().length() != o2.getassid().length()) {
	        			return Integer.compare(o1.getassid().length(),o2.getassid().length());
		        	}
		        	else {
		        		return o1.getassid().compareTo(o2.getassid());
		        	}
                }
            });
        }
        else if (Type == 1) {
            Arrays.sort(assignments, new Comparator<Assignment>() {
                @Override
                public int compare(Assignment o1, Assignment o2) {
                    if (o1.getbmarks() != o2.getbmarks()) {
                        return Integer.compare(o2.getbmarks(),o1.getbmarks());
                    }
                    else if (o1.getassid().length() != o2.getassid().length()) {
	        			return Integer.compare(o1.getassid().length(),o2.getassid().length());
		        	}
		        	else {
		        		return o1.getassid().compareTo(o2.getassid());
		        	}
                }
            });
        }
        else{
            Arrays.sort(assignments, new Comparator<Assignment>() {
                @Override
                public int compare(Assignment o1, Assignment o2) {
                	if (o1.getcourseid()==o2.getcourseid()){
                    	return o1.getcourseid().compareTo(o2.getcourseid());
                	}
                    else if (o1.getassid().length() != o2.getassid().length()) {
	        			return Integer.compare(o1.getassid().length(),o2.getassid().length());
		        	}
		        	else {
		        		return o1.getassid().compareTo(o2.getassid());
		        	}
                }
            });
        }
    }
}

class Assignment {
	private class Date {
	    private int deadline_day,deadline_month,deadline_year;
	    /*constructor of date class*/
	    Date () {
	        deadline_day = 0;
	        deadline_month = 0;
	        deadline_year = 0;
	    }
	    /*setter to set value of day*/
	    public void setDay (int Day) {
	        deadline_day = Day;
	    }
	    /*setter to set value of month*/
	    public void setMonth (int Month) {
	        deadline_month = Month;
	    }
	    /*setter to set value of year*/
	    public void setYear (int Year) {
	        deadline_year = Year;
	    }
	    /*getter to get value of day*/
	    public int getDay () {
	        return deadline_day;
	    }
	    /*getter to get value of month*/
	    public int getMnth () {
	        return deadline_month;
	    }
	    /*getter to get value of year*/
	    public int getYear () {
	        return deadline_year;
	    }
	    
	}
	private String AssignmentID,CourseID;
	private int base_marks,difficulty;
    Date date;
	Scanner input;
	/*constructor of assignment class*/
	Assignment(Scanner input) {
		AssignmentID = "";
		CourseID = "";
		base_marks = 0;
		difficulty = 0;
		this.input = input;
	}

	/*function to get details of assignmentsfrom stdin*/
	public void getInput () {
		AssignmentID = input.next ();
		CourseID = input.next ();
        date = new Date();
		date.setDay(input.nextInt ());
		date.setMonth(input.nextInt ());
		date.setYear(input.nextInt ());
		base_marks = input.nextInt ();
		difficulty = input.nextInt ();
	}

	/*getter to get the value of deadline year*/
	public int getyear () {
		return date.getYear();
	}
	
	/*getter to get the value of deadline month*/
	public int getmonth () {
		return date.getMnth();
	}

	/*getter to get the value of deadline day*/
	public int getdate () {
		return date.getDay();
	}

	/*getter to get the value of course id*/
	public String getcourseid () {
		return CourseID;
	}
    /*getter to get the value of base marks*/
	public int getbmarks () {
		return base_marks;
	}
	/*getter to get assignment id*/
	public String getassid(){
		return AssignmentID;
	}
	/*Print Assignments*/
	public int print (int Factor,int PlagCheck) {
            if(Factor < difficulty) {
                return 0;
            }
            Factor *= PlagCheck;
            System.out.println (AssignmentID+" "+CourseID+" "+Factor*base_marks);
            return base_marks*Factor;
	}
}

class Student {
	private String RollNumber,Name;
	private int IntelligenceLevel,type,PlagarismListSize;
	private String[] Plagarism;
	Scanner inpt;

	/*Constructor of class Student*/
	Student(Scanner inpt) {
		RollNumber = "";
		Name = "";
		IntelligenceLevel = 0;
        type = -1;
		this.inpt = inpt;
		PlagarismListSize = 0;
	}

	/*function to get roll number, name , intelligent level as input*/
	public void getInput () {
		RollNumber = inpt.next();
		Name = inpt.next();
		IntelligenceLevel = inpt.nextInt();	
        type = inpt.nextInt();
	}
	/*function to store plaged subjects for every student*/
	public void Plags (String SubName, int PlagSize) {
		int i;
		if (PlagarismListSize == 0){
			Plagarism = new String[PlagSize];
			for (i = 0;i < PlagSize;i++) {
				Plagarism[i] = new String("");
			}
		}
		Plagarism[PlagarismListSize] = SubName;
		PlagarismListSize++;
	} 

    /*getter to get value of intelligence level*/
    public int getintell_level () {
        return IntelligenceLevel;
    }
    /*getter to get roll number*/
    public String getRoll() {
    	return RollNumber;
    }
    /*function to check if a subject is in plag list of the student*/
    public int SearchPlag(String CrseID) {
    	int i;
    	for (i = 0;i < PlagarismListSize;i++) {
    		if (CrseID.equals(Plagarism[i])){
    			return 0;
    		}
    	}
    	return 1;
    }
        
	//Function to show output
	public int ShowOutput () {
		int i,total = 0;
		System.out.println (RollNumber+ " " + Name);
        return type;
	}
}

/* Main Class */
class ques2
{

    public static void main(String args[] ) throws Exception {
    	int NoOfBatches;
        Batch[] Batches;
    	
    	Scanner in = new Scanner (System.in);
    	NoOfBatches = in.nextInt();
    	Batches = new Batch[NoOfBatches];
    	int i;
    	for (i = 0;i<NoOfBatches;i++) {
    		Batches[i] = new Batch(in);
    	}	
    	for (i = 0;i<NoOfBatches;i++) {
    		Batches[i].getInput ();
            Batches[i].Output();
    	}
    }
}