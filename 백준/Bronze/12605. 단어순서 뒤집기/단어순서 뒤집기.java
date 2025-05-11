import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	
	public static void main(String[] args) throws Exception{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(br.readLine());
		
		for(int i=1; i<=N; i++) {
			String line = br.readLine();
			String[] words = line.split(" ");
			
			sb.append("Case #")
				.append(i)
				.append(": ");
			
			for(int j = words.length -1; j>=0; j--) {
				sb.append(words[j]);
				if(j>0) sb.append(' ');
			}
			sb.append('\n');
		}
		
		System.out.print(sb);
		br.close();
	}
}