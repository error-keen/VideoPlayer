#ifndef VIDEOPLAYER_H
#define VIDEOPLAYER_H

#include <QWidget>
#include <QtMultimedia>
#include <QVideoWidget>
#include <QLabel>
#include"playerslider.h"

QT_BEGIN_NAMESPACE
namespace Ui { class videoplayer; }
QT_END_NAMESPACE
class PlayerSlider;
class videoplayer : public QWidget
{
    Q_OBJECT

public:
    videoplayer(QWidget *parent = nullptr);
    ~videoplayer();

    bool m_bReLoad;// 已经载入还没设置进度条最大值

private:
    Ui::videoplayer *ui;
    QVideoWidget *m_pPlayerWidget;// 视频显示组件
    QMediaPlayer * m_pPlayer;//媒体播放器类
    QLabel *m_lblRemainingTime;

public slots:
    void    OnSetMediaFile(void);//载入
    void    OnSlider(qint64); // 信号内容的位置已更改为位置，以毫秒表示，进度条也要变
    void    OnDurationChanged(qint64);// 信号表示内容的持续时间已更改为时长，以毫秒表示，进度条 的最大值和最小值
    void    OnStateChanged(QMediaPlayer::State);// Player对象的状态已经改变
    void    OnPause(); // 暂停

};
#endif // VIDEOPLAYER_H
