all:
	cargo build --verbose
	./target/debug/instrumented-main > cmd.out
	gnatcov extract-base64-trace cmd.out hello.trace
