package org.swdc.qt.widgets.text;

import org.swdc.qt.NativeAllocated;
import org.swdc.qt.internal.text.STextDocumentFragment;

import java.nio.charset.Charset;

public class TextDocumentFragment implements NativeAllocated {

    private STextDocumentFragment fragment = new STextDocumentFragment();

    public void allocate()throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = fragment.create();
        if (pointer <= 0) {
            throw new Exception("can not create a document fragment, invalid pointer");
        }
        fragment.address(pointer);
    }

    public void allocate(TextDocument document) throws Exception {
        if (accessible() || !accessible(document)) {
            return;
        }
        long pointer = fragment.createByDocument(document.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a document fragment, invalid pointer");
        }
        fragment.address(pointer);
    }

    public void allocate(TextCursor cursor) throws Exception {
        if (accessible() || !accessible(cursor)) {
            return;
        }
        long pointer = fragment.createByCursor(cursor.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a document fragment, invalid pointer");
        }
        fragment.address(pointer);
    }

    public void allocate(TextDocumentFragment fragment) throws Exception {
        if (accessible() || !accessible(fragment)) {
            return;
        }
        long pointer = fragment.fragment.createByFragment(fragment.getPointer());
        if (pointer <= 0) {
            throw new Exception("can not create a document fragment, invalid pointer");
        }
        this.fragment.address(pointer);
    }

    public boolean isEmpty() {
        if (accessible()) {
            return fragment.isEmpty(getPointer());
        }
        return false;
    }

    public String toPlainText() {
        if (accessible()) {
            return fragment.toPlainText(getPointer());
        }
        return null;
    }

    public String toHtml(Charset encoding) {
        if (accessible()) {
            return fragment.toHtml(getPointer(),encoding.name());
        }
        return null;
    }

    public static TextDocumentFragment asDocumentFragment(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a fragment, because invalid pointer");
        }
        TextDocumentFragment fragment  = new TextDocumentFragment();
        fragment.fragment.address(pointer);
        return fragment;
    }

    public static TextDocumentFragment fromPlainText(String plainText) {
        return asDocumentFragment(STextDocumentFragment.fromPlainText(plainText));
    }

    public static TextDocumentFragment fromHtml(String html) {
        return asDocumentFragment(STextDocumentFragment.fromHtml(html));
    }

    public static TextDocumentFragment fromHtml(String html,TextDocument document) {
        if (document == null || document.getPointer() <= 0) {
            throw new RuntimeException("can not create text-document-fragment, because document is invalid");
        }
        return asDocumentFragment(STextDocumentFragment.fromHtml(html,document.getPointer()));
    }

    @Override
    public void dispose() {
        if (accessible()) {
            fragment.dispose(getPointer());
        }
    }

    @Override
    public long getPointer() {
        return fragment.address();
    }

}
