// This is a comment, and is ignored by the compiler
// You can test this code by clicking the "Run" button over there ->
// or if you prefer to use your keyboard, you can use the "Ctrl + Enter" shortcut

// This code is editable, feel free to hack it!
// You can always return to the original code by clicking the "Reset" button ->

// This is the main function

include!(concat!(env!("OUT_DIR"), "/bindings.rs"));

fn main() {
    // Statements here are executed when the compiled binary is called

    // Print text to the console
    unsafe {gnatcov_rts_witness(xcov__buf_stmt__hello_rs, 0);}
    println!("Hello World!");
    unsafe {gnatcov_rts_hello_rs_dump_buffers();}
}
