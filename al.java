import java.util.*;
public class al{
    public static void main(String[] args){
        ArrayList a = new ArrayList();//Hetrogeneous Array
        //Add new elemnts
        a.add(10);
        a.add(100);
        a.add(200);
        a.add(1);
        a.add(4,8);// to add element at particular index
        a.add("nishanth");
        System.out.println(a);
        //size()
        System.out.println("No.of elements in ArrayList:"+a.size());
        //remove()
        a.remove(0);
        System.out.println("After Removing:"+a);
        //to predict the index of given element
        System.out.println("Index of 200:"+a.indexOf(200));
        System.out.println("Element at index 2:"+a.get(2));
        //Exchange elements
        a.set(4,"kumar");
        System.out.println("After changing element:"+a);
        //Element present or not
        System.out.println("Presence of Kumar:"+a.contains("kumar"));
        //to check whether the list is empty or not
        System.out.println("Whether the list is empty:"+a.isEmpty());
    }
}