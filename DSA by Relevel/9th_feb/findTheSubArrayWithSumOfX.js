// function countSubarraysWithSum(arr, x) {
// 	let count = 0;
// 	let sum = 0;
// 	let set = new Set();
// 	set.add(0);

// 	for (let i = 0; i < arr.length; i++) {
// 		sum += arr[i];

// 		if (set.has(sum - x)) {
// 			count++;
// 		}
// 		set.add(sum);
// 	}

// 	return count;
// }

// const arr = [2, 4, -1, -2, 4, -5, 5];
// const x = 6;
// console.log(countSubarraysWithSum(arr, x));

function countSubarraysWithSum(arr, x) {
	let curr_sum = 0;
	let start = 0;

	for (let i = 0; i < arr.length; i++) {
		curr_sum = curr_sum + arr[i];

		while (curr_sum > x && start <= arr[i]) {
			curr_sum = curr_sum - arr[start];
			start++;
		}

		if (curr_sum === x) {
			return [start, i];
		}
	}

	return [-1, -1];
}

console.log(countSubarraysWithSum([1, 4, 20, 3, 10, 5], 33));
