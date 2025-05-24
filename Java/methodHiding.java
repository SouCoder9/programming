class parent{
static void diplay(){
System.out.println("Parent Display");
}
}
class child extends parent{
static void display(){
System.out.println("Child Display");
}
}
public class main(){
public Static void main (){
parent obj1 = new parent();
parent obj2 = new child();

obj1.display();
obj2.display();
}
}


