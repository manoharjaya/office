class ReadFile
{
	public static void main(String[] asd)
	{
	
	final URL url = new URL("http://www.example.com/pqr.txt");
	final StringBuilder sb = new StringBuilder();
	final char[] buf = new char[4096];
	final CharsetDecoder decoder = StandardCharsets.UTF_8.newDecoder().onMalformedInput(CodingErrorAction.REPORT);
	try (
	    final InputStream in = url.openStream();
	    final InputStreamReader reader = new InputStreamReader(in, decoder);) {
	    int nrChars;
	    while ((nrChars = reader.read(buf)) != -1)
		sb.append(buf, 0, nrChars);
	}
	final String test = sb.toString();
	}
}
