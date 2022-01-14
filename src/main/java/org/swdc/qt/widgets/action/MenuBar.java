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
        if (getPointer() > 0 ) {
            return;
        }
        long pointer = menuBar.create();
        if (pointer <= 0) {
            throw new Exception("failed to create menu-bar");
        }
        menuBar.address(pointer);
    }


    public Action addAction(String text) {
        if (getPointer() > 0) {
            try {
                long pointer = menuBar.addAction(getPointer(),text);
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Action addMenu(Menu menu) {
        if (getPointer() > 0 && menu.getPointer() > 0) {
            try {
                long pointer = menuBar.addMenu(getPointer(),menu.getPointer());
                Action target = new Action();
                target.wrap(pointer);
                return target;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Menu addMenu(String title) {
        if (getPointer() > 0) {
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
        if (getPointer() > 0) {
            try {
                long pointer = menuBar.addSeparator(getPointer());
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }
    public Action insertSeparator(Action beforeAction) {
        if (getPointer() > 0 && beforeAction.getPointer() > 0) {
            try {
                long pointer = menuBar.insertSeparator(getPointer(),beforeAction.getPointer());
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Action insertMenu(Action beforeAction, Menu menu) {
        if (getPointer() > 0 && beforeAction.getPointer() > 0 && menu.getPointer() > 0) {
            try {
                long pointer = menuBar.insertMenu(getPointer(),beforeAction.getPointer(),menu.getPointer());
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public void clear(){
        if (getPointer() > 0) {
            menuBar.clear(getPointer());
        }
    }

    public void setActiveAction(Action action) {

        if (getPointer() > 0 && action.getPointer() > 0) {
            menuBar.setActiveAction(getPointer(),action.getPointer());
        }

    }

    public void setDefaultUp(boolean val) {
        if (getPointer() > 0) {
          menuBar.setDefaultUp(getPointer(),val);
        }
    }

    public boolean isDefaultUp() {
        if (getPointer() > 0) {
            return menuBar.isDefaultUp(getPointer());
        }
        return false;
    }

    public Size sizeHint() {
        if (getPointer() > 0) {
            long pointer = menuBar.sizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public Size minimumSizeHint() {
        if (getPointer() > 0) {
            long pointer = menuBar.minimumSizeHint(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Size.asSize(pointer);
        }
        return null;
    }

    public int heightForWidth(int val) {
        if (getPointer() > 0) {
            return menuBar.heightForWidth(getPointer(),val);
        }
        return 0;
    }

    public void setVisible(boolean visible) {
        if (getPointer() > 0) {
            menuBar.setVisible(getPointer(),visible);
        }
    }

    @Override
    public long getPointer() {
        return menuBar.address();
    }
}
