package org.swdc.qt.beans;

public enum WritingSystem {

    Any(0),

    Latin(1),
    Greek(2),
    Cyrillic(3),
    Armenian(4),
    Hebrew(5),
    Arabic(6),
    Syriac(7),
    Thaana(8),
    Devanagari(9),
    Bengali(10),
    Gurmukhi(11),
    Gujarati(12),
    Oriya(13),
    Tamil(14),
    Telugu(15),
    Kannada(16),
    Malayalam(17),
    Sinhala(18),
    Thai(19),
    Lao(20),
    Tibetan(21),
    Myanmar(22),
    Georgian(23),
    Khmer(24),
    SimplifiedChinese(25),
    TraditionalChinese(26),
    Japanese(27),
    Korean(28),
    Vietnamese(29),

    Symbol(30),

    Ogham(31),
    Runic(32),
    Nko(33),

    WritingSystemsCount(34);

    private int val;
    WritingSystem(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static WritingSystem valueOf(int val) {
        for (WritingSystem sys: WritingSystem.values()) {
            if (sys.getVal() == val) {
                return sys;
            }
        }
        return null;
    }

}
