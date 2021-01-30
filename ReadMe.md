# GUIS

GUIS (General Universal Item System) is flexible performance-friendly and super-universal item and inventory system for your singleplayer game.

# BASIC USAGE:

![alt text](https://github.com/CayzerOK/GUIS/blob/master/Docs/basic_usage.png "Item Class Example")

### 1. Create an Item Class
In my example I just added weight and volume variables, but nobody limits you to create anything you want. Just remember that all items with equal stats are one item in engine logic. So if you're doing item-specific logic (like Event Dispatchers) you have to explicitly specify the context.

![alt text](https://github.com/CayzerOK/GUIS/blob/master/Docs/test_stats.png "Item Class Example")

#### 1.1. Create an Item Struct (Optional)
You can use the default "ItemStruct" structure, but if you need to overload item properties, you must represent them in your structure.

This is my TestItem example:

![alt text](https://github.com/CayzerOK/GUIS/blob/master/Docs/example_struct.png "Item Structure Example")

### 2. Create an Item at runtime:
Just get the "GUIS" subsystem and call the "Create Item" function.
As a result, you will get an object that has the class you specified with the variable values you specified.

![alt text](https://github.com/CayzerOK/GUIS/blob/master/Docs/item_creation.png "Item Creation")

### 3. ???
Now you can do whatever you want with your object! You can add it to your inventory (just add InventoryComponent to your actor), remove it from your inventory, or transact it from one to another!

![alt text](https://github.com/CayzerOK/GUIS/blob/master/Docs/invventory_functions.png "Inventory Functions")

# Additional Info:

Coming soon....

### GUIS Family:
[GUIS_Manufacture](https://github.com/CayzerOK/Manufacture_Core) - item production plugin based on GUIS

~~GUIS_Rand - random item generation~~

~~GUIS_Attributes - feature-rich effect system for your items~~
