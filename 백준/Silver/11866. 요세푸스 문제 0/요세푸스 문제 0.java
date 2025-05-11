import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	
	public static void main(String[] args) throws Exception{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int N = Integer.parseInt(st.nextToken());
		int K = Integer.parseInt(st.nextToken());
		
		Deque<Integer> dq = new ArrayDeque<>(N);
		for(int i=1; i<=N; i++) {
			dq.addLast(i);
		}
		
		StringBuilder sb = new StringBuilder();
		sb.append('<');
		
		// 덱이 빌 때까지 반복하기
		while(!dq.isEmpty()) {
			// K-1번만큼 앞의 사람을 뒤로 보낸다
            for (int i = 1; i < K; i++) {
                dq.addLast(dq.removeFirst());
            }
            // K번째 사람 제거하고 결과에 추가
            sb.append(dq.removeFirst());
            if(!dq.isEmpty()) {
            	sb.append(", ");
            }
		}
		
		sb.append('>');
		System.out.print(sb.toString());
		
		br.close();
	}
}