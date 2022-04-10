package org.swdc.qt.widgets.text;

import org.swdc.qt.internal.text.STextList;

public class TextList {

    private STextList textList = new STextList();

    public void allocate(TextDocument document) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (document == null || document.getPointer() <= 0) {
            throw new Exception("can not allocate a textlist because document is invalid");
        }
        long pointer = textList.create(document.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a textlist, invalid pointer");
        }
        textList.address(pointer);
    }

    public void dispose() {
        if (getPointer() > 0) {
            textList.dispose(getPointer());
            textList.cleanAddress();
        }
    }

    public long getPointer() {
        return textList.address();
    }


    public int count() {
        if (getPointer() > 0) {
            return textList.count(getPointer());
        }
        return 0;
    }

    public TextBlock getItem(int i) {
        if (getPointer() > 0) {
            long pointer = textList.item(getPointer(),i);
            if (pointer > 0) {
                return TextBlock.asTextBlock(pointer);
            }
        }
        return null;
    }

    public int getItemNumber(TextBlock textBlock) {
        if (getPointer() > 0 && textBlock != null && textBlock.getPointer() > 0) {
            return textList.itemNumber(getPointer(),textBlock.getPointer());
        }
        return 0;
    }

    public String getItemText(TextBlock textBlock) {
        if (getPointer() > 0 && textBlock != null && textBlock.getPointer() > 0) {
            return textList.itemText(getPointer(),textBlock.getPointer());
        }
        return null;
    }

    public void removeItem(int i) {
        if (getPointer() > 0) {
            textList.removeItem(getPointer(),i);
        }
    }

    public void remove(TextBlock textBlock){
        if (getPointer() > 0 && textBlock != null && textBlock.getPointer() > 0) {
            textList.remove(getPointer(),textBlock.getPointer());
        }
    }

    public void add(TextBlock textBlock){
        if (getPointer() > 0 && textBlock != null && textBlock.getPointer() > 0) {
            textList.add(getPointer(),textBlock.getPointer());
        }
    }

    public void setFormat(TextListFormat format) {
        if (getPointer() > 0 && format == null && format.getPointer() > 0) {
            textList.setFormat(getPointer(),format.getPointer());
        }
    }

    public TextListFormat getFormat() {
        if (getPointer() > 0) {
            long pointer = textList.format(getPointer());
            if (pointer > 0) {
                return TextListFormat.asTextListFormat(pointer);
            }
        }
        return null;
    }

    public static TextList asTextList(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not wrap the textlist because the pointer is invalid");
        }
        TextList list = new TextList();
        list.textList.address(pointer);
        return list;
    }


}
