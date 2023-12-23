/*Create a class named Item that holds data about an item in a retail store.The class should have the following three fields:
1. name: the name field is a String object that holds the name of the item.
2. price: the price field is a double variable that holds the item's retail price
3. quantity: the quantity field is an int variable that holds the number of units currently in inventory
Write a constructor method that accepts three arguments, name, price, & quantity and stores the values of the arguments passed into it in the object's instance fields.
Write four public methods to retrieve the values from the three fields and their current inventory value
1. String getName( ) returns the item name
2. double getPrice( ) returns the price of the item
3. int getQuantity( ) returns the number of quantities
4. double getValue( ) that returns the current inventory value (quantity * price)
Write a separate class called Inventory with a main method that creates three Item objects and then produces a neatly formatted table of the store's inventory displaying the three items, their current inventory value, and the total inventory value for the store. Duplicate the format of the output exactly shown below. Test your output with different items in inventory.
*/

class Items{
	String name;
	double price;
	int quantity;
	int value;
	Items(String name, double price, int quantity){
		this.name = name;
		this.price = price;
		this.quantity = quantity;
	}
	int getValue(){
		return 
	}
}

class Inventory{
	public static void main(String[] args){
		Items item1 = new Items("Stapler", 2.25, 15, 33.75); item2, item3 = new Items();

	}
}
