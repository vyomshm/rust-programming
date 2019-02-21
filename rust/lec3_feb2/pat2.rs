use std::io;

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

fn main() {
	let mut n = String::new();

	io::stdin().read_line(&mut n)
		.expect("Err");

	let n: u32 = n.trim().parse()
		.expect("input err");

	let mut count: u32 = 1;
	for i in 1..n+1 {
		for _j in 0..i {
			print!("{} ", count);
			count += 1;
		}
		print!("\n");
	}
}