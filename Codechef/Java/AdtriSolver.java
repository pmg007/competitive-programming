
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.InputMismatchException;
import java.util.Scanner;

class AdtriSolver {
    public  static int SIZE = 5000005;
    public  static boolean sieve[] = new boolean[SIZE];
    public  static boolean X[] = new boolean[SIZE];
    public void PrimeSieve(){
        int i,j;
        for(i=2;i<3000;i++){
            if(!sieve[i]) for(j=i*i;j<SIZE;j+=i)   sieve[j]=true;
        }
        for(i=5;i<SIZE;i++) {
            if(!sieve[i] && i%4==1) {
                for(j=i;j<SIZE;j+=i) X[j]=true;
            }
        }
    }
    public static void main(String[] args) throws Exception {
        PrintWriter pr = new PrintWriter(System.out, true);
        InputReader in = new InputReader(System.in);
        AdtriSolver ad = new AdtriSolver();
        int t=in.readInt();
        sieve[1]=true;
        ad.PrimeSieve();
        while(t-->0) {
            int n = in.readInt();
            if(X[n]) pr.println("YES"); else pr.println("NO");
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