package com.core;

import java.util.Scanner;

public class question12 {
	
	public static void main(String[] args) {
		
		 System.out.println("Numbers between 1 and 100 that are divisible by 3, 5, or both:");
	        
	        for (int i = 1; i <= 100; i++) {
	            if (i % 3 == 0 && i % 5 == 0) {
	                System.out.print(i + " ");
	            }
	        }
		
	}
}
