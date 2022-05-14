package org.swdc.qt.widgets.action;

import org.swdc.qt.internal.MemoryHolder;
import org.swdc.qt.internal.widgets.SMenu;
import org.swdc.qt.widgets.Point;
import org.swdc.qt.widgets.graphics.Icon;
import org.swdc.qt.widgets.graphics.Painter;
import org.swdc.qt.widgets.pane.Widget;

public class Menu extends Widget {

    private SMenu menu = new SMenu();

    @Override
    public void allocate() throws Exception {
        if (accessible()) {
            return;
        }
        long pointer = menu.create();
        if (pointer <= 0) {
            throw new Exception("failed to create menu");
        }
        this.menu.address(pointer);
        MemoryHolder.allocated(this);
    }

    void wrap(long pointer) throws Exception {
        if (accessible()) {
            return;
        }
        if (pointer <= 0) {
            throw new Exception("invalid pointer");
        }
        menu.address(pointer);
        menu.wrap(pointer);
    }

    public Action addAction(String text) {
        if (accessible(text)) {
            long pointer = menu.addAction(getPointer(),text);
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action addAction(Icon icon,String text) {
        if (accessible(icon,text)) {
            long pointer = menu.addAction(getPointer(),icon.getPointer(),text);
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action addMenu(Menu target) {
        if (accessible(menu)) {
            long pointer = menu.addMenu(getPointer(),target.getPointer());
            if (pointer <= 0){
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Menu addMenu(String text) {
        if (accessible(text)) {
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
        if (accessible(icon,text)) {
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
        if (accessible()) {
            long pointer = menu.addSeparator(getPointer());
            if (pointer <= 0){
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action addSection(String text) {
        if (accessible(text)) {
            long pointer = menu.addSection(getPointer(),text);
            if (getPointer() < 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action insertMenu(Action beforeAction, Menu menu) {
        if (accessible(menu)) {
            long pointer = this.menu.insertMenu(getPointer(),beforeAction.getPointer(),menu.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }
    public Action insertSeparator(Action beforeAction) {
        if (accessible(beforeAction)) {
            long pointer = menu.insertSeparator(getPointer(),beforeAction.getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public Action insertSection(Action beforeAction, String text) {
        if (accessible(beforeAction,text)) {
            long pointer = menu.insertSection(getPointer(),beforeAction.getPointer(),text);
            if (pointer <= 0) {
                return null;
            }
            return Action.asAction(pointer);
        }
        return null;
    }

    public void setTearOffEnabled(boolean val) {
        if (accessible()) {
            menu.setTearOffEnabled(getPointer(),val);
        }
    }

    public boolean isTearOffEnabled() {
        if (accessible()) {
            return menu.isTearOffEnabled(getPointer());
        }
        return false;
    }

    public boolean isTearOffMenuVisible() {
        if (accessible()) {
            return menu.isTearOffMenuVisible(getPointer());
        }
        return false;
    }

    public void showTearOffMenu(int x, int y) {
        if (accessible()) {
            menu.showTearOffMenu(getPointer(),x,y);
        }
    }

    public void hideTearOffMenu() {
        if (accessible()) {
            menu.hideTearOffMenu(getPointer());
        }
    }

    public void setDefaultAction(Action action) {
        if (accessible(action)) {
            menu.setDefaultAction(getPointer(),action.getPointer());
        }
    }

    public void setActiveAction(Action action) {
        if (accessible(action)) {
            menu.setActiveAction(getPointer(),action.getPointer());
        }
    }

    public boolean isSeparatorsCollapsible() {
        if (accessible()) {
            return menu.separatorsCollapsible(getPointer());
        }
        return false;
    }

    public void setSeparatorsCollapsible(boolean collapse) {
        if (accessible()) {
            menu.setSeparatorsCollapsible(getPointer(),collapse);
        }
    }

    public boolean isToolTipsVisible() {
        if (accessible()) {
            return menu.toolTipsVisible(getPointer());
        }
        return false;
    }

    public void setToolTipsVisible(boolean visible) {
        if (accessible()){
            menu.setToolTipsVisible(getPointer(),visible);
        }
    }

    public String getTitle() {
        if (accessible()) {
            return menu.title(getPointer());
        }
        return "";
    }

    public void setTitle(String title) {
        if (accessible(title)) {
            menu.setTitle(getPointer(),title);
        }
    }

    public boolean isEmpty() {
        if (accessible()) {
            return menu.isEmpty(getPointer());
        }
        return true;
    }

    public void clear(){
        if (accessible()) {
            menu.clear(getPointer());
        }
    }

    public <T extends Widget> void popup(T widget,int x, int y) {
        if (accessible(widget)) {
            menu.popup(getPointer(),widget.getPointer(),x,y);
        }
    }

    public void popup(Point point) {
        if (accessible(point)) {
            menu.popup(getPointer(),point.getPointer());
        }
    }

    public Icon icon() {
        if (accessible()) {
            long pointer = menu.icon(getPointer());
            if (pointer <= 0) {
                return null;
            }
            return Icon.asIcon(pointer);
        }
        return null;
    }

    public void setIcon(Icon icon) {
        if (accessible(icon)) {
            menu.setIcon(getPointer(),icon.getPointer());
        }
    }

    @Override
    public long getPointer() {
        return menu.address();
    }

    public static Menu asMenu(long pointer) {
        if (pointer <= 0) {
            throw new RuntimeException("can not create a menu, invalid pointer");
        }
        try {
            Menu menu = new Menu();
            menu.wrap(pointer);
            MemoryHolder.allocated(menu);
            return menu;
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }
}
