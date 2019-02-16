use std::io;

fn main() {
	let mut n = String::new();

	println!("Please enter a number: ");

	io::stdin().read_line(&mut n)
		.expect("Error reading input");

	let n: u32 = n.trim().parse()
		.expect("Please enter an integer >= 1!");

	if n < 2 {
		println!("Not Prime");
		return;
	} else if n == 2 {
		println!("Prime");
		return;
	} else if n % 2 == 0 {
		println!("Not Prime");
		return;
	}
	
	let mut div = 3;
	while div * div <= n {
		if n % div == 0 {
			println!("Not Prime");
			return;
		}
		div += 2;
	}
	println!("Prime");
}