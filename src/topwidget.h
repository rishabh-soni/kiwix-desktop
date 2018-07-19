#ifndef TOPWIDGET_H
#define TOPWIDGET_H

#include <QToolBar>
#include <QLineEdit>
#include <QWebEnginePage>

class TopWidget : public QToolBar
{
    Q_OBJECT
public:
    explicit TopWidget(QWidget *parent = nullptr);
    virtual ~TopWidget();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    QLineEdit m_searchEntry;
    QAction* mp_historyBackAction;
    QAction* mp_historyForwardAction;
    QAction* mp_fullScreenAction;
    QAction* mp_normalScreenAction;
    bool m_fullScreen;
    QPoint m_cursorPos;
    ulong m_timestamp;

protected slots:
    void toggleFullScreen();

private slots:
    void handleWebActionEnabledChanged(QWebEnginePage::WebAction action, bool enabled);
};

#endif // TOPWIDGET_H
