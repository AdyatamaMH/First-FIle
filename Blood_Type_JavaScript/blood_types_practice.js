function canGiveBlood(a, b){
    const    O1    = ["O−", "O+", "A−", "A+", "B−", "B+", "AB−", "AB+"];
    const    O2    = ["O-", "A-", "B-", "AB-"];
    const    A1    = ["B−", "B+", "O−", "O+"];
    const    A2    = ["A-", "B+", "B−", "AB-", "O−", "O+"];
    const    B1    = ["A−", "A+", "O−", "O+"];
    const    B2    = ["B-", "AB-", "A+", "A-", "O+", "O-"];
    const    AB1   = ["O−", "O+", "A−", "A+", "B−", "B+"];
    const    AB2   = ["O−", "O+", "A−", "A+", "B−", "B+", "AB−"];
    
    if (a === "O-" && O1.includes(b)){
        return true;
    } else if (a === "O+" && O2.includes(b)){
        return false;
    } else if (a === "A-" && A1.includes(b)){
        return false;
    } else if (a === "A+" && A2.includes(b)){
        return false;
    } else if (a === "B-" && B1.includes(b)){
        return false;
    } else if (a === "B+" && B2.includes(b)){
        return false;
    } else if (a === "AB-" && AB1.includes(b)){
        return false;
    } else if (a === "AB+" && AB2.includes(b)){
        return false;
    } else {
        return true;
    }
}
console.log("Result:")
console.log("(AB+ to AB+): ", canGiveBlood("AB+", "AB+"));
console.log("(A- to A+): ", canGiveBlood("A-", "A+"));
console.log("(O+ to O-): ", canGiveBlood("O+", "O-")); 