package com.core;

import java.util.Scanner;

public class question11 {
	public static void main(String[] args) {
		int a;
		
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter The Integer");
		a=sc.nextInt();
		
		int aa=a*10+a;
		int aaa=a*100+aa;
		int k=a+aa+aaa;
		
		System.out.println("The answer is"+k);
	}

}
