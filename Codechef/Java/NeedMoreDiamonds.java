/** coded  by: prag_007 **/
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.util.Arrays;
public class NeedMoreDiamonds {
    public static int SIZE = 2010;
    public static double X[][] = new double[SIZE][SIZE];
    public void solveDiamond() {
        //Arrays.fill(X,0.0);//wrong
        //for(double[] q : X) Arrays.fill(q,0.0);
        for (int i = 1; i <= SIZE-1; i++) {
            for (int j = 1; j <= i; j++) {
                X[i][j] = 1.0 - (X[i-1][j-1]+X[i-1][j])/2;
            }
        }
    }
    public static void main(String[] args) throws Exception{
        InputReader in = new InputReader(System.in);
        PrintWriter pr = new PrintWriter(System.out,true);
       // Scanner sc = new Scanner(System.in);
        int t = in.readInt();
        NeedMoreDiamonds nmd = new NeedMoreDiamonds();
        nmd.solveDiamond();
        while (t-- > 0) {
            int n = in.readInt();
            double ans = 0;
            for (int j = 1; j <= n; j++) {
                int temp = in.readInt();
                ans += X[n][j]*temp;
            }
            pr.println(ans);
        }
    }
}

/*
class InputReader {
    private InputStream stream;
    private byte[] buf = new byte[102400];
    private int curChar;
    private int numChars;

    public InputReader(InputStream stream) {
        this.stream = stream;
    }
    public final int read() {
        if (numChars == -1)
            throw new InputMismatchException();
        if (curChar >= numChars) {
            curChar = 0;
            try {
                numChars = stream.read(buf);
            } catch (IOException e) {
                throw new InputMismatchException();
            }
            if (numChars <= 0)
                return -1;
        }
        return buf[curChar++];
    }
    public final int readInt() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        int sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        }
        int res = 0;
        do {
            if (c < '0' || c > '9')
                throw new InputMismatchException();
            res *= 10;
            res += c - '0';
            c = read();
        } while (!isSpaceChar(c));
        return res * sgn;
    }
    public final long readLong() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        int sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        }
        long res = 0;
        do {
            if (c < '0' || c > '9')
                throw new InputMismatchException();
            res *= 10;
            res += c - '0';
            c = read();
        } while (!isSpaceChar(c));
        return res * sgn;
    }
    public final String readString() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        StringBuilder res = new StringBuilder();
        do {
            res.appendCodePoint(c);
            c = read();
        } while (!isSpaceChar(c));
        return res.toString();
    }
    public final  static boolean isSpaceChar(int c) {
        return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
    }
    public final String next() {
        return readString();
    }
}*/