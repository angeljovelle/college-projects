import java.util.Scanner;

public class Caballero_Angel_Student {
    private int studentID;
    private String name;
    private double quiz1, quiz2, quiz3, average, grade;


    public void enterDetails(){
        Scanner sc = new Scanner(System.in);
        boolean validInput = false;

        System.out.print("Enter student id: ");
        while(!validInput){
            try{
                studentID = Integer.parseInt(sc.nextLine());
                validInput = true;
            } 
            catch(NumberFormatException e){
                System.out.println("INVALID INPUT! Please enter numbers only.");
            }
        }
        validInput = false;

        System.out.print("Enter student name: ");
        while (!validInput) {
           String input;
            input = sc.nextLine();
            if (input.matches("[a-zA-Z]+")){
                name = input;
                validInput = true;
            }
            else{
                System.out.println("INVALID INPUT! Please enter letters only");
            }
        }

        System.out.print("Enter Quiz 1: ");
        while(!sc.hasNextDouble() || !isValidGrade(sc.nextDouble())){
            System.out.println("INVALID INPUT! Please enter grades only");
            sc.nextLine();
        }
        this.quiz1 = sc.nextDouble();

        System.out.print("Enter Quiz 2: ");
        while(!sc.hasNextDouble() || !isValidGrade(sc.nextDouble())){
            System.out.println("INVALID INPUT! Please enter grades only");
            sc.nextLine();
        }
        this.quiz2 = sc.nextDouble();

        System.out.print("Enter Quiz 3: ");
        while(!sc.hasNextDouble() || !isValidGrade(sc.nextDouble())){
            System.out.println("INVALID INPUT! Please enter grades only");
            sc.nextLine();
        }
        this.quiz3 = sc.nextDouble();

        this.average = (quiz1 + quiz2 + quiz3) / 3.0;

        if(this.average >= 90)
            this.grade = 1.0;
        else if(this.average >= 80)
            this.grade = 2.5;
        else if (this.average >= 70)
            this.grade = 3.0;
        else
            this.grade = 5.0;
    }

    private boolean isValidGrade(double grade){
        return grade >= 0 && grade <= 100;
    }
    

    public void showDetails(){
        System.out.println("Student ID: " + getStudentID());
        System.out.println("Name: " + getName());
        System.out.printf("Quiz 1: %.2f\n", getQuiz1());
        System.out.printf("Quiz 2: %.2f\n", getQuiz2());
        System.out.printf("Quiz 3: %.2f\n", getQuiz3());
        System.out.printf("Average: %.2f\n", average);
        System.out.println("Grade: " + getGrade());
    }

    public void setStudentID(int studentID){
        this.studentID = studentID;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setQuiz1(double quiz1){
        this.quiz1 = quiz1;
    }

    public void setQuiz2(double quiz2){
        this.quiz2 = quiz2;
    }

    public void setQuiz3(double quiz3){
        this.quiz3 = quiz3;
    }

    public void setAverage(double average){
        this.average = average;
    }

    public void setGrade(double grade){
        this.grade = grade;
    }

    public int getStudentID(){
        return studentID;
    }

    public String getName(){
        return name;
    }

    public double getQuiz1(){
        return quiz1;
    }

    public double getQuiz2(){
        return quiz2;
    }

    public double getQuiz3(){
        return quiz3;
    }

    public double getAverage(){
        return average;
    }

    public double getGrade(){
        return grade;
    }

}