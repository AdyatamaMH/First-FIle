function digitalDecipher(eMessage, key){
	for(let i = 0; i < eMessage.length; i++){
    key1 = key.toString()
    index = i % key.toString().length
		eMessage[i] -= parseInt(key1[index]);
	}
	const alphabet = "abcdefghijklmnopqrstuvwxyz";
	let decode = "";
	for(let i = 0; i < eMessage.length; i++){
        eMe = eMessage[i] - 1
		decode += alphabet[eMe];
	}
	return decode;
}

console.log("Result:")
console.log("Code [20, 12, 18, 30, 21] with key 1939:", digitalDecipher([20, 12, 18, 30, 21], 1939));
console.log("Code [14, 30, 11, 1, 20, 17, 18, 18] with key 1990:", digitalDecipher([14, 30, 11, 1, 20, 17, 18, 18], 1990));
console.log("Code [6, 4, 1, 3, 9, 20] with key 100:", digitalDecipher([6, 4, 1, 3, 9, 20], 100));