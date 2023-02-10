// function countChar(str, char) {
// 	// Convert the string into an array of characters
// 	let charArray = str.split("");

// 	// Count the number of occurrences of the given character
// 	let count = charArray.filter((c) => c === char).length;

// 	return count;
// }

// console.log(countChar("unacademy", "a"));
// // Output: 2

function freq(str, char) {
	let charArr = str.split("");
	const res = charArr.filter((c) => c === char).length;
	return res;
}

console.log(freq("vikaskashyap", "k"));
