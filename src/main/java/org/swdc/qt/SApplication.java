package org.swdc.qt;

import java.io.File;

public class SApplication {

    private long pointer;

    public SApplication(int argc, String[] argv) {
        pointer = this.create(argc,argv,new File(".").getAbsolutePath());
    }

    public void exec() {
        this.exec(pointer);
    }

    private native long create(int argc, String[] argv,String dir);

    private native void exec(long pointer);

}
