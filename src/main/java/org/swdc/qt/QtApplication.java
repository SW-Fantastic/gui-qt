package org.swdc.qt;

import java.io.File;
import java.util.concurrent.ConcurrentHashMap;

public class QtApplication {

    private long pointer;

    private ConcurrentHashMap<String,Long> loadedLanguages = new ConcurrentHashMap<>();

    public QtApplication(int argc, String[] argv) {
        pointer = this.create(argc,argv,new File(".").getAbsolutePath());
    }

    public void exec() {
        this.exec(pointer);
    }

    public void language(File qmLanguageFile){
        if (!qmLanguageFile.exists()) {
            return;
        }

        String absPath = qmLanguageFile
                .getAbsoluteFile()
                .getParentFile()
                .getAbsolutePath();

        long langPointer = loadLanguage(pointer,absPath,qmLanguageFile.getName());
        loadedLanguages.put(qmLanguageFile.getAbsolutePath(),langPointer);
    }

    public void removeLanguage(File language) {
        if (!language.exists()) {
            return;
        }
        language = language.getAbsoluteFile();
        if (loadedLanguages.containsKey(language.getAbsolutePath())) {
            long pointer = loadedLanguages.remove(language.getAbsolutePath());
            disposeLanguage(this.pointer,pointer);
        }
    }

    private native void disposeLanguage(long pointer,long translator);
    private native long loadLanguage(long pointer,String absPath,String fileName);
    private native long create(int argc, String[] argv,String dir);
    private native void exec(long pointer);

}
