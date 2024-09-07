package com.core;

public class Loop2 {
	 
		
		public static void main(String[] args) {
	        
	        int k = 4;
	        int m = 1;
	        for (int i = 1; i <= k; i++) {
	            
	            for (int j = 1; j <= i; j++) {
	                System.out.print(m+ " ");
	                m++;
	            }
	            System.out.println();
	        }
	    }
		
	}
