
import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class BinfaTest {

	LZWBinFa binfa = new LZWBinFa();
	
	@Test
	void test() {
		for (char c: "011110010010010000111".toCharArray()) {
			binfa.egyBitFeldolg(c);
		}
		
		assertEquals(4, binfa.getMelyseg());
		assertEquals(2.75, binfa.getAtlag());
		assertEquals(0.957427, binfa.getSzoras(), 0.0001);
	}

}
