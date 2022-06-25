/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.math.*;

/**
 *
 * @author whoisxnio
 */
public class HelloWorld {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
 
        // The number to be encrypted and decrypted

    
        
        
       
     
        BigInteger p = BigInteger.valueOf(263);
        BigInteger q = BigInteger.valueOf(379);
        BigInteger e = BigInteger.valueOf(19);

        
        System.out.println("D:::::"+ find(e,p,q));
    }
 
 
 
    static BigInteger find(BigInteger e, BigInteger p, BigInteger q)
    {
        BigInteger t = BigInteger.valueOf(1);
        
        BigInteger tmp = p.subtract(t);
        BigInteger tmp1 = q.subtract(t);
        BigInteger Z = tmp.multiply (tmp1);
        
        BigInteger d = t;
        BigInteger k = t;
         BigInteger x = t;
        BigInteger let = e;
        
        while(!let.equals(t))
        {
           
            tmp = k.multiply(Z);
            tmp = tmp.add(t);
           
            d = tmp.divide(e);
            k = k.add(t);
            
            x = e.multiply(d);
            let = x.mod(Z);
        }
        
    return d;
    }
    
}
