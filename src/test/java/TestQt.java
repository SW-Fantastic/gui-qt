import org.apache.commons.lang3.tuple.MutablePair;
import org.swdc.qt.QtApplication;
import org.swdc.qt.beans.*;
import org.swdc.qt.internal.dialogs.SMessageDialog;
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
import org.swdc.qt.widgets.dialogs.*;
import org.swdc.qt.widgets.graphics.*;
import org.swdc.qt.widgets.pane.*;

import java.io.File;
import java.util.Arrays;

public class TestQt {

    static {
        System.load(new File("libgui.dll").getAbsolutePath());
    }

    public static void main(String[] args) throws Exception {

        QtApplication application = new QtApplication(args.length, args);
        application.language(new File("qt_zh_CN.qm"));
        application.language(new File("qtbase_zh_CN.qm"));

        Variant variant = new Variant();
        variant.allocate();
        variant.setString("test! 测试文本");
        System.err.println(variant.getString());

        Widget widget = new Widget();
        widget.allocate();
        widget.setMinSize(800,600);

        PushButton button = new PushButton();
        button.allocate();
        button.setText("Text");
        button.setMinSize(120,30);
        button.setClickListener(() -> {
            try {

                MessageDialog msg = new MessageDialog();
                msg.allocate(widget);
                msg.setText("here is a text information dialog");
                msg.setIcon(MsgIcon.Information);
                msg.setWindowTitle("hello world");
                msg.addButton("测试按钮",MsgButtonRoles.YesRole);
                msg.setStandardButtons(MsgStandardButton.No,MsgStandardButton.Yes);
                msg.exec();

                InputDialog dlg = new InputDialog();
                dlg.allocate(widget);
                dlg.setOkButtonText("确定");
                dlg.setCancelButtonText("取消");
                dlg.setTextEchoMode(EditEchoMode.Normal);
                dlg.setWindowTitle("输入对话框测试");
                dlg.setLabelText("请随意输入");
                dlg.setComboBoxItems(Arrays.asList("A","B","C","D"));
                dlg.setInputMode(DialogInputMode.TextInput);
                dlg.resize(320,120);

                dlg.exec();

                String text = dlg.getTextValue();
                System.err.println(text);
                dlg.dispose();

            } catch (Exception e) {
                e.printStackTrace();
            }
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

        VBoxLayout tabBLayout = new VBoxLayout();
        tabBLayout.allocate();

        ScrollArea area = new ScrollArea();
        area.allocate();

        Widget scrollView = new Widget();
        scrollView.allocate();

        VBoxLayout areaLayout = new VBoxLayout();
        areaLayout.allocate();
        areaLayout.setSpacing(12);

        for (int i = 0; i < 40; i ++) {
            PushButton itemButton = new PushButton();
            itemButton.allocate();
            itemButton.setText("button_" + i);
            itemButton.setContentMargins(4,2,2,4);
            areaLayout.addWidget(itemButton);
        }

        scrollView.setLayout(areaLayout);

        area.setSizePolicy(SizePolicy.Expanding,SizePolicy.Expanding);
        area.setWidget(scrollView);
        tabBLayout.addWidget(area);
        tabB.setLayout(tabBLayout);

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
        toolButton.setMinSize(40,40);

        ToolBar toolBar = new ToolBar();
        toolBar.allocate();
        toolBar.setOrientation(Orientation.Horizontal);
        toolBar.addWidget(toolButton);

        SpacerItem itemTabA = new SpacerItem();
        itemTabA.allocate(0,1,SizePolicy.Minimum,SizePolicy.Expanding);

        tabALayout.addWidget(toolBar);
        RadioButton radioButton = new RadioButton();
        radioButton.allocate();
        radioButton.setText("test radio A");

        RadioButton radioButtonA = new RadioButton();
        radioButtonA.allocate();
        radioButtonA.setText("test radio B");

        RadioButton radioButtonB = new RadioButton();
        radioButtonB.allocate();
        radioButtonB.setText("radio C");

        RadioButton radioButtonC = new RadioButton();
        radioButtonC.allocate();
        radioButtonC.setText("radio D");

        HBoxLayout hOptionLayout = new HBoxLayout();
        hOptionLayout.allocate();

        hOptionLayout.addWidget(radioButton);
        hOptionLayout.addWidget(radioButtonA);
        hOptionLayout.addWidget(radioButtonB);
        hOptionLayout.addWidget(radioButtonC);

        ButtonGroup group = new ButtonGroup();
        group.allocate();
        group.addButton(radioButton,0);
        group.addButton(radioButtonA,1);

        ButtonGroup groupA = new ButtonGroup();
        groupA.allocate();
        groupA.addButton(radioButtonB,0);
        groupA.addButton(radioButtonC,1);

        tabALayout.addLayout(hOptionLayout);

        CheckBox checkBox = new CheckBox();
        checkBox.allocate();
        checkBox.setText("option A");

        CheckBox checkBoxA = new CheckBox();
        checkBoxA.allocate();
        checkBoxA.setText("option B");

        CheckBox checkBoxB = new CheckBox();
        checkBoxB.allocate();
        checkBoxB.setText("option C");

        HBoxLayout hCheckOptions = new HBoxLayout();
        hCheckOptions.allocate();
        hCheckOptions.addWidget(checkBox);
        hCheckOptions.addWidget(checkBoxA);
        hCheckOptions.addWidget(checkBoxB);

        tabALayout.addLayout(hCheckOptions);

        ComboBox comboBox = new ComboBox();
        comboBox.allocate();
        comboBox.addItems("OptionA","OptionB","OptionC");
        //comboBox.setMinSize(120,120);
        tabALayout.addWidget(comboBox);

        FontCombBox fontCbx = new FontCombBox();
        fontCbx.allocate();
        fontCbx.setSizePolicy(SizePolicy.Expanding,SizePolicy.Preferred);
        tabALayout.addWidget(fontCbx);

        CommandLinkButton linkButton = new CommandLinkButton();
        linkButton.allocate();
        linkButton.setText("Linked button");
        tabALayout.addWidget(linkButton);

        GroupBox gpBox = new GroupBox();
        gpBox.allocate();
        gpBox.setTitle("Group box");
        gpBox.setMinSize(120,120);
        tabALayout.addWidget(gpBox);

        tabALayout.addSpacerItem(itemTabA);

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

            } catch (Exception e) {
                e.printStackTrace();
            }

        });

        Widget tabToolBox = new Widget();
        tabToolBox.allocate();

        VBoxLayout tabBoxLayout = new VBoxLayout();
        tabBoxLayout.allocate();

        ToolBox box = new ToolBox();
        box.allocate();

        Widget toolSecA = new Widget();
        toolSecA.allocate();
        box.addItem(toolSecA,"Tools A");

        Widget toolSecB = new Widget();
        toolSecB.allocate();
        box.addItem(toolSecB,"Tools B");

        tabBoxLayout.addWidget(box);
        tabToolBox.setLayout(tabBoxLayout);

        Widget mdiWidget = new Widget();
        mdiWidget.allocate();
        VBoxLayout mdiLayout = new VBoxLayout();
        mdiLayout.allocate();
        mdiWidget.setLayout(mdiLayout);

        MdiArea mdiArea = new MdiArea();
        mdiArea.allocate();
        //mdiArea.set(false);
        mdiArea.setSizePolicy(SizePolicy.Expanding,SizePolicy.Expanding);
        mdiLayout.addWidget(mdiArea);

        Widget mdiWindowA = new Widget();
        mdiWindowA.allocate();

        Widget mdiWindowB = new Widget();
        mdiWindowB.allocate();

        MdiSubWindow windowA = mdiArea.addSubWindow(mdiWindowA);
        windowA.setMinSize(200,200);

        MdiSubWindow windowB = mdiArea.addSubWindow(mdiWindowB);
        windowB.setMinSize(200,200);

        Widget dockWidget = new Widget();
        dockWidget.allocate();

        VBoxLayout dockLayout = new VBoxLayout();
        dockLayout.allocate();

        DockWidget dockA = new DockWidget();
        dockA.allocate();
        dockA.setWindowTitle("dockA");
        dockLayout.addWidget(dockA);

        dockWidget.setLayout(dockLayout);

        TabWidget tabWidget = new TabWidget();
        tabWidget.allocate();
        tabWidget.addTab(tabA,"ToolBar/Radio/CheckBox");
        tabWidget.addTab(tabB,"ScrollArea");
        tabWidget.addTab(tabToolBox,"ToolBox");
        tabWidget.addTab(mdiWidget,"Mdi area");
        tabWidget.addTab(dockWidget,"dock");

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
                Pixmap pixmap = Pixmap.grabWidget(widget,0,0,widget.getWidth(),widget.getHeight());
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
        widget.setWindowTitle("Demo Qt的测试窗口");
        widget.setLayout(vbox);
        System.err.println(vbox.getContentsMargins());
        widget.show();

        application.exec();
    }

}
