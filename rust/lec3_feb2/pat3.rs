use std::io;

// fibonacci staircase pattern - TO-DO

fn main() {
	let mut n = String::new();

	io::stdin().read_line(&mut n)
		.expect("Err");

	let n: u32 = n.trim().parse()
		.expect("input parse err");

	let mut i1 = 0;
	let mut i2 = 1;

	for _i in 0..n{
		for _j in 0..i{
			print!("{} ", i1);
			let i3
		}
		print!("\n");
	}
}