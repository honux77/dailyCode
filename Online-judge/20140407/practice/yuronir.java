 ckage questionBank;

import java.util.Scanner;

/*
 * https://www.acmicpc.net/problem/1002
 * 두 터렛의 좌표와 각각에서의 거리가 주어질 때 나올 수 있는 가짓수 구하기 
 */
public class P0407 {
	public static void main(String[] args){
		int x1, x2, y1, y2, r1, r2;
		double d;
		Scanner input = new Scanner(System.in);
		int count = input.nextInt();

		for(int i = 0; i < count; i++){

			int result = -2;
			x1 = input.nextInt(); y1 = input.nextInt(); r1 = input.nextInt();
			x2 = input.nextInt(); y2 = input.nextInt(); r2 = input.nextInt();

			d = Math.sqrt((Math.pow(x1-x2, 2) + Math.pow(y1-y2, 2)));

			if(r1 < r2){
				int ttemp = r1;
				r1 = r2;
				r2 = ttemp;
			} //r1이 r2보다 크거나 같게 만들고 연산을 시작한다.


			//판별 시작
			if(d == 0){
				if(r1==r2){
					result = -1;
				} else{
					result = 0;
				}
			}

			else if(r1 > d){
				if(r1 > (d + r2)){
					result = 0;
				} else if(r1 == (d+r2)){
					result = 1;
				} else if(r1 < (d+r2)){
					result = 2;
				}
			}

			else if(r1 == d){
				result = 2;
			}

			else if(r1 < d){
				if(r1 > (d-r2)){
					result = 2;
				} else if(r1 == (d-r2)){
					result = 1;
				} else if(r1 < (d-r2)){
					result = 0;
				}
			}
			//판별 끝

			System.out.println(result);
		}
	}
}
