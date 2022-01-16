package org.swdc.qt.widgets.action;

import org.swdc.qt.internal.widgets.SMenu;
import org.swdc.qt.widgets.Point;
import org.swdc.qt.widgets.graphics.Icon;
import org.swdc.qt.widgets.graphics.Painter;
import org.swdc.qt.widgets.pane.Widget;

public class Menu extends Widget {

    private SMenu menu = new SMenu();

    @Override
    public void allocate() throws Exception {
        if (getPointer() > 0) {
            return;
        }
        long pointer = menu.create();
        if (pointer <= 0) {
            throw new Exception("failed to create menu");
        }
        this.menu.address(pointer);
    }

    void wrap(long pointer) throws Exception {
        if (getPointer() > 0) {
            return;
        }
        if (pointer <= 0) {
            throw new Exception("invalid pointer");
        }
        menu.address(pointer);
        menu.wrap(pointer);
    }

    public Action addAction(String text) {
        if (getPointer() > 0) {
            try {
                long pointer = menu.addAction(getPointer(),text);
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Action addAction(Icon icon,String text) {
        if (getPointer() > 0 && icon.getPointer() > 0) {
            try {
                long pointer = menu.addAction(getPointer(),icon.getPointer(),text);
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Action addMenu(Menu target) {
        if (getPointer() > 0 && target.getPointer() > 0) {
            long pointer = menu.addMenu(getPointer(),target.getPointer());
            try {
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Menu addMenu(String text) {
        if (getPointer() > 0) {
            long pointer = menu.addMenu(getPointer(),text);
            try {
                Menu menu = new Menu();
                menu.wrap(pointer);
                return menu;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Menu addMenu(Icon icon,String text) {
        if (getPointer() > 0 && icon.getPointer() > 0) {
            long pointer = menu.addMenu(getPointer(),icon.getPointer(),text);
            try {
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
            long pointer = menu.addSeparator(getPointer());
            try {
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Action addSection(String text) {
        if (getPointer() > 0) {
            long pointer = menu.addSection(getPointer(),text);
            try {
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
            long pointer = this.menu.insertMenu(getPointer(),beforeAction.getPointer(),menu.getPointer());
            try {
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
            long pointer = menu.insertSeparator(getPointer(),beforeAction.getPointer());
            try {
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public Action insertSection(Action beforeAction, String text) {
        if (getPointer() > 0 && beforeAction.getPointer() > 0) {
            long pointer = menu.insertSection(getPointer(),beforeAction.getPointer(),text);
            try {
                Action action = new Action();
                action.wrap(pointer);
                return action;
            } catch (Exception e) {
                throw new RuntimeException(e);
            }
        }
        return null;
    }

    public void setTearOffEnabled(boolean val) {
        if (getPointer() > 0) {
            menu.setTearOffEnabled(getPointer(),val);
        }
    }

    public boolean isTearOffEnabled() {
        if (getPointer() > 0) {
            return menu.isTearOffEnabled(getPointer());
        }
        return false;
    }

    public boolean isTearOffMenuVisible() {
        if (getPointer() > 0) {
            return menu.isTearOffMenuVisible(getPointer());
        }
        return false;
    }

    public void showTearOffMenu(int x, int y) {
        if (getPointer() > 0) {
            menu.showTearOffMenu(getPointer(),x,y);
        }
    }

    public void hideTearOffMenu() {
        if (getPointer() > 0) {
            menu.hideTearOffMenu(getPointer());
        }
    }

    public void setDefaultAction(Action action) {
        if (getPointer() > 0 && action.getPointer() > 0) {
            menu.setDefaultAction(getPointer(),action.getPointer());
        }
    }

    public void setActiveAction(Action action) {
        if (getPointer() > 0) {
            menu.setActiveAction(getPointer(),action.getPointer());
        }
    }

    public boolean isSeparatorsCollapsible() {
        if (getPointer() > 0) {
            return menu.separatorsCollapsible(getPointer());
        }
        return false;
    }

    public void setSeparatorsCollapsible(boolean collapse) {
        if (getPointer() > 0) {
            menu.setSeparatorsCollapsible(getPointer(),collapse);
        }
    }

    public boolean isToolTipsVisible() {
        if (getPointer() > 0) {
            return menu.toolTipsVisible(getPointer());
        }
        return false;
    }

    public void setToolTipsVisible(boolean visible) {
        if (getPointer() > 0){
            menu.setToolTipsVisible(getPointer(),visible);
        }
    }

    public String getTitle() {
        if (getPointer() > 0) {
            return menu.title(getPointer());
        }
        return "";
    }

    public void setTitle(String title) {
        if (getPointer() > 0) {
            menu.setTitle(getPointer(),title);
        }
    }

    public boolean isEmpty() {
        if (getPointer() > 0) {
            return menu.isEmpty(getPointer());
        }
        return true;
    }

    public void clear(){
        if (getPointer() > 0) {
            menu.clear(getPointer());
        }
    }

    public <T extends Widget> void popup(T widget,int x, int y) {
        if (getPointer() > 0 && widget.getPointer() > 0) {
            menu.popup(getPointer(),widget.getPointer(),x,y);
        }
    }

    public void popup(Point point) {
        if (getPointer() > 0 && point.getPointer() > 0) {
            menu.popup(getPointer(),point.getPointer());
        }
    }

    public Icon icon() {
        if (getPointer() > 0) {
            long pointer = menu.icon(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Icon.asIcon(pointer);
        }
        return null;
    }

    public void setIcon(Icon icon) {
        if (getPointer() > 0 && icon.getPointer() > 0) {
            menu.setIcon(getPointer(),icon.getPointer());
        }
    }

    @Override
    public long getPointer() {
        return menu.address();
    }
}
