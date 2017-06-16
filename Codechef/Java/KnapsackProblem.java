import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.InputMismatchException;
import java.util.Scanner;
import java.util.Arrays;
import java.lang.Math;
import java.util.Collections;
import java.util.ArrayList;

public class KnapsackProblem {
    public static long X[] = new long[200010];
    public static void main (String args[]) throws Exception{
        InputReader in = new InputReader(System.in);
        PrintWriter out = new PrintWriter(System.out, true);
        int n = in.readInt();long sum = 0;
        ArrayList<Integer> o = new ArrayList<Integer>();
        ArrayList<Integer> t = new ArrayList<Integer>();
        ArrayList<Integer> O = new ArrayList<Integer>();
        ArrayList<Integer> T = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            int a = in.readInt(); int b = in.readInt();
            if (a == 1) {o.add(b);O.add(b);}
            else {t.add(b);T.add(b);}
            sum+=a;
        }
        Collections.sort(o); Collections.sort(t);Collections.sort(O);Collections.sort(T);
        long temp = 0; //int X[] = new int[sum+1];
        for (int i = 2; i <= sum; i += 2) {
            int x = 0, y = 0, status = 2;
            if(t.size()>=1) x = t.get(t.size()-1);
            if(o.size()>=2) {y = o.get(o.size()-1)+o.get(o.size()-2); status = 2;}
            else if(o.size()>=1) {y = o.get(o.size()-1); status = 1;}
            if (x >= y) {
                temp += x;
                t.remove(t.size() - 1);
            } else {
                temp += y;
                if (status == 2) {
                    o.remove(o.size() - 1);
                    o.remove(o.size() - 1);
                } else {
                    o.remove(o.size()-1);
                }
            }
            X[i] = temp;
        }
        temp = 0;
        if(O.size()>=1){temp = O.get(O.size()-1); O.remove(O.size()-1);}
        X[1] = temp;
        for (int i = 3; i <= sum; i += 2) {
            int x = 0, y = 0,status = 2;
            if(T.size()>=1) x = T.get(T.size()-1);
            if(O.size()>=2) {y = O.get(O.size()-1)+O.get(O.size()-2); status = 2;}
            else if(O.size()>=1) {y = O.get(O.size()-1); status = 1;}
            if (x >= y) {
                temp += x;
                T.remove(T.size() - 1);
            } else {
                temp += y;
                if (status == 2) {
                    O.remove(O.size() - 1);
                    O.remove(O.size() - 1);
                } else {
                    O.remove(O.size()-1);
                }
            }
            X[i] = temp;
        }
        for (int i = 0; i < sum; i++) {
            System.out.print(X[i + 1] + " ");
        }
        out.println();
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
    public final double readDouble() {
        int c = read();
        while (isSpaceChar(c))
            c = read();
        int sgn = 1;
        if (c == '-') {
            sgn = -1;
            c = read();
        }
        double res = 0;
        while (!isSpaceChar(c) && c != '.') {
            if (c == 'e' || c == 'E')
                return res * Math.pow(10, readInt());
            if (c < '0' || c > '9')
                throw new InputMismatchException();
            res *= 10;
            res += c - '0';
            c = read();
        }
        if (c == '.') {
            c = read();
            double m = 1;
            while (!isSpaceChar(c)) {
                if (c == 'e' || c == 'E')
                    return res * Math.pow(10, readInt());
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                m /= 10;
                res += (c - '0') * m;
                c = read();
            }
        }
        return res * sgn;
    }
    public final  static boolean isSpaceChar(int c) {
        return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
    }
    public final String next() {
        return readString();
    }
}

class IOUtils {

    public static int[] readIntArray(InputReader in, int size) {
        int[] array = new int[size];
        for (int i = 0; i < size; i++)
            array[i] = in.readInt();
        return array;
    }

    public static long[] readLongArray(InputReader in, int size) {
        long[] array = new long[size];
        for (int i = 0; i < size; i++)
            array[i] = in.readLong();
        return array;
    }

}*/