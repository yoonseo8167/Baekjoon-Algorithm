import java.io.BufferedReader;

import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;

public class Main {
	
	public static void main(String[] args) throws Exception{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int sum = 0;
		Deque<Integer> stack = new ArrayDeque<>();
		int K = Integer.parseInt(br.readLine());
		
		for(int i=0; i<K; i++) {
			int N = Integer.parseInt(br.readLine());
			if(N == 0) {
				if(!stack.isEmpty()) {
					stack.pop();
				}
			} else
				stack.push(N);
		}
		sum = stack.stream().mapToInt(Integer::intValue).sum();		
		System.out.println(sum);
		br.close();
	}
}