fn main() {
	const MAX_POINTS : u32 = 100_00;
    println!("\n\nConstants (always immutable)\n MAX_POINTS: {}\n", MAX_POINTS);

    println!("SHADOWING\n It allows us to redefine a variable's datatype\n");
    let x = 5;

    let x = x + 1;

    let x = x * 2;

    println!("The value of x is: {}", x);

    // incorrect => will throw err
    // let mut spaces = "   ";
	// spaces = spaces.len();
}
