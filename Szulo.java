class Parent {

	void parent() {
	System.out.println("Ez a szülő osztály");
	}
}

class Gyerek extends Parent {
	void gyerek() {
	System.out.println("Ez a gyerek osztály");
	}
}

class Szulo {
	public static void main(String[] args){
	Parent something = new Gyerek();

	something.parent();
	something.gyerek();
	}
	
}
	
	
