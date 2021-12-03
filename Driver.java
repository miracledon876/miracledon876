/*
Adrian Bennett's Submission February 21, 2020 Analysis of Algorithm

Adrian Bennett – 1800826
Jehmoni Samuels – 1804291
Daniel Francis – 1807935
*/
package domain;

import java.io.FileNotFoundException;
import java.util.Scanner;

public class Driver
{
    // Driver code
    public static void main(String[] args)
    {

        Scanner sc = new Scanner(System.in);
        int x = 0;
        //Menu
        System.out.println("****************************************");
        System.out.println("| Travelling Salesman Problem Solution |");
        System.out.println("****************************************");
        System.out.println("|                                      |");
        System.out.println("| 1. Find Optimal Cycle                |");
        System.out.println("|                                      |");
        System.out.println("| 2. Exit                              |");
        System.out.println("****************************************");

        int choice = 0;

        do {
            try {
                System.out.println("| Enter your choice:                   |");
                choice = Integer.parseInt(sc.nextLine());

                if (choice != 1 && choice != 2)
                {
                    throw new ArithmeticException();
                }
                x = 1;
            } catch (ArithmeticException e) {

                System.out.println("Invalid choice - You must select 1 or 2. ");

            }
        } while (x == 0);


        switch (choice) {
            case 1:

                System.out.println("****************************************");
                System.out.println("| Enter total number of cities:        |");
                System.out.println("|                                      |");
                int numV = Integer.parseInt(sc.nextLine());

                try
                {
                    Thread.sleep(2500);
                }
                catch (InterruptedException e)
                {
                    e.printStackTrace();
                }

                BnbTSP bnbTSP = new BnbTSP();
                bnbTSP.setN(numV);

                int[] finalPath;

                System.out.println("****************************************");
                System.out.println("| Travelling Salesman Problem Solution |");
                System.out.println("****************************************");
                System.out.println("|                                      |");
                System.out.println("| Reading values from file...          |");
                System.out.println("|                                      |");
                System.out.println("****************************************");
                System.out.println();

                int[][] graph = new int[numV][numV];

                Read2D r2d = new Read2D();
                try
                {
                    graph = r2d.readArray(numV);
                }
                catch (FileNotFoundException e)
                {
                    e.printStackTrace();
                }

                System.out.println();
                System.out.println("****************************************");
                System.out.println();

                bnbTSP.TSP(graph);
                finalPath = bnbTSP.getFinal_path();

                System.out.printf("The minimum cost is: %d\n", bnbTSP.getFinal_res());
                System.out.println("Path Taken : ");
                for (int i = 0; i <= bnbTSP.getN(); i++)
                {
                    System.out.printf("%d", finalPath[i] );
                    if (i < bnbTSP.getN())
                    {
                        System.out.printf(" to ");
                    }
                }
                break;

            case 2:
                System.out.println("****************************************");
                System.out.println("| Travelling Salesman Problem Solution |");
                System.out.println("****************************************");
                System.out.println("|                                      |");
                System.out.println("|        Program will now end.         |");
                System.out.println("|                                      |");
                System.out.println("****************************************");
                try
                {
                    Thread.sleep(4000);
                }
                catch (InterruptedException e)
                {
                    e.printStackTrace();
                }
                System.exit(0);
                break;

            default:
        }
    }
}