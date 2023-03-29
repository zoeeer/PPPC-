int main() {
	// prefered
	int *p1 = nullptr;

	// ok
	int *p2 = 0;

	// wrong
	int z = 0;
	int *p3 = z;

	// also wrong
	const int z1 = 0;
	int *p4 = z1;
}
