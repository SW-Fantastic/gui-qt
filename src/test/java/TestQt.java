import org.apache.commons.lang3.tuple.MutablePair;
import org.swdc.qt.QtApplication;
import org.swdc.qt.beans.*;
import org.swdc.qt.internal.graphics.SRgb;
import org.swdc.qt.listeners.ActionListener;
import org.swdc.qt.listeners.WindowListener;
import org.swdc.qt.layout.HBoxLayout;
import org.swdc.qt.layout.SpacerItem;
import org.swdc.qt.layout.VBoxLayout;
import org.swdc.qt.widgets.*;
import org.swdc.qt.widgets.action.Action;
import org.swdc.qt.widgets.action.Menu;
import org.swdc.qt.widgets.action.MenuBar;
import org.swdc.qt.widgets.action.ToolButton;
import org.swdc.qt.widgets.graphics.*;
import org.swdc.qt.widgets.pane.StackedWidget;
import org.swdc.qt.widgets.pane.TabWidget;
import org.swdc.qt.widgets.pane.Widget;

import java.io.File;
import java.util.Arrays;

public class TestQt {

    static {
        System.load(new File("libgui.dll").getAbsolutePath());
    }

    public static void main(String[] args) throws Exception {

        QtApplication application = new QtApplication(args.length, args);


        Widget widget = new Widget();
        widget.allocate();
        widget.setMinSize(800,600);

        PushButton button = new PushButton();
        button.allocate();
        button.setText("Text");
        button.setMinSize(120,30);
        button.setClickListener(() -> {
            System.err.println("clicked");
        });

        System.err.println(button.getBaseSize());

        Rect rect = button.getFrameGeometry();
        System.err.println(rect);
        rect.dispose();

        widget.setStyleSheet("" +
                "QWidget { " +
                "   font-family:Microsoft YaHei;" +
                "   background-color: #D8F3E4;" +
                "   font-size: 14px;" +
                "}" +
                "QPushButton{" +
                "   font-family:FZMiaoWuS-GB;" +
                "   font-size: 20px;" +
                "   background-color:#68CA93;" +
                "   color: #FFF;" +
                "   border-width: 0px;" +
                "   border-style: solid;" +
                "   border-radius: 4px;" +
                "}" +
                "" +
                "QPushButton:hover{" +
                "   background-color:#8DD8AE;" +
                "}" +
                "QLineEdit {" +
                "   background-color: #FFF;" +
                "   border-width:1px;" +
                "   border-style:solid;" +
                "   border-radius: 5px;" +
                "   border-color:#8DD8AE " +
                "}" +
                ".tab-stacked{" +
                "}" +
                "QTabWidget::pane{" +
                "   border-width:1px;" +
                "   border-style:solid;" +
                "   border-radius: 5px;" +
                "   border-color:#8DD8AE;" +
                "}" +
                "");

        LineEdit field = new LineEdit();
        field.allocate();
        field.setMinSize(120,32);
        field.setFocus();

        SpacerItem sSpacer = new SpacerItem();
        sSpacer.allocate(8,0);

        HBoxLayout layout = new HBoxLayout();
        layout.allocate();

        layout.addWidget(field);
        layout.addSpacerItem(sSpacer);
        layout.addWidget(button);
        layout.setContentsMargins(12,12,24,24);



        Widget tabA = new Widget();
        tabA.allocate();

        VBoxLayout tabALayout = new VBoxLayout();
        tabALayout.allocate();

        Widget tabB = new Widget();
        tabB.allocate();

        ToolButton toolButton = new ToolButton();
        toolButton.allocate();
        Action toolAction = new Action();
        toolAction.allocate();
        toolAction.setActionListener(new ActionListener() {
            @Override
            public void onAction(boolean isSelected) {
                System.err.println("active");
            }

            @Override
            public void onToggle(boolean isSelected) {

            }

            @Override
            public void onHover() {

            }

            @Override
            public void onChanged() {

            }
        });
        toolButton.setText("Test");
        toolButton.setMinSize(80,40);
        tabALayout.addWidget(toolButton);
        tabA.setLayout(tabALayout);

        tabA.setPaintListener(painter -> {
            try {

                /*Color color = new Color();
                color.allocate("#FFF");*/

                Color colorA = new Color();
                colorA.allocate("#84fab0");

                Color colorB = new Color();
                colorB.allocate("#8fd3f4");

                Size size = widget.size();

                LinearGradient l = new LinearGradient();
                l.allocate();
                l.setStops(Arrays.asList(
                        MutablePair.of(0.0,colorA.getVal()),
                        MutablePair.of(1.0,colorB.getVal())
                ));

                l.setStart(0,0);
                l.setFinalStop(size.getWidth(),size.getHeight());

                Brush brush = new Brush();
                brush.allocate(l);

                painter.fillRect(0,0,size.getWidth(),size.getHeight(),brush);

                System.err.println("painted!");
            } catch (Exception e) {
                e.printStackTrace();
            }

        });


        TabWidget tabWidget = new TabWidget();
        tabWidget.allocate();
        tabWidget.addTab(tabA,"Test TabA");
        tabWidget.addTab(tabB,"Test TabB");

        StackedWidget stackedWidget = new StackedWidget();
        stackedWidget.allocate();
        stackedWidget.setProperty("class","tab-stacked");
        stackedWidget.addWidget(tabWidget);
        stackedWidget.setContentMargins(8,8,8,8);

        VBoxLayout vbox = new VBoxLayout();
        vbox.allocate();
        vbox.setContentsMargins(0,0,0,0);

        Font font = Font.load(new File("font.ttf"));
        System.err.println(font.getFamily());

        font.setPixelSize(24);

        button.setFont(font);
        field.setFont(font);

        MenuBar menuBar = new MenuBar();
        menuBar.allocate();
        menuBar.setStyleSheet("background-color:#FFF");

        Menu fileMenu = new Menu();
        fileMenu.allocate();
        fileMenu.setTitle("File 文件");
        fileMenu.addAction("Open 打开");
        fileMenu.addAction("Edit 编辑");
        fileMenu.addSeparator();
        fileMenu.addAction("Exit 退出");


        menuBar.addMenu(fileMenu);

        vbox.addWidget(menuBar);


        vbox.addLayout(layout);
        vbox.addWidget(stackedWidget);

        Menu menu = new Menu();
        menu.allocate();

        Action actionC = new Action();
        actionC.allocate();
        actionC.setText("Text Action C");
        menu.addAction(actionC);

        Icon icon = new Icon();
        icon.allocate(new File("java.png"));

        Menu subMenu = new Menu();
        subMenu.allocate();
        subMenu.addAction("Sub A");
        subMenu.addAction(icon,"Sub B");
        subMenu.setIcon(icon);

        Action menuAction = menu.addMenu(subMenu);
        menuAction.setText("Sub");

        ActionListener listener = new ActionListener() {
            @Override
            public void onAction(boolean isSelected) {
                System.err.println("Action A Clicked.");
                Pixmap pixmap = Pixmap.grabWidget(widget,0,0,800,600);
                pixmap.save(new File("grab.png"),"png");
                pixmap.dispose();
            }

            @Override
            public void onToggle(boolean isSelected) {

            }

            @Override
            public void onHover() {

            }

            @Override
            public void onChanged() {

            }
        };

        Action actionTextA = menu.addAction("Text A");

        actionTextA.setShortcut("Ctrl+D");
        actionTextA.setActionListener(listener);
        Action actionTextB = menu.addAction("Text B");
        actionTextB.setCheckable(true);

        Size size = new Size();
        size.allocate();
        size.setWidth(32);
        size.setHeight(32);

        toolButton.setDefaultAction(actionTextA);
        toolButton.setIcon(icon);
        toolButton.setIconSize(size);

        widget.setWindowListener(new WindowListener() {

            @Override
            public void onWindowTitleChanged(String title) {
                System.err.println("title changed to :" + title);
            }
            @Override
            public void onContextMenuRequest(int x, int y) {
                try {
                    menu.popup(widget,x,y);
                } catch (Exception e) {
                    e.printStackTrace();
                }
                System.err.println("Request Menu On [ x: " + x + ", y: " + y + "]");

            }

        });

        SRgb rgb = new SRgb(255,255,255,0.5);
        System.err.println("RGBA : " + rgb.getVal());
        System.err.println("RGBA : " + rgb.toHexString(rgb.getVal()) );



        widget.setWindowIcon(icon);

        icon.dispose();

        widget.setContextMenuPolicy(ContextMenuPolicy.CustomContextMenu);
        widget.setWindowTitle("Demo");
        widget.setLayout(vbox);
        System.err.println(vbox.getContentsMargins());
        widget.show();

        application.exec();
    }

}
