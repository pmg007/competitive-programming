import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.InputMismatchException;
import java.util.Scanner;
public class DoubleStrings {

    public static void main(String[] args)throws Exception{
        InputReader in = new InputReader(System.in);
        PrintWriter pr = new PrintWriter(System.out,true);
        int t = in.readInt();
        while (t-- > 0) {
            long n = in.readLong(); pr.println(n-(n%2));
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

// BufferedReader/BufferedWriter I/O method
/*
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;


class DoubleStrings {
    public static void main(String[] args) throws NumberFormatException, IOException {
        // setup
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
        // input
        int t = Integer.parseInt(in.readLine()); // test cases
        // action
        int numStrs; // number of double strings
        for (int i = 0; i < t; i++) {
            int n = Integer.parseInt(in.readLine()); // palindrome length
            if (n % 2 != 0) { // if odd
                numStrs = n - 1;
            } else {
                numStrs = n;
            }
            out.write(numStrs + "\n");
        }
        // output
        out.flush();
        // cleanup
        out.close();
    }
}
 */