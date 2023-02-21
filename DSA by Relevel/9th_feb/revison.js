// Map, filter, reduce : Higher order functions

// Map => map is a data structure which holds element as  key value pairs. In map key always unique

// let arr = [2, 3, 4, 5, 6, 7, 8, 12];

// let arr1 = arr.map((el) => el * 2);

// console.log(arr1);

let m = new Map();

m.set(1, "vk");
m.set(2, "jk");
m.set(3, "dk");
m.set(4, "ck");

// console.log(m);
// console.log(m.values());
// console.log(m.keys());
// console.log(m.clear());
// console.log(m.delete(1));
// console.log(m.entries());
// m.forEach((k, v) => console.log((k, v)));

// console.log(m.has(2));

//  Set

let s = new Set();

s.add(1);
s.add(2);
s.add(3);
s.add(1);

// console.log(s);
// console.log(s.has(1));

//  Filter

let arr = [4, 5, 67, 8, 6, 44, 356];

let newArr = arr.filter((el) => el % 2 != 0);

// console.log(newArr);

//  Reduce

// let sumOfElements = arr.reduce((el, prev) => el + prev);
// console.log(sumOfElements);

function minMax(arr) {
	let min = arr[0];
	let max = arr[0];

	for (let i = 0; i < arr.length; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}

		if (max < arr[i]) {
			max = arr[i];
		}
	}

	return [min, max];
}

let min_Max = minMax([23, 34, 46, 547, 6, 7, 643, 4, 234, 46, 4]);
console.log(min_Max);
