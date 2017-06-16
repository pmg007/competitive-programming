import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.lang.Math;
class PrimePalindromes {
    public static int SIZE = 1000010;
    //public static boolean sieve[] = new boolean[SIZE];

    /*public void primeSieve(){
        sieve[1] = true;
        for (int i = 2; i * i < SIZE; i++) {
            if (!sieve[i]) {
                for(int j=i*i;j<SIZE;j+=i) sieve[j] =true;
            }
        }
        //for(int i=0;i<SIZE;i++) if(!sieve[i]) System.out.print(i+" ");
    }*/
    public boolean isPrime(int n) {
        if(n==1) return false;
        if(n==2) return true;
        //if(n%2==0) return false; //already filtered in the main function
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            if(n%i==0) return false;
        }
        return true;
    }

    public boolean isPalindrome(int n) {
        String s = Integer.toString(n);
        int i=0, j=s.length()-1; boolean k = true;
        while (i <= j) {
            if (s.charAt(i) == s.charAt(j)) {
                i++; j--;
            } else {
                k = false; break;
            }
        }
        return (k==true)?true:false;
    }
    public static void main(String[] args)throws Exception{
        InputReader in = new InputReader(System.in);
        PrintWriter pr = new PrintWriter(System.out,true);
        PrimePalindromes pp = new PrimePalindromes();
        int n = in.readInt();
        //pp.primeSieve();
        if(n==1) {pr.println(2);System.exit(0);}
        for (int i = n;; i++) {
            if (i%2 == 1) {
                if (pp.isPrime(i) && pp.isPalindrome(i)) {
                    pr.println(i);break;
                }
            }
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
}
 */