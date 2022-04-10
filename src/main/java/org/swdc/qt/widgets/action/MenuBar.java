package org.swdc.qt.widgets.action;

import org.swdc.qt.internal.widgets.SMenuBar;
import org.swdc.qt.listeners.PaintListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.widgets.Size;
import org.swdc.qt.widgets.pane.Widget;

public class MenuBar extends Widget {

    private SMenuBar menuBar = new SMenuBar();

    @Override
    public WindowListener getWindowListener() {
        return menuBar.getWindowListener();
    }

    @Override
    public void setWindowListener(WindowListener listener) {
        menuBar.setWindowListener(listener);
    }

    @Override
    public void setPaintListener(PaintListener paintListener) {
        menuBar.setPaintListener(paintListener);
    }

    @Override
    public PaintListener getPaintListener() {
        return menuBar.getPaintListener();
    }

    @Override
    public void allocate() throws Exception {
        if (accessible() ) {
            return;
        }
        long pointer = menuBar.create();
        if (pointer <= 0) {
            throw new Exception("failed to create menu-bar");
        }
        menuBar.address(pointer);
    }


    public Action addAction(String text) {
        if (accessible()) {
            long pointer = menuBar.addAction(getPointer(),text);
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action addMenu(Menu menu) {
        if (accessible(menu)) {
            long pointer = menuBar.addMenu(getPointer(),menu.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Menu addMenu(String title) {
        if (accessible(title)) {
            try {
                long pointer = menuBar.addMenu(getPointer(),title);
                Menu menu = new Menu();
                menu.wrap(pointer);
                return menu;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Action addSeparator() {
        if (accessible()) {
            long pointer = menuBar.addSeparator(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action insertSeparator(Action beforeAction) {
        if (accessible(beforeAction)) {
            long pointer = menuBar.insertSeparator(getPointer(),beforeAction.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action insertMenu(Action beforeAction, Menu menu) {
        if (accessible(beforeAction,menu)) {
            long pointer = menuBar.insertMenu(getPointer(),beforeAction.getPointer(),menu.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public void clear(){
        if (accessible()) {
            menuBar.clear(getPointer());
        }
    }

    public void setActiveAction(Action action) {

        if (accessible(action)) {
            menuBar.setActiveAction(getPointer(),action.getPointer());
        }

    }

    public void setDefaultUp(boolean val) {
        if (accessible()) {
          menuBar.setDefaultUp(getPointer(),val);
        }
    }

    public boolean isDefaultUp() {
        if (accessible()) {
            return menuBar.isDefaultUp(getPointer());
        }
        return false;
    }

    public Size sizeHint() {
        if (accessible()) {
            long pointer = menuBar.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (accessible()) {
            long pointer = menuBar.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public int heightForWidth(int val) {
        if (accessible()) {
            return menuBar.heightForWidth(getPointer(),val);
        }
        return 0;
    }

    public void setVisible(boolean visible) {
        if (accessible()) {
            menuBar.setVisible(getPointer(),visible);
        }
    }

    @Override
    public long getPointer() {
        return menuBar.address();
    }
}
