// Different ways we can create objects in JS

// 1. Using object literal
// 2. By creating instance of Object directly
// 3. By using the constructor function

// 1. Using object literal - {} : (key,value) pairs and functions

const person = {
	name: "Vikas kashyap",
	age: 23,
	hobbies: ["cricket", "webDevelopement", "travelling"],
	greet: function () {
		return console.log("hello");
	},
};

// console.log(person.name);
// console.log(person.age);
// console.log(person.hobbies[2]);
// console.log(person.greet());

// 2. By creating instance of Object directly

const book = new Object();

book.name = "vikas";

console.log(book.name);
