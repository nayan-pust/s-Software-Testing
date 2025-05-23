package Study;
import java.io.*;
public class CEException {
    public static void main(String[] args) throws Exception {
        try {
            Class.forName("Study.ExistClass");
            System.out.println("Class Found inside package.\n---------");
        } catch(ClassNotFoundException e) {
            System.out.println("CLassNotFoundException");
        }
        System.out.println("EOF exception for output ");

        try {
            DataInputStream dis = new DataInputStream(new FileInputStream("input.txt"));
            while (true) {
                try {
                    byte ch = dis.readByte();
                    System.out.print((char) ch);
                } catch (EOFException e) {
                    System.out.println("\nEOFException caught: End of file reached.");
                    break;
                }
            }
            dis.close();
        } catch (FileNotFoundException e) {
            System.out.println("FileNotFoundException: Make sure 'input.txt' exists in the working directory.");
        } catch (IOException e) {
            System.out.println("IOException occurred: " + e.getMessage());
        }
    }
}