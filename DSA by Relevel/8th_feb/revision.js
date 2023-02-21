//  using new object

let book = new Object({
	name: "The seeker",
	author: "karan bajaj",
});

// console.log(book.author);

//  using constructuor function

function River() {
	(this.name = "Ganga"),
		(this.state = "UP"),
		(this.printName = function () {
			console.log("Welcome to river " + this.name);
		});
}

const river1 = new River();
// console.log(river1.printName());

//  Destructuring of objects and arrays

//  spread operator

// desturcturing of arrays

let names = ["VK", "sk", "ck", "dk"];

let [name1, name2, ...name3] = names;

// console.log(name1);
// console.log(name2);
// console.log(name3);

// destructuring of objects

let person = {
	name: "vk",
	city: "rampur",
	job: "software developer",
};

let { name: nameOfPerson, ...otherInfo } = person;

// console.log(nameOfPerson);
// console.log(otherInfo);

// Note : array me direct name1, name2 etc kuch bhi kar sakte h but objects me name:name1, name:name2 etc is tarah se likhte hain .


