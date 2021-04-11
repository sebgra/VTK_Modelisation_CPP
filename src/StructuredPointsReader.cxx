#include <QApplication>
#include <QSlider>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLCDNumber>
#include <QLabel>
#include <QFrame>
#include <QString>
#include <QLCDNumber>

#include <vtkSmartPointer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>
#include <vtkContourFilter.h>
#include <vtkLookupTable.h>
#include <vtkStructuredPointsReader.h>



#include <QVTKWidget.h>


void modif_1(QSlider *m_Slider, vtkSmartPointer<vtkContourFilter> m_ContourFilter, vtkRenderWindowInteractor* m_iren  ){

  // m_ContourFilter -> setValue(0,m_Slider -> value());
  // m_iren -> ReInitialize();
  std::cout << "done" << endl;
}

int main(int argc, char **argv)
{
  QApplication app(argc, argv);

    std::string inputFilename = "/home/sebastien/Bureau/VTK_test/src/foot.vtk";// argv[1];


  QWidget fenetre;

  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  //////////////////////////////////// Functions //////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////



  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// Layouts //////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////

  QHBoxLayout *main_layout = new QHBoxLayout();
  QVBoxLayout *vertical_bone = new QVBoxLayout();
  QVBoxLayout *vertical_skin = new QVBoxLayout();
  QHBoxLayout *horizontal_grid_bone = new QHBoxLayout();
  QHBoxLayout *horizontal_grid_skin = new QHBoxLayout();

  //QVBoxLayout *v1 = new QVBoxLayout();


  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// Widgets //////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////

  QLCDNumber *Display_1 = new QLCDNumber(3);
  QLCDNumber *Display_2 = new QLCDNumber(3);
  QLCDNumber *Display_3 = new QLCDNumber(3);
  QLCDNumber *Display_4 = new QLCDNumber(3);
  QLCDNumber *Display_5 = new QLCDNumber(3);
  QLCDNumber *Display_6 = new QLCDNumber(3);
  QLCDNumber *Display_7 = new QLCDNumber(3);
  QLCDNumber *Display_8 = new QLCDNumber(3);
  QLCDNumber *Display_9 = new QLCDNumber(3);
  QLCDNumber *Display_10 = new QLCDNumber(3);

  Display_1->setSegmentStyle(QLCDNumber::Flat);
  Display_1->display(90);

  Display_2->setSegmentStyle(QLCDNumber::Flat);

  Display_2->display(50);

  Display_3->setSegmentStyle(QLCDNumber::Flat);
  Display_3->display(100);

  Display_4->setSegmentStyle(QLCDNumber::Flat);
  Display_4->display(100);

  Display_5->setSegmentStyle(QLCDNumber::Flat);
  Display_5->display(100);

  Display_6->setSegmentStyle(QLCDNumber::Flat);
  Display_6->display(50);

  Display_7->setSegmentStyle(QLCDNumber::Flat);
  Display_7->display(100);

  Display_8->setSegmentStyle(QLCDNumber::Flat);
  Display_8->display(100);

  Display_9->setSegmentStyle(QLCDNumber::Flat);
  Display_9->display(100);

  Display_10->setSegmentStyle(QLCDNumber::Flat);
  Display_10->display(100);

  QSlider *Slider_1 = new QSlider(Qt::Horizontal, 0);

  Slider_1->setMinimum(0);
  Slider_1->setMaximum(200);
  Slider_1->setValue(90);


  
  
  // void modif_1(QSlider *m_Slider, vtkSmartPointer<vtkContourFilter> m_ContourFilter, vtkRenderWindowInteractor* m_iren  ){

  //Slider_1 -> valueChanged() -> connect(Display_1);

  QSlider *Slider_2 = new QSlider(Qt::Horizontal, 0);

  Slider_2->setMinimum(0);
  Slider_2->setMaximum(100);
  Slider_2->setValue(50);

  QSlider *Slider_3 = new QSlider(Qt::Horizontal, 0);
  Slider_3->setMinimum(0);
  Slider_3->setMaximum(200);
  Slider_3->setValue(90);

  QSlider *Slider_4 = new QSlider(Qt::Horizontal, 0);

  Slider_4->setMinimum(0);
  Slider_4->setMaximum(200);
  Slider_4->setValue(90);

  QSlider *Slider_5 = new QSlider(Qt::Horizontal, 0);

  Slider_5->setMinimum(0);
  Slider_5->setMaximum(200);
  Slider_5->setValue(90);

  QSlider *Slider_6 = new QSlider(Qt::Horizontal, 0);

  Slider_6->setMinimum(0);
  Slider_6->setMaximum(200);
  Slider_6->setValue(90);

  QSlider *Slider_7 = new QSlider(Qt::Horizontal, 0);

  Slider_7->setMinimum(0);
  Slider_7->setMaximum(200);
  Slider_7->setValue(90);

  QSlider *Slider_8 = new QSlider(Qt::Horizontal, 0);

  Slider_8->setMinimum(0);
  Slider_8->setMaximum(200);
  Slider_8->setValue(90);

  QSlider *Slider_9 = new QSlider(Qt::Horizontal, 0);

  Slider_9->setMinimum(0);
  Slider_9->setMaximum(200);
  Slider_9->setValue(90);

  QSlider *Slider_10 = new QSlider(Qt::Horizontal, 0);

  Slider_10->setMinimum(0);
  Slider_10->setMaximum(200);
  Slider_10->setValue(90);

  QLabel *Bone_Label = new QLabel(); // SetText 'Bone'
  Bone_Label->setText("Bone");
  Bone_Label->setAlignment(Qt::AlignCenter);

  QLabel *Skin_Label = new QLabel(); // 'Skin'
  Skin_Label->setText("Skin");
  Skin_Label->setAlignment(Qt::AlignCenter);

  QLabel *Label_1 = new QLabel(); // 'Slices'
  Label_1->setText("Slices");
  Label_1->setAlignment(Qt::AlignCenter);

  QLabel *Label_2 = new QLabel(); // 'Shade %'
  Label_2->setText("Shade %");
  Label_2->setAlignment(Qt::AlignCenter);

  QLabel *Label_3 = new QLabel(); // 'Saturation %'

  Label_3->setText("Saturation %");
  Label_3->setAlignment(Qt::AlignCenter);

  QLabel *Label_4 = new QLabel(); // 'Contrast %'

  Label_4->setText("Contrast %");
  Label_4->setAlignment(Qt::AlignCenter);

  QLabel *Label_5 = new QLabel(); // 'Brightness % '

  Label_5->setText("Bightness %");
  Label_5->setAlignment(Qt::AlignCenter);

  QLabel *Label_6 = new QLabel(); // 'Slices'

  Label_6->setText("Slices");
  Label_6->setAlignment(Qt::AlignCenter);

  QLabel *Label_7 = new QLabel(); // 'Shade %'

  Label_7->setText("Shade %");
  Label_7->setAlignment(Qt::AlignCenter);

  QLabel *Label_8 = new QLabel(); // 'Saturation %'

  Label_8->setText("Skin");
  Label_8->setAlignment(Qt::AlignCenter);

  QLabel *Label_9 = new QLabel(); // 'Contrast %'

  Label_9->setText("Saturation %");
  Label_9->setAlignment(Qt::AlignCenter);

  QLabel *Label_10 = new QLabel(); // 'Brightness %'

  Label_10->setText("Bightness %");
  Label_10->setAlignment(Qt::AlignCenter);

  QFrame *Frame = new QFrame();
  Frame->setFrameShape(QFrame::StyledPanel);
  Frame->setFrameShadow(QFrame::Raised);

  QVTKWidget *widget = new QVTKWidget(Frame); // Parent == Frame

  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// Organisation /////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////

  main_layout->addWidget(Frame);
  main_layout->addLayout(vertical_bone);
  main_layout->addLayout(vertical_skin);

  vertical_bone->addWidget(Bone_Label);
  vertical_bone->addLayout(horizontal_grid_bone);

  vertical_skin->addWidget(Skin_Label);
  vertical_skin->addLayout(horizontal_grid_skin);

  vertical_skin->addWidget(Label_1);
  vertical_skin->addWidget(Display_1);
  vertical_skin->addWidget(Slider_1);

  vertical_skin->addWidget(Label_2);
  vertical_skin->addWidget(Display_2);
  vertical_skin->addWidget(Slider_2);

  vertical_skin->addWidget(Label_3);
  vertical_skin->addWidget(Display_3);
  vertical_skin->addWidget(Slider_3);

  vertical_skin->addWidget(Label_4);
  vertical_skin->addWidget(Display_4);
  vertical_skin->addWidget(Slider_4);

  vertical_skin->addWidget(Label_5);
  vertical_skin->addWidget(Display_5);
  vertical_skin->addWidget(Slider_5);

  vertical_bone->addWidget(Label_6);
  vertical_bone->addWidget(Display_6);
  vertical_bone->addWidget(Slider_6);

  vertical_bone->addWidget(Label_7);
  vertical_bone->addWidget(Display_7);
  vertical_bone->addWidget(Slider_7);

  vertical_bone->addWidget(Label_8);
  vertical_bone->addWidget(Display_8);
  vertical_bone->addWidget(Slider_8);

  vertical_bone->addWidget(Label_9);
  vertical_bone->addWidget(Display_9);
  vertical_bone->addWidget(Slider_9);

  vertical_bone->addWidget(Label_10);
  vertical_bone->addWidget(Display_10);
  vertical_bone->addWidget(Slider_10);

  main_layout -> addWidget(widget);

  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  ////////////////////////////////////// VTK Part /////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////////////////////////////////////


vtkSmartPointer<vtkStructuredPointsReader> reader =
    vtkSmartPointer<vtkStructuredPointsReader>::New();
  reader->SetFileName(inputFilename.c_str());
  reader->Update();

vtkSmartPointer<vtkContourFilter> contour_skin =
    vtkSmartPointer<vtkContourFilter>::New();

  contour_skin -> SetInputConnection(reader -> GetOutputPort());
  contour_skin -> SetNumberOfContours(1);
  contour_skin -> SetValue(0,50.0);
    
vtkSmartPointer<vtkContourFilter> contour_bone =
    vtkSmartPointer<vtkContourFilter>::New();

  contour_bone -> SetInputConnection(reader -> GetOutputPort());
  contour_bone -> SetNumberOfContours(1);
  contour_bone -> SetValue(0,50.0);    




  vtkSmartPointer<vtkLookupTable> lut_skin =
    vtkSmartPointer<vtkLookupTable>::New();

  lut_skin -> SetNumberOfColors(256);
  lut_skin -> SetTableRange(0,255);
  lut_skin -> SetHueRange(0,0.5);
  lut_skin -> SetSaturationRange(0.0,0.1);
  lut_skin -> SetValueRange(0.0,0.1);
  lut_skin -> SetAlphaRange(0.0,0.1);
  lut_skin -> Build();

  vtkSmartPointer<vtkLookupTable> lut_bone =
    vtkSmartPointer<vtkLookupTable>::New();
  
  lut_bone -> SetNumberOfColors(256);
  lut_bone -> SetTableRange(0,255);
  lut_bone -> SetHueRange(0,0.5);
  lut_bone -> SetSaturationRange(0.0,0.1);
  lut_bone -> SetValueRange(0.0,0.1);
  lut_bone -> SetAlphaRange(0.0,0.1);
  lut_bone -> Build();


  vtkSmartPointer<vtkPolyDataMapper> mapper_skin =
  vtkSmartPointer<vtkPolyDataMapper>::New();

  mapper_skin -> SetInputConnection(contour_skin -> GetOutputPort());
  mapper_skin -> SetLookupTable(lut_skin);


  vtkSmartPointer<vtkPolyDataMapper> mapper_bone =
  vtkSmartPointer<vtkPolyDataMapper>::New();

  mapper_skin -> SetInputConnection(contour_bone -> GetOutputPort());
  mapper_skin -> SetLookupTable(lut_bone);

  vtkSmartPointer<vtkActor> actor_skin =
  vtkSmartPointer<vtkActor>::New();

  actor_skin -> SetMapper(mapper_skin);



  vtkSmartPointer<vtkActor> actor_bone =
  vtkSmartPointer<vtkActor>::New();

  actor_bone -> SetMapper(mapper_bone);

  vtkSmartPointer<vtkRenderer> renderer =
  vtkSmartPointer<vtkRenderer>::New();

  widget -> GetRenderWindow() -> AddRenderer(renderer);

  renderer->AddActor( actor_bone );
  renderer->AddActor( actor_skin );
  renderer -> ResetCamera();
  renderer->SetBackground(.3, .6, .3);



  vtkRenderWindowInteractor* iren = widget->GetRenderWindow()->GetInteractor();// Get interactor

  iren -> Initialize();
  iren -> Start();


  QObject::connect(Slider_1, SIGNAL(valueChanged(int)), Display_1,SLOT(display(int)));
  QObject::connect(Slider_1, SIGNAL(valueChanged(int)), iren, SLOT(modif_1(&Slider_1, &contour_bone, &iren))); 
  // QObject::connect(Slider_1, SIGNAL(valueChanged(int)), [this](){
  //   *contour_bone ->setValue(0,m_Slider -> value());
  //   *iren ->ReInitialize();
  // } );
  iren -> ReInitialize();
  fenetre.setLayout(main_layout);
  fenetre.setWindowTitle("VTK Viewer");
  fenetre.resize(1920,1080);

  fenetre.show();

  std::cout << Slider_1 ->value() << endl;



  app.exec();

  return EXIT_SUCCESS;
}
