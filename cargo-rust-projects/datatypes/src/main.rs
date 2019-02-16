fn main(){
	println!("\nDataTypes in Rust\n");
	println!("\nScalar types : integers, floating-point numbers, Booleans, and characters\n");

	let t = true;
	let f: bool = false;

	// signed types
	let a: i8 = 2;
	println!("a = {}", a);

	let a: i16 = 2;
	println!("a = {}", a);

	let a: i32 = 2;
	println!("a = {}", a);

	let a: i64 = 2;
	println!("a = {}", a);

	let a: i128 = 2;
	println!("a = {}", a);

	let a: isize  = 2;
	println!("a = {}", a);

	// unsigned types
	let a: u8 = 2;
	println!("a = {}", a);

	let a: u16 = 2;
	println!("a = {}", a);

	let a: u32 = 2;
	println!("a = {}", a);

	let a: u64 = 2;
	println!("a = {}", a);

	let a: u128 = 2;
	println!("a = {}", a);

	let a: usize  = 2;
	println!("a = {}", a);
}