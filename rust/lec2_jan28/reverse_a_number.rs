use std::io;

fn main() {
	let mut n = String::new();

	io::stdin().read_line(&mut n)
		.expect("input error");

	let mut n: i32 = n.trim().parse()
		.expect("Enter a number");

	while n > 0 {
		let rem: i32 = n % 10;
		n = n / 10;
		print!("{}", rem);
	}
	print!("\n");
}