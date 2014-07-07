#include <QtWebKitWidgets>
#include <QtGui>

class MyWebView:public QWebView
{
  Q_OBJECT
  public:
    MyWebView():QWebView()
    {
      m_pClipboard = QApplication::clipboard();
    }    
    ~MyWebView(){}
  
    void contextMenuEvent(QContextMenuEvent* event)
    {      
      QMenu menu;      
      QAction* pActionCopyText = menu.addAction("Copy Text");
      QAction* pActionCopyHTML = menu.addAction("Copy HTML");  
      
      connect(pActionCopyText,SIGNAL(triggered()),this,SLOT(slotCopyText()));
      connect(pActionCopyHTML,SIGNAL(triggered()),this,SLOT(slotCopyHTML()));
      
      menu.exec(mapToGlobal(QPoint(event->x(),event->y())));     
    }    
    
private slots:
   void slotCopyHTML()
   {
       m_pClipboard->setText(selectedHtml());
       QMessageBox::information(this,"Copied Html!"
				    ,"Copied HTML to clipboard! Copied string is:\n"+selectedHtml());
   }
   
   void slotCopyText()
   {
       m_pClipboard->setText(selectedText());
      QMessageBox::information(this,"Copied Text!"
				    ,"Copied text to clipboard! Copied string is: \n"+selectedText());
   }
private:
  QClipboard* m_pClipboard;
};
