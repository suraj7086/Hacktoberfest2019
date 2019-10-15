//typescript code showing a class in typescript as well as different variable types which will log to the console. 

var myFruit = /** @class */ (function () {
    function myFruit(message) {
        this.fruitName = message;
    }
    myFruit.prototype.model = function () {
        return this.fruitName + " are my favourite fruit. ";
    };
    return myFruit;
}());
var welcome = new myFruit("apples");
console.log(welcome.model());
var firstName = "Remano";
console.log(firstName);
var age = 28;
console.log(age);
var newbie = true;
console.log(newbie);
