import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Caballero_Angel_StudentMain{

    private static ArrayList<Caballero_Angel_Student> students = new ArrayList<>();
    private static Scanner sc = new Scanner(System.in);

    public static void main(String[] args){
        int choice;
        do {
            System.out.println("\n<1> ADD STUDENT\n<2> EDIT STUDENT\n<3> SEARCH STUDENT VIA NAME\n<4> DELETE STUDENT VIA STUDENT ID\n<5> PRINT ALL\n<6> SAVE AND EXIT");
            System.out.print("Enter Choice: ");
            while (!sc.hasNextInt()){
                System.out.print("INVALID INPUT! Enter only choices 1-6: ");
                sc.next();
            }
            choice = sc.nextInt();

            switch (choice){
                case 1:
                    addStudent();
                    break;
                case 2:
                    //editStudent();
                    break;
                case 3:
                    searchStudent();
                    break;
                case 4:
                    //deleteStudent();
                    break;
                case 5:
                    printAll();
                    break;
                case 6:
                    saveFile();
                    break;
                default:
                    System.out.println("Invalid choice. Please select again.");
            }
        } while (choice != 6);
    }

    private static void addStudent(){
        Caballero_Angel_Student student = new Caballero_Angel_Student();
        student.enterDetails();
        students.add(student);
    }

    private static void searchStudent(){
        if (students.isEmpty()){
            System.out.println("NO DATA FOUND");
            return;
        }

        System.out.print("Enter student name to search: ");
        String searchName = sc.next();
        boolean found = false;

        for (Caballero_Angel_Student student : students){
            if (student.getName().equalsIgnoreCase(searchName)){
                student.showDetails();
                found = true;
                break;
            }
        }

        if(!found)
            System.out.println("NO DATA FOUND");
    }
    
    private static void printAll(){
        if (students.isEmpty()){
            System.out.println("NO DATA FOUND");
            return;
        }

        for (Caballero_Angel_Student student : students){
            student.showDetails();
            System.out.println();
        }
    }

    private static void saveFile(){
        if (students.isEmpty()){
            System.out.println("THERE IS NO DATA TO SAVE");
            return;
        }

        System.out.print("Enter file name: ");
        String fileName = sc.next();

        try (FileWriter writer = new FileWriter(fileName)){
            for (Caballero_Angel_Student student : students){
                writer.write(student.getStudentID() + "," +
                        student.getName() + "," +
                        student.getQuiz1() + "," +
                        student.getQuiz2() + "," +
                        student.getQuiz3() + "," +
                        student.getAverage() + "," +
                        student.getGrade() + "\n");
            }
            System.out.println("SAVING DATA TO" + fileName);
        }catch (IOException e){}

        System.exit(0);
    }
}