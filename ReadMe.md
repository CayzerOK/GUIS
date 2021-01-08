#GUIS

GUIS (General Universal Item System) is flexible performance-friendly and super-universal system, that can help you build true RNG-items.

#Features:

##1) Easy & Compact:

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Item creation and adding to inventory")

##2) Advanced RNG:

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Item comparison")

##3) Sandbox-friendly:

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Transaction tools")

#BASIC USAGE:

###1. Create an Item Class
In my example I just added weight and volume variables, but nobody limits you to create anything you want. Just remember that all items with equal stats are one item in engine logic. So if you're doing item-specific logic (like Event Dispatchers) you have to explicitly specify the context.

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Item Class Example")

####1.1. Create an Item Struct (Optional)
You can use the default "ItemStruct" structure, but if you need to overload item properties, you must represent them in your structure.

This is my TestItem example:

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Item Structure Example")

###2. Create an Item at runtime:
Just get the "GUIS" subsystem and call the "Create Item" function.
As a result, you will get an object that has the class you specified with the variable values you specified.

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Creation")

###3. ???
Now you can do whatever you want with your object! You can add it to your inventory (just add InventoryComponent to your actor), remove it from your inventory, or transact it from one to another!

![alt text](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "Creation")

#Additional Info:

Coming soon....