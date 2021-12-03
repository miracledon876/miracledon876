/*
Adrian Bennett's Submission February 21, 2020 Analysis of Algorithm

Adrian Bennett – 1800826
Jehmoni Samuels – 1804291
Daniel Francis – 1807935
*/
package domain;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Arrays;
import java.util.Scanner;

public class Read2D
{
    public int[][] readArray (int rowCol) throws FileNotFoundException
    {
        Scanner sc = new Scanner(new BufferedReader(new FileReader("C:\\Users\\benne\\IdeaProjects\\AofA.TSP\\JamaicaTSP.csv")));
        int [][] myArray = new int[rowCol][rowCol];
        while(sc.hasNextLine())
        {
            for (int i=0; i<myArray.length; i++)
            {
                String[] line = sc.nextLine().trim().split(" ");
                for (int j=0; j<line.length; j++)
                {
                    myArray[i][j] = Integer.parseInt(line[j]);
                }
            }
        }

        for (int i = 0; i < myArray.length; i++)//this equals to the row in our matrix.
        {
            for (int j = 0; j < myArray[i].length; j++) //this equals to the column in each row.
            {
                System.out.print(myArray[i][j] + " ");
            }
            System.out.println(); //change line on console as row comes to end in the matrix.
        }
        return myArray;
    }
}
