use std::io;

fn main() {
	let mut n1 = String::new();
	let mut n2 = String::new();

	io::stdin().read_line(&mut n1)
		.expect("Error");
	io::stdin().read_line(&mut n2)
		.expect("Error");

	let mut n1: u32 = n1.trim().parse()
		.expect("enter a number");

	let mut n2 : u32 = n2.trim().parse()
		.expect("enter a number");

	while n1 % n2 != 0 {
		let rem = n1 % n2;
		n1 = n2;
		n2 = rem;
	}

	println!("GCD = {}", n2);
}