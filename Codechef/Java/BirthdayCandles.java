import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.util.Arrays;
public class BirthdayCandles     {
    public static void main(String[] args)throws Exception{
        InputReader in = new InputReader(System.in);
        PrintWriter pr = new PrintWriter(System.out,true);
        int t=in.readInt();
        while (t-- > 0) {
            int a[] = new int[10];
            for (int i = 0; i < 10; i++) {
                a[i] = in.readInt();
            }
            int min = a[1],pos=1;
            for (int i = 1; i < 10; i++) {
                if (a[i] < min) {
                    min = a[i]; pos = i;
                }
            }
            if (a[0] < min) {
                pos = 0;
                min = a[0];
                pr.print(1);
                for (int i = 0; i < min + 1; i++) pr.print(0); pr.println();
            } else {
                for(int i=0;i<min+1;i++) pr.print(pos);pr.println();
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