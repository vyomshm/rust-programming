fn main() {
	let a = 34;
	let b = 45;
	let c = 97;

	if a >= b && a >= c {
		println!("lof3 : {}", a);
	} else {
		if b >= c {
			println!("lof3 : {}", b);
		} else {
			println!("lof3 : {}", c);
		}
	}
}