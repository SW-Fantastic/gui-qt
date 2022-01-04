package org.swdc.qt.beans;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.stream.Collectors;

public enum KeyCode {


    Key_Escape ( 0x01000000),                // misc keys
    Key_Tab ( 0x01000001),
    Key_Backtab ( 0x01000002),
    Key_Backspace ( 0x01000003),
    Key_Return ( 0x01000004),
    Key_Enter ( 0x01000005),
    Key_Insert ( 0x01000006),
    Key_Delete ( 0x01000007),
    Key_Pause ( 0x01000008),
    Key_Print ( 0x01000009),               // print screen
    Key_SysReq ( 0x0100000a),
    Key_Clear ( 0x0100000b),
    Key_Home ( 0x01000010),                // cursor movement
    Key_End ( 0x01000011),
    Key_Left ( 0x01000012),
    Key_Up ( 0x01000013),
    Key_Right ( 0x01000014),
    Key_Down ( 0x01000015),
    Key_PageUp ( 0x01000016),
    Key_PageDown ( 0x01000017),
    Key_Shift ( 0x01000020),                // modifiers
    Key_Control ( 0x01000021),
    Key_Meta ( 0x01000022),
    Key_Alt ( 0x01000023),
    Key_CapsLock ( 0x01000024),
    Key_NumLock ( 0x01000025),
    Key_ScrollLock ( 0x01000026),
    Key_F1 ( 0x01000030),                // function keys
    Key_F2 ( 0x01000031),
    Key_F3 ( 0x01000032),
    Key_F4 ( 0x01000033),
    Key_F5 ( 0x01000034),
    Key_F6 ( 0x01000035),
    Key_F7 ( 0x01000036),
    Key_F8 ( 0x01000037),
    Key_F9 ( 0x01000038),
    Key_F10 ( 0x01000039),
    Key_F11 ( 0x0100003a),
    Key_F12 ( 0x0100003b),
    Key_F13 ( 0x0100003c),
    Key_F14 ( 0x0100003d),
    Key_F15 ( 0x0100003e),
    Key_F16 ( 0x0100003f),
    Key_F17 ( 0x01000040),
    Key_F18 ( 0x01000041),
    Key_F19 ( 0x01000042),
    Key_F20 ( 0x01000043),
    Key_F21 ( 0x01000044),
    Key_F22 ( 0x01000045),
    Key_F23 ( 0x01000046),
    Key_F24 ( 0x01000047),
    Key_F25 ( 0x01000048),                // F25 .. F35 only on X11
    Key_F26 ( 0x01000049),
    Key_F27 ( 0x0100004a),
    Key_F28 ( 0x0100004b),
    Key_F29 ( 0x0100004c),
    Key_F30 ( 0x0100004d),
    Key_F31 ( 0x0100004e),
    Key_F32 ( 0x0100004f),
    Key_F33 ( 0x01000050),
    Key_F34 ( 0x01000051),
    Key_F35 ( 0x01000052),
    Key_Super_L ( 0x01000053),                 // extra keys
    Key_Super_R ( 0x01000054),
    Key_Menu ( 0x01000055),
    Key_Hyper_L ( 0x01000056),
    Key_Hyper_R ( 0x01000057),
    Key_Help ( 0x01000058),
    Key_Direction_L ( 0x01000059),
    Key_Direction_R ( 0x01000060),
    Key_Space ( 0x20),                // 7 bit printable ASCII
    Key_Any ( Key_Space.getVal()),
    Key_Exclam ( 0x21),
    Key_QuoteDbl ( 0x22),
    Key_NumberSign ( 0x23),
    Key_Dollar ( 0x24),
    Key_Percent ( 0x25),
    Key_Ampersand ( 0x26),
    Key_Apostrophe ( 0x27),
    Key_ParenLeft ( 0x28),
    Key_ParenRight ( 0x29),
    Key_Asterisk ( 0x2a),
    Key_Plus ( 0x2b),
    Key_Comma ( 0x2c),
    Key_Minus ( 0x2d),
    Key_Period ( 0x2e),
    Key_Slash ( 0x2f),
    Key_0 ( 0x30),
    Key_1 ( 0x31),
    Key_2 ( 0x32),
    Key_3 ( 0x33),
    Key_4 ( 0x34),
    Key_5 ( 0x35),
    Key_6 ( 0x36),
    Key_7 ( 0x37),
    Key_8 ( 0x38),
    Key_9 ( 0x39),
    Key_Colon ( 0x3a),
    Key_Semicolon ( 0x3b),
    Key_Less ( 0x3c),
    Key_Equal ( 0x3d),
    Key_Greater ( 0x3e),
    Key_Question ( 0x3f),
    Key_At ( 0x40),
    Key_A ( 0x41),
    Key_B ( 0x42),
    Key_C ( 0x43),
    Key_D ( 0x44),
    Key_E ( 0x45),
    Key_F ( 0x46),
    Key_G ( 0x47),
    Key_H ( 0x48),
    Key_I ( 0x49),
    Key_J ( 0x4a),
    Key_K ( 0x4b),
    Key_L ( 0x4c),
    Key_M ( 0x4d),
    Key_N ( 0x4e),
    Key_O ( 0x4f),
    Key_P ( 0x50),
    Key_Q ( 0x51),
    Key_R ( 0x52),
    Key_S ( 0x53),
    Key_T ( 0x54),
    Key_U ( 0x55),
    Key_V ( 0x56),
    Key_W ( 0x57),
    Key_X ( 0x58),
    Key_Y ( 0x59),
    Key_Z ( 0x5a),
    Key_BracketLeft ( 0x5b),
    Key_Backslash ( 0x5c),
    Key_BracketRight ( 0x5d),
    Key_AsciiCircum ( 0x5e),
    Key_Underscore ( 0x5f),
    Key_QuoteLeft ( 0x60),
    Key_BraceLeft ( 0x7b),
    Key_Bar ( 0x7c),
    Key_BraceRight ( 0x7d),
    Key_AsciiTilde ( 0x7e),

    Key_nobreakspace ( 0x0a0),
    Key_exclamdown ( 0x0a1),
    Key_cent ( 0x0a2),
    Key_sterling ( 0x0a3),
    Key_currency ( 0x0a4),
    Key_yen ( 0x0a5),
    Key_brokenbar ( 0x0a6),
    Key_section ( 0x0a7),
    Key_diaeresis ( 0x0a8),
    Key_copyright ( 0x0a9),
    Key_ordfeminine ( 0x0aa),
    Key_guillemotleft ( 0x0ab),        // left angle quotation mark
    Key_notsign ( 0x0ac),
    Key_hyphen ( 0x0ad),
    Key_registered ( 0x0ae),
    Key_macron ( 0x0af),
    Key_degree ( 0x0b0),
    Key_plusminus ( 0x0b1),
    Key_twosuperior ( 0x0b2),
    Key_threesuperior ( 0x0b3),
    Key_acute ( 0x0b4),
    Key_mu ( 0x0b5),
    Key_paragraph ( 0x0b6),
    Key_periodcentered ( 0x0b7),
    Key_cedilla ( 0x0b8),
    Key_onesuperior ( 0x0b9),
    Key_masculine ( 0x0ba),
    Key_guillemotright ( 0x0bb),        // right angle quotation mark
    Key_onequarter ( 0x0bc),
    Key_onehalf ( 0x0bd),
    Key_threequarters ( 0x0be),
    Key_questiondown ( 0x0bf),
    Key_Agrave ( 0x0c0),
    Key_Aacute ( 0x0c1),
    Key_Acircumflex ( 0x0c2),
    Key_Atilde ( 0x0c3),
    Key_Adiaeresis ( 0x0c4),
    Key_Aring ( 0x0c5),
    Key_AE ( 0x0c6),
    Key_Ccedilla ( 0x0c7),
    Key_Egrave ( 0x0c8),
    Key_Eacute ( 0x0c9),
    Key_Ecircumflex ( 0x0ca),
    Key_Ediaeresis ( 0x0cb),
    Key_Igrave ( 0x0cc),
    Key_Iacute ( 0x0cd),
    Key_Icircumflex ( 0x0ce),
    Key_Idiaeresis ( 0x0cf),
    Key_ETH ( 0x0d0),
    Key_Ntilde ( 0x0d1),
    Key_Ograve ( 0x0d2),
    Key_Oacute ( 0x0d3),
    Key_Ocircumflex ( 0x0d4),
    Key_Otilde ( 0x0d5),
    Key_Odiaeresis ( 0x0d6),
    Key_multiply ( 0x0d7),
    Key_Ooblique ( 0x0d8),
    Key_Ugrave ( 0x0d9),
    Key_Uacute ( 0x0da),
    Key_Ucircumflex ( 0x0db),
    Key_Udiaeresis ( 0x0dc),
    Key_Yacute ( 0x0dd),
    Key_THORN ( 0x0de),
    Key_ssharp ( 0x0df),
    Key_division ( 0x0f7),
    Key_ydiaeresis ( 0x0ff),

    // International input method support (X keycode - 0xEE00), the
    // definition follows Qt/Embedded 2.3.7) Only interesting if
    // you are writing your own input method

    // International & multi-key character composition
    Key_AltGr               ( 0x01001103),
    Key_Multi_key           ( 0x01001120),  // Multi-key character compose
    Key_Codeinput           ( 0x01001137),
    Key_SingleCandidate     ( 0x0100113c),
    Key_MultipleCandidate   ( 0x0100113d),
    Key_PreviousCandidate   ( 0x0100113e),

    // Misc Functions
    Key_Mode_switch         ( 0x0100117e),  // Character set switch
    //Key_script_switch       ( 0x0100117e),  // Alias for mode_switch

    // Japanese keyboard support
    Key_Kanji               ( 0x01001121),  // Kanji), Kanji convert
    Key_Muhenkan            ( 0x01001122),  // Cancel Conversion
    //Key_Henkan_Mode         ( 0x01001123),  // Start/Stop Conversion
    Key_Henkan              ( 0x01001123),  // Alias for Henkan_Mode
    Key_Romaji              ( 0x01001124),  // to Romaji
    Key_Hiragana            ( 0x01001125),  // to Hiragana
    Key_Katakana            ( 0x01001126),  // to Katakana
    Key_Hiragana_Katakana   ( 0x01001127),  // Hiragana/Katakana toggle
    Key_Zenkaku             ( 0x01001128),  // to Zenkaku
    Key_Hankaku             ( 0x01001129),  // to Hankaku
    Key_Zenkaku_Hankaku     ( 0x0100112a),  // Zenkaku/Hankaku toggle
    Key_Touroku             ( 0x0100112b),  // Add to Dictionary
    Key_Massyo              ( 0x0100112c),  // Delete from Dictionary
    Key_Kana_Lock           ( 0x0100112d),  // Kana Lock
    Key_Kana_Shift          ( 0x0100112e),  // Kana Shift
    Key_Eisu_Shift          ( 0x0100112f),  // Alphanumeric Shift
    Key_Eisu_toggle         ( 0x01001130),  // Alphanumeric toggle
    //Key_Kanji_Bangou        ( 0x01001137),  // Codeinput
    //Key_Zen_Koho            ( 0x0100113d),  // Multiple/All Candidate(s)
    //Key_Mae_Koho            ( 0x0100113e),  // Previous Candidate

    // Korean keyboard support
    //
    // In fact), many Korean users need only 2 keys), Key_Hangul and
    // Key_Hangul_Hanja. But rest of the keys are good for future.

    Key_Hangul              ( 0x01001131),  // Hangul start/stop(toggle)
    Key_Hangul_Start        ( 0x01001132),  // Hangul start
    Key_Hangul_End          ( 0x01001133),  // Hangul end), English start
    Key_Hangul_Hanja        ( 0x01001134),  // Start Hangul->Hanja Conversion
    Key_Hangul_Jamo         ( 0x01001135),  // Hangul Jamo mode
    Key_Hangul_Romaja       ( 0x01001136),  // Hangul Romaja mode
    //Key_Hangul_Codeinput    ( 0x01001137),  // Hangul code input mode
    Key_Hangul_Jeonja       ( 0x01001138),  // Jeonja mode
    Key_Hangul_Banja        ( 0x01001139),  // Banja mode
    Key_Hangul_PreHanja     ( 0x0100113a),  // Pre Hanja conversion
    Key_Hangul_PostHanja    ( 0x0100113b),  // Post Hanja conversion
    //Key_Hangul_SingleCandidate   ( 0x0100113c),  // Single candidate
    //Key_Hangul_MultipleCandidate ( 0x0100113d),  // Multiple candidate
    //Key_Hangul_PreviousCandidate ( 0x0100113e),  // Previous candidate
    Key_Hangul_Special      ( 0x0100113f),  // Special symbols
    //Key_Hangul_switch       ( 0x0100117e),  // Alias for mode_switch

    // dead keys (X keycode - 0xED00 to avoid the conflict)
    Key_Dead_Grave          ( 0x01001250),
    Key_Dead_Acute          ( 0x01001251),
    Key_Dead_Circumflex     ( 0x01001252),
    Key_Dead_Tilde          ( 0x01001253),
    Key_Dead_Macron         ( 0x01001254),
    Key_Dead_Breve          ( 0x01001255),
    Key_Dead_Abovedot       ( 0x01001256),
    Key_Dead_Diaeresis      ( 0x01001257),
    Key_Dead_Abovering      ( 0x01001258),
    Key_Dead_Doubleacute    ( 0x01001259),
    Key_Dead_Caron          ( 0x0100125a),
    Key_Dead_Cedilla        ( 0x0100125b),
    Key_Dead_Ogonek         ( 0x0100125c),
    Key_Dead_Iota           ( 0x0100125d),
    Key_Dead_Voiced_Sound   ( 0x0100125e),
    Key_Dead_Semivoiced_Sound ( 0x0100125f),
    Key_Dead_Belowdot       ( 0x01001260),
    Key_Dead_Hook           ( 0x01001261),
    Key_Dead_Horn           ( 0x01001262),
    Key_Dead_Stroke         ( 0x01001263),
    Key_Dead_Abovecomma     ( 0x01001264),
    Key_Dead_Abovereversedcomma ( 0x01001265),
    Key_Dead_Doublegrave    ( 0x01001266),
    Key_Dead_Belowring      ( 0x01001267),
    Key_Dead_Belowmacron    ( 0x01001268),
    Key_Dead_Belowcircumflex ( 0x01001269),
    Key_Dead_Belowtilde     ( 0x0100126a),
    Key_Dead_Belowbreve     ( 0x0100126b),
    Key_Dead_Belowdiaeresis ( 0x0100126c),
    Key_Dead_Invertedbreve  ( 0x0100126d),
    Key_Dead_Belowcomma     ( 0x0100126e),
    Key_Dead_Currency       ( 0x0100126f),
    Key_Dead_a              ( 0x01001280),
    Key_Dead_A              ( 0x01001281),
    Key_Dead_e              ( 0x01001282),
    Key_Dead_E              ( 0x01001283),
    Key_Dead_i              ( 0x01001284),
    Key_Dead_I              ( 0x01001285),
    Key_Dead_o              ( 0x01001286),
    Key_Dead_O              ( 0x01001287),
    Key_Dead_u              ( 0x01001288),
    Key_Dead_U              ( 0x01001289),
    Key_Dead_Small_Schwa    ( 0x0100128a),
    Key_Dead_Capital_Schwa  ( 0x0100128b),
    Key_Dead_Greek          ( 0x0100128c),
    Key_Dead_Lowline        ( 0x01001290),
    Key_Dead_Aboveverticalline ( 0x01001291),
    Key_Dead_Belowverticalline ( 0x01001292),
    Key_Dead_Longsolidusoverlay ( 0x01001293),

    // multimedia/internet keys - ignored by default - see QKeyEvent c'tor
    Key_Back  ( 0x01000061),
    Key_Forward  ( 0x01000062),
    Key_Stop  ( 0x01000063),
    Key_Refresh  ( 0x01000064),
    Key_VolumeDown ( 0x01000070),
    Key_VolumeMute  ( 0x01000071),
    Key_VolumeUp ( 0x01000072),
    Key_BassBoost ( 0x01000073),
    Key_BassUp ( 0x01000074),
    Key_BassDown ( 0x01000075),
    Key_TrebleUp ( 0x01000076),
    Key_TrebleDown ( 0x01000077),
    Key_MediaPlay  ( 0x01000080),
    Key_MediaStop  ( 0x01000081),
    Key_MediaPrevious  ( 0x01000082),
    Key_MediaNext  ( 0x01000083),
    Key_MediaRecord ( 0x01000084),
    Key_MediaPause ( 0x1000085),
    Key_MediaTogglePlayPause ( 0x1000086),
    Key_HomePage  ( 0x01000090),
    Key_Favorites  ( 0x01000091),
    Key_Search  ( 0x01000092),
    Key_Standby ( 0x01000093),
    Key_OpenUrl ( 0x01000094),
    Key_LaunchMail  ( 0x010000a0),
    Key_LaunchMedia ( 0x010000a1),
    Key_Launch0  ( 0x010000a2),
    Key_Launch1  ( 0x010000a3),
    Key_Launch2  ( 0x010000a4),
    Key_Launch3  ( 0x010000a5),
    Key_Launch4  ( 0x010000a6),
    Key_Launch5  ( 0x010000a7),
    Key_Launch6  ( 0x010000a8),
    Key_Launch7  ( 0x010000a9),
    Key_Launch8  ( 0x010000aa),
    Key_Launch9  ( 0x010000ab),
    Key_LaunchA  ( 0x010000ac),
    Key_LaunchB  ( 0x010000ad),
    Key_LaunchC  ( 0x010000ae),
    Key_LaunchD  ( 0x010000af),
    Key_LaunchE  ( 0x010000b0),
    Key_LaunchF  ( 0x010000b1),
    Key_MonBrightnessUp ( 0x010000b2),
    Key_MonBrightnessDown ( 0x010000b3),
    Key_KeyboardLightOnOff ( 0x010000b4),
    Key_KeyboardBrightnessUp ( 0x010000b5),
    Key_KeyboardBrightnessDown ( 0x010000b6),
    Key_PowerOff ( 0x010000b7),
    Key_WakeUp ( 0x010000b8),
    Key_Eject ( 0x010000b9),
    Key_ScreenSaver ( 0x010000ba),
    Key_WWW ( 0x010000bb),
    Key_Memo ( 0x010000bc),
    Key_LightBulb ( 0x010000bd),
    Key_Shop ( 0x010000be),
    Key_History ( 0x010000bf),
    Key_AddFavorite ( 0x010000c0),
    Key_HotLinks ( 0x010000c1),
    Key_BrightnessAdjust ( 0x010000c2),
    Key_Finance ( 0x010000c3),
    Key_Community ( 0x010000c4),
    Key_AudioRewind ( 0x010000c5), // Media rewind
    Key_BackForward ( 0x010000c6),
    Key_ApplicationLeft ( 0x010000c7),
    Key_ApplicationRight ( 0x010000c8),
    Key_Book ( 0x010000c9),
    Key_CD ( 0x010000ca),
    Key_Calculator ( 0x010000cb),
    Key_ToDoList ( 0x010000cc),
    Key_ClearGrab ( 0x010000cd),
    Key_Close ( 0x010000ce),
    Key_Copy ( 0x010000cf),
    Key_Cut ( 0x010000d0),
    Key_Display ( 0x010000d1), // Output switch key
    Key_DOS ( 0x010000d2),
    Key_Documents ( 0x010000d3),
    Key_Excel ( 0x010000d4),
    Key_Explorer ( 0x010000d5),
    Key_Game ( 0x010000d6),
    Key_Go ( 0x010000d7),
    Key_iTouch ( 0x010000d8),
    Key_LogOff ( 0x010000d9),
    Key_Market ( 0x010000da),
    Key_Meeting ( 0x010000db),
    Key_MenuKB ( 0x010000dc),
    Key_MenuPB ( 0x010000dd),
    Key_MySites ( 0x010000de),
    Key_News ( 0x010000df),
    Key_OfficeHome ( 0x010000e0),
    Key_Option ( 0x010000e1),
    Key_Paste ( 0x010000e2),
    Key_Phone ( 0x010000e3),
    Key_Calendar ( 0x010000e4),
    Key_Reply ( 0x010000e5),
    Key_Reload ( 0x010000e6),
    Key_RotateWindows ( 0x010000e7),
    Key_RotationPB ( 0x010000e8),
    Key_RotationKB ( 0x010000e9),
    Key_Save ( 0x010000ea),
    Key_Send ( 0x010000eb),
    Key_Spell ( 0x010000ec),
    Key_SplitScreen ( 0x010000ed),
    Key_Support ( 0x010000ee),
    Key_TaskPane ( 0x010000ef),
    Key_Terminal ( 0x010000f0),
    Key_Tools ( 0x010000f1),
    Key_Travel ( 0x010000f2),
    Key_Video ( 0x010000f3),
    Key_Word ( 0x010000f4),
    Key_Xfer ( 0x010000f5),
    Key_ZoomIn ( 0x010000f6),
    Key_ZoomOut ( 0x010000f7),
    Key_Away ( 0x010000f8),
    Key_Messenger ( 0x010000f9),
    Key_WebCam ( 0x010000fa),
    Key_MailForward ( 0x010000fb),
    Key_Pictures ( 0x010000fc),
    Key_Music ( 0x010000fd),
    Key_Battery ( 0x010000fe),
    Key_Bluetooth ( 0x010000ff),
    Key_WLAN ( 0x01000100),
    Key_UWB ( 0x01000101),
    Key_AudioForward ( 0x01000102), // Media fast-forward
    Key_AudioRepeat ( 0x01000103), // Toggle repeat mode
    Key_AudioRandomPlay ( 0x01000104), // Toggle shuffle mode
    Key_Subtitle ( 0x01000105),
    Key_AudioCycleTrack ( 0x01000106),
    Key_Time ( 0x01000107),
    Key_Hibernate ( 0x01000108),
    Key_View ( 0x01000109),
    Key_TopMenu ( 0x0100010a),
    Key_PowerDown ( 0x0100010b),
    Key_Suspend ( 0x0100010c),
    Key_ContrastAdjust ( 0x0100010d),

    Key_LaunchG  ( 0x0100010e),
    Key_LaunchH  ( 0x0100010f),

    Key_TouchpadToggle ( 0x01000110),
    Key_TouchpadOn ( 0x01000111),
    Key_TouchpadOff ( 0x01000112),

    Key_MicMute ( 0x01000113),

    Key_Red ( 0x01000114),
    Key_Green ( 0x01000115),
    Key_Yellow ( 0x01000116),
    Key_Blue ( 0x01000117),

    Key_ChannelUp ( 0x01000118),
    Key_ChannelDown ( 0x01000119),

    Key_Guide    ( 0x0100011a),
    Key_Info     ( 0x0100011b),
    Key_Settings ( 0x0100011c),

    Key_MicVolumeUp   ( 0x0100011d),
    Key_MicVolumeDown ( 0x0100011e),

    Key_New      ( 0x01000120),
    Key_Open     ( 0x01000121),
    Key_Find     ( 0x01000122),
    Key_Undo     ( 0x01000123),
    Key_Redo     ( 0x01000124),

    Key_MediaLast ( 0x0100ffff),

    // Keypad navigation keys
    Key_Select ( 0x01010000),
    Key_Yes ( 0x01010001),
    Key_No ( 0x01010002),

    // Newer misc keys
    Key_Cancel  ( 0x01020001),
    Key_Printer ( 0x01020002),
    Key_Execute ( 0x01020003),
    Key_Sleep   ( 0x01020004),
    Key_Play    ( 0x01020005), // Not the same as Key_MediaPlay
    Key_Zoom    ( 0x01020006),
    //Key_Jisho   ( 0x01020007), // IME: Dictionary key
    //Key_Oyayubi_Left ( 0x01020008), // IME: Left Oyayubi key
    //Key_Oyayubi_Right ( 0x01020009), // IME: Right Oyayubi key
    Key_Exit    ( 0x0102000a),

    // Device keys
    Key_Context1 ( 0x01100000),
    Key_Context2 ( 0x01100001),
    Key_Context3 ( 0x01100002),
    Key_Context4 ( 0x01100003),
    Key_Call ( 0x01100004),      // set absolute state to in a call (do not toggle state)
    Key_Hangup ( 0x01100005),    // set absolute state to hang up (do not toggle state)
    Key_Flip ( 0x01100006),
    Key_ToggleCallHangup ( 0x01100007), // a toggle key for answering), or hanging up), based on current call state
    Key_VoiceDial ( 0x01100008),
    Key_LastNumberRedial ( 0x01100009),

    Key_Camera ( 0x01100020),
    Key_CameraFocus ( 0x01100021),

    Key_unknown ( 0x01ffffff);

   /* private static Map<Integer,KeyCode> keyCodeMap = Arrays.stream(KeyCode.values())
            .collect(Collectors.toMap(KeyCode::getVal,o -> o));*/

    private long val;
    KeyCode(long code) {
        this.val = code;
    }

    public long getVal() {
        return val;
    }

    public static KeyCode valueOf(int val) {
        KeyCode[] codes = KeyCode.values();
        for (KeyCode code : codes) {
            if (code.getVal() == val) {
                return code;
            }
        }
        return null;
    }

}
