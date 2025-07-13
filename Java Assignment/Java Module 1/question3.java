//Write a Java program that takes a year from user and print 
//whether that year is a leap year or not.

package com.core;

import java.util.Scanner;

public class question3 {
	public static void main(String[] args) {
		int a;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the year:");
		a=sc.nextInt();
		
		if(a%4==0) {
			
			System.out.println("It is a leap year");
		}else {
			
			System.out.println("It is not a leap year");
		}
	}

}
