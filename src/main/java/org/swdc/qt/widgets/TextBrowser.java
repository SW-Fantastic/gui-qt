package org.swdc.qt.widgets;

import org.swdc.qt.internal.widgets.STextBrowser;
import org.swdc.qt.widgets.text.TextDocumentResource;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.Objects;
import java.util.stream.Collectors;

public class TextBrowser extends TextEdit {

    private STextBrowser textBrowser = new STextBrowser();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = textBrowser.create(0L);
        if (pointer <= 0) {
            throw new Exception("can not create text-browser, allocation failed");
        }
        textBrowser.address(pointer);
    }

    @Override
    public void dispose() {
        if (accessible()) {
            textBrowser.dispose(getPointer());
            textBrowser.cleanAddress();
        }
    }

    @Override
    public long getPointer() {
        return textBrowser.address();
    }

    public String getSource() {
        return accessible() ? textBrowser.source(getPointer()) : null ;
    }

    public TextDocumentResource getSourceType() {
        return accessible() ? TextDocumentResource.valueOf(textBrowser.sourceType(getPointer())) : null;
    }

    public List<String> getSearchPaths() {
        if (accessible()) {
            return Arrays.stream(textBrowser.searchPaths(getPointer()))
                    .filter(Objects::nonNull)
                    .collect(Collectors.toList());
        }
        return Collections.emptyList();
    }

    public void setSearchPaths(List<String> paths) {
        if (accessible(paths)) {
            textBrowser.setSearchPaths(getPointer(),paths.toArray(new String[0]));
        }
    }

    public Variant loadResource(TextDocumentResource type,String url) {
        if (accessible(type,url)) {
            long pointer = textBrowser.loadResource(getPointer(),type.getVal(),url);
            if (pointer > 0) {
                return Variant.asVariant(pointer);
            }
        }
        return null;
    }

    public boolean isBackwardAvailable() {
        return accessible() && textBrowser.isBackwardAvailable(getPointer());
    }

    public boolean isForwardAvailable() {
        return accessible() && textBrowser.isForwardAvailable(getPointer());
    }

    public void clearHistory() {
        if (accessible()) {
            textBrowser.clearHistory(getPointer());
        }
    }

    public String getHistoryTitle(int val) {
        if (accessible()) {
            return textBrowser.historyTitle(getPointer(),val);
        }
        return null;
    }

    public String getHistoryUrl(int val){
        if (accessible()) {
            return textBrowser.historyUrl(getPointer(),val);
        }
        return null;
    }

    public int backwardHistoryCount() {
        return accessible() ? textBrowser.backwardHistoryCount(getPointer()) : 0;
    }

    public int forwardHistoryCount() {
        return accessible() ? textBrowser.forwardHistoryCount(getPointer()) : 0;
    }

    public boolean isOpenExternalLinks() {
        return accessible() && textBrowser.openExternalLinks(getPointer());
    }

    public void setOpenExternalLinks(boolean open) {
        if (accessible()) {
            textBrowser.setOpenExternalLinks(getPointer(),open);
        }
    }

    public boolean isOpenLinks() {
        return accessible() && textBrowser.openLinks(getPointer());
    }

    public void setOpenLinks(boolean open) {
        if (accessible()) {
            textBrowser.setOpenLinks(getPointer(),open);
        }
    }

    public void setSource(String url,TextDocumentResource type){
        if (accessible(url,type)) {
            textBrowser.setSource(getPointer(),url,type.getVal());
        }
    }

    public void backward() {
        if (accessible()) {
            textBrowser.backward(getPointer());
        }
    }

    public void forward() {
        if (accessible()) {
            textBrowser.forward(getPointer());
        }
    }

    public void home() {
        if (accessible()) {
            textBrowser.home(getPointer());
        }
    }

    public void reload() {
        if (accessible()) {
            textBrowser.reload(getPointer());
        }
    }

}
