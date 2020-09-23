class szulo
{
    protected int m_kor;
    protected String m_nev;
    public void setKor(int kor) {
        m_kor = kor;
    }
    
    public void setNev(String nev) {
        m_nev = nev;
    }
    
    public int getNev() {
        return m_kor;
    }
}

class gyerek extends szulo
{
    public String getNev() {
        return m_nev;
    }
}

class szgy
{
    public static void main (String args[])
    {
        szulo s = new gyerek();
        s.setNev("Apa");
        s.setKor(60);
        
        gyerek gy = new gyerek();
        s.setNev("Geza");
        s.setKor(15);
        
        System.out.println(gy.getNev() + " " + s.getNev());
    }
}
