// #include <QApplication>


// #include <vtkSmartPointer.h>
// #include <vtkPolyDataMapper.h>
// #include <vtkStructuredPointsReader.h>
// #include <vtkImageDataGeometryFilter.h>
// #include <vtkRenderWindow.h>
// #include <vtkRenderWindowInteractor.h>
// #include <vtkRenderer.h>
// #include <vtkActor.h>
// #include <vtkSmartPointer.h>
// #include <vtkSphereSource.h>


// #include <QVTKWidget.h>
// //#include <QVTKOpenGLNativeWidget.h>

// int main(int argc, char* argv[])
// {
//   // Verify input arguments
//   if ( argc != 2 )
//     {
//     std::cout << "Usage: " << argv[0]
//               << " Filename(.jpeg)" << std::endl;
//     return EXIT_FAILURE;
//     }

//   std::string inputFilename = argv[1];

//   // Read the file
//   vtkSmartPointer<vtkStructuredPointsReader> reader =
//     vtkSmartPointer<vtkStructuredPointsReader>::New();
//   reader->SetFileName(inputFilename.c_str());
//   reader->Update();

//   vtkSmartPointer<vtkImageDataGeometryFilter> geometryFilter =
//     vtkSmartPointer<vtkImageDataGeometryFilter>::New();
//   geometryFilter->SetInputConnection(reader->GetOutputPort());
//   geometryFilter->Update();

//   // Visualize
//   vtkSmartPointer<vtkPolyDataMapper> mapper =
//     vtkSmartPointer<vtkPolyDataMapper>::New();
//   mapper->SetInputConnection(geometryFilter->GetOutputPort());

//   vtkSmartPointer<vtkActor> actor =
//     vtkSmartPointer<vtkActor>::New();
//   actor->SetMapper(mapper);

//   vtkSmartPointer<vtkRenderer> renderer =
//     vtkSmartPointer<vtkRenderer>::New();
//   vtkSmartPointer<vtkRenderWindow> renderWindow =
//     vtkSmartPointer<vtkRenderWindow>::New();
//   renderWindow->AddRenderer(renderer);
//   vtkSmartPointer<vtkRenderWindowInteractor> renderWindowInteractor =
//     vtkSmartPointer<vtkRenderWindowInteractor>::New();
//   renderWindowInteractor->SetRenderWindow(renderWindow);

//   renderer->AddActor(actor);
//   renderer->SetBackground(.3, .6, .3); // Background color green

//   renderWindow->Render();
//   renderWindowInteractor->Start();

//   return EXIT_SUCCESS;
// }


#include <QApplication>
#include <QSlider>
#include <QVBoxLayout>


#include <vtkSmartPointer.h>
#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkActor.h>
#include <vtkRenderWindow.h>
#include <vtkRenderer.h>

#include <QVTKWidget.h>

int main(int argc, char** argv)
{
  QApplication app(argc, argv);

  QVTKWidget *widget = new QVTKWidget;
  widget->resize( 500, 500 );

  QVBoxLayout *layout = new QVBoxLayout(); //

  layout -> addWidget(widget);


  QSlider slider(Qt::Horizontal,0); //

  layout -> addWidget(&slider);

  vtkSmartPointer<vtkSphereSource> sphereSource =
  vtkSmartPointer<vtkSphereSource>::New();

  vtkSmartPointer<vtkPolyDataMapper> sphereMapper =
  vtkSmartPointer<vtkPolyDataMapper>::New();
  sphereMapper->SetInputConnection( sphereSource->GetOutputPort() );

  vtkSmartPointer<vtkActor> sphereActor =
  vtkSmartPointer<vtkActor>::New();
  sphereActor->SetMapper( sphereMapper );

  vtkSmartPointer<vtkRenderer> renderer =
  vtkSmartPointer<vtkRenderer>::New();
  renderer->AddActor( sphereActor );



  widget->GetRenderWindow()->AddRenderer( renderer );
  widget->show();


  app.exec();

  return EXIT_SUCCESS;
}


