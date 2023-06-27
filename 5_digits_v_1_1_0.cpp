
use std::io;
fn main() {
    let mut user_input = String::new();
    io::stdin().read_line(&mut user_input).unwrap();
    let mut user_number: u32 = user_input.trim().parse().expect("Not a number");
    println!("User input is {} and number is {}", user_input, user_number);
 
    user_number < 10000 && panic!("Number is lesser than 5 digits");
    user_number > 99999 && panic!("Number is bigger than 5 digits");
 
    let mut vec: Vec<u32> = Vec::new();
 
    for i in 0..5 {
        vec.push(user_number % 10);
        user_number /= 10;
    }
 
    for i in 0..5 {
        println!("{}'th digit is {}", i+1, vec[4-i]);
    }
 
}
