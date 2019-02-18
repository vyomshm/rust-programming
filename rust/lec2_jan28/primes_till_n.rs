use std::io;

fn main() {
	let mut n = String::new();

	io::stdin().read_line(&mut n)
		.expect("Err");

	let n: u32 = n.trim().parse()
		.expect("input shold be a number");

	for i in 2..n {
		let mut div = 2;
		let mut is_prime: bool = true;

		while div * div <= i {
			if i % div == 0 {
				is_prime = false;
				break;
			}
			div += 1;
		}
		if is_prime {
			println!("{}", i);
		}
	}
}