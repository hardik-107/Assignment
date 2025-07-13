//• Write a Java program that takes the user to provide a single 
//character from the alphabet. Print Vowel or Consonant, 
//depending on the user input. If the user input is not a letter 
//(between a & z or A and Z), or is a string of length 
//> 1, print an error message.

package com.core;

import java.util.Scanner;

public class question2 {
	
public static void main(String[] args) {
	String ch;
	
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter Character");
	ch=sc.next();
	if(ch=="a" || ch=="e" || ch=="i" || ch=="o" || ch=="u") {
		System.out.println("It is a vowel");
	}else {
		 
		System.out.println("It is a constant");
	} 
	
}
}
