use std::io;

fn main() {
	let mut x1 = String::new();
	let mut x2 = String::new();
	let mut y1 = String::new();
	let mut y2 = String::new();

	io::stdin().read_line(&mut x1)
		.expect("Err");
	io::stdin().read_line(&mut x2)
		.expect("Err");
	io::stdin().read_line(&mut y1)
		.expect("Err");
	io::stdin().read_line(&mut y2)
		.expect("Err");

	let mut x1: i32 = x1.trim().parse()
		.expect("enter a coordinate");
	let mut x2: i32 = x2.trim().parse()
		.expect("enter a coordinate");
	let mut y1: i32 = y1.trim().parse()
		.expect("enter a coordinate");
	let mut y2: i32 = y2.trim().parse()
		.expect("enter a coordinate");

	if x1 > x2 {
		let temp: i32 = x2;
		x2 = x1;
		x1 = temp;
	}

	if y1 > y2 {
		let temp: i32 = y2;
		y2 = y1;
		y1 = temp;
	}

	if (x2 < y1) || (y2 < x1) {
		println!("No Overlap");
	} else if (y1 > x1 && y2 < x2) || (x1 > y1 && x2 < y2) {
		println!("L1 in L2 or L2 in L1");
	} else {
		println!("Intersecting lines");
	}
}