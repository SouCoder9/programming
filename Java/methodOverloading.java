class parent{
void display(){
System.out.println("Parent Display");
}
}
class child extends parent{
void display(){
System.out.println("Child Display");
}
}
class methodOverloading{
public static void main (String[] args){
parent obj1 = new parent();
parent obj2 = new child();
obj1.display();
obj2.display();
}
}


