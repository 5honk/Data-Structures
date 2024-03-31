 
// Creating Arrays in Java
 
 public class Array {
public static void main (String[] args) {

        // Constructor of Array
            int[] array = {1,2,3,4};
            System.out.println(array[2]);

        // Iterating through every Array index
            int i = 0;
            for (i = 0; i < 4; i++) {
                System.out.println(array[i]);
            }
        
        // Overwritting an index
            array[2] = 7;
            System.out.println(array[2]);
    }
 }