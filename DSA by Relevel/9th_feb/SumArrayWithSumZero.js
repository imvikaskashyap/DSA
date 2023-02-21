function subArrayWithSumZeroExist(arr) {
	let setSum = new Set();

	// for initialization
	let sum = 0;

	for (let i = 0; i < arr.length; i++) {
		sum = sum + arr[i];

		if (sum === 0 || setSum.has(sum)) {
			return true;
		} else {
			setSum.add(sum);
		}
	}

	return false;
}

// console.log(subArrayWithSumZeroExist([4, 2, -3, 1,  6]));
console.log(subArrayWithSumZeroExist([4, 2, 7, 8, 5, 3, -3, 1, 2, 6]));
