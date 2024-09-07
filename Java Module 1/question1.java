package com.core;

import java.util.Scanner;

//• Write a Java program to Take three numbers from the user 
 //and print the greatest number. 
public class question1 {
	public static void main(String[]args) {
		int a,b,c;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter A");
		a=sc.nextInt();
		
		System.out.println("Enter B");
		b=sc.nextInt();
		
		System.out.println("Enter C");
		c=sc.nextInt();
		
		if(a>b) {
			if(a>c)
			System.out.println("A is Greater");
			else {
				System.out.println("C is greater");
			}
		}
		if(b>c) {
			System.out.println("B is greater");
		}else {
			System.out.println("C is greater");
		}
	}
	

}
