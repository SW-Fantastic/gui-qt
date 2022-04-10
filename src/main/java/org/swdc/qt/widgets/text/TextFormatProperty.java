package org.swdc.qt.widgets.text;

public enum TextFormatProperty {

    ObjectIndex(0x0),

    // paragraph and char
    CssFloat(0x0800),
    LayoutDirection(0x0801),

    OutlinePen(0x810),
    BackgroundBrush(0x820),
    ForegroundBrush(0x821),
    // Internal to qtextlayout.cpp: ObjectSelectionBrush(0x822
    BackgroundImageUrl(0x823),

    // paragraph
    BlockAlignment(0x1010),
    BlockTopMargin(0x1030),
    BlockBottomMargin(0x1031),
    BlockLeftMargin(0x1032),
    BlockRightMargin(0x1033),
    TextIndent(0x1034),
    TabPositions(0x1035),
    BlockIndent(0x1040),
    LineHeight(0x1048),
    LineHeightType(0x1049),
    BlockNonBreakableLines(0x1050),
    BlockTrailingHorizontalRulerWidth(0x1060),
    HeadingLevel(0x1070),
    BlockQuoteLevel(0x1080),
    BlockCodeLanguage(0x1090),
    BlockCodeFence(0x1091),
    BlockMarker(0x10A0),

    // character properties
    FirstFontProperty(0x1FE0),
    FontLetterSpacingType(0x2033),
    FontLetterSpacing(0x1FE1),
    FontWordSpacing(0x1FE2),
    FontStretch(0x2034),
    FontStyleHint(0x1FE3),
    FontStyleStrategy(0x1FE4),
    FontKerning(0x1FE5),
    FontHintingPreference(0x1FE6),
    FontFamilies(0x1FE7),
    FontStyleName(0x1FE8),
    FontFamily(0x2000),
    FontPointSize(0x2001),
    FontSizeAdjustment(0x2002),
    FontWeight(0x2003),
    FontItalic(0x2004),
    FontUnderline(0x2005), // deprecated), use TextUnderlineStyle instead
    FontOverline(0x2006),
    FontStrikeOut(0x2007),
    FontFixedPitch(0x2008),
    FontPixelSize(0x2009),

    TextUnderlineColor(0x2010),
    TextVerticalAlignment(0x2021),
    TextOutline(0x2022),
    TextUnderlineStyle(0x2023),
    TextToolTip(0x2024),

    IsAnchor(0x2030),
    AnchorHref(0x2031),
    AnchorName(0x2032),
    ObjectType(0x2f00),

    // list properties
    ListStyle(0x3000),
    ListIndent(0x3001),
    ListNumberPrefix(0x3002),
    ListNumberSuffix(0x3003),

    // table and frame properties
    FrameBorder(0x4000),
    FrameMargin(0x4001),
    FramePadding(0x4002),
    FrameWidth(0x4003),
    FrameHeight(0x4004),
    FrameTopMargin   (0x4005),
    FrameBottomMargin(0x4006),
    FrameLeftMargin  (0x4007),
    FrameRightMargin (0x4008),
    FrameBorderBrush(0x4009),
    FrameBorderStyle(0x4010),

    TableColumns(0x4100),
    TableColumnWidthConstraints(0x4101),
    TableCellSpacing(0x4102),
    TableCellPadding(0x4103),
    TableHeaderRowCount(0x4104),
    TableBorderCollapse(0x4105),

    // table cell properties
    TableCellRowSpan(0x4810),
    TableCellColumnSpan(0x4811),

    TableCellTopPadding(0x4812),
    TableCellBottomPadding(0x4813),
    TableCellLeftPadding(0x4814),
    TableCellRightPadding(0x4815),

    TableCellTopBorder(0x4816),
    TableCellBottomBorder(0x4817),
    TableCellLeftBorder(0x4818),
    TableCellRightBorder(0x4819),

    TableCellTopBorderStyle(0x481a),
    TableCellBottomBorderStyle(0x481b),
    TableCellLeftBorderStyle(0x481c),
    TableCellRightBorderStyle(0x481d),

    TableCellTopBorderBrush(0x481e),
    TableCellBottomBorderBrush(0x481f),
    TableCellLeftBorderBrush(0x4820),
    TableCellRightBorderBrush(0x4821),

    // image properties
    ImageName(0x5000),
    ImageTitle(0x5001),
    ImageAltText(0x5002),
    ImageWidth(0x5010),
    ImageHeight(0x5011),
    ImageQuality(0x5014),

    // internal
        /*
           SuppressText(0x5012),
           SuppressBackground(0x513
        */

    // selection properties
    FullWidthSelection(0x06000),

    // page break properties
    PageBreakPolicy(0x7000),

    // --
    UserProperty(0x100000);

    private int val;
    TextFormatProperty(int val) {
        this.val = val;
    }

    public int getVal() {
        return val;
    }

    public static TextFormatProperty valueOf(int val) {
        for (TextFormatProperty p: TextFormatProperty.values()) {
            if (p.getVal() == val) {
                return p;
            }
        }
        return null;
    }
}
