use std::io;

fn main() {
	let mut n = String::new();

	println!("Please enter n: ");

	io::stdin().read_line(&mut n)
		.expect("Failed to read input");

	let n: i32 = n.trim().parse()
		.expect("pLease enter a number");

	println!("Input n = {}", n);
}