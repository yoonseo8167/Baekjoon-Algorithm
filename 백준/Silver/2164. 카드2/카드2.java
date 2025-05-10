import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;

public class Main {
	
	public static void main(String[] args) throws Exception{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		Deque<Integer> q = new ArrayDeque<>(N);
		
		for(int i=1; i<=N; i++) {
			q.addLast(i);
		}
		while(q.size()>1) {
			// 1. 가장 위에 있는 카드 바닥에 버린다.
			q.removeFirst();
			// 2. 그다음 제일 위의 카드를 제일 아래로 옮긴다.
			q.addLast(q.removeFirst());
		}
		System.out.print(q.peekFirst());
		br.close();
	}
}