// This file declares the IInitializeWithStream Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration
#include "PythonCOM.h"
#include "PythonCOMServer.h"
#include "propsys.h"

class PyIInitializeWithStream : public PyIUnknown {
   public:
    MAKE_PYCOM_CTOR(PyIInitializeWithStream);
    static IInitializeWithStream *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *Initialize(PyObject *self, PyObject *args);

   protected:
    PyIInitializeWithStream(IUnknown *pdisp);
    ~PyIInitializeWithStream();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGInitializeWithStream : public PyGatewayBase, public IInitializeWithStream {
   protected:
    PyGInitializeWithStream(PyObject *instance) : PyGatewayBase(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT2(PyGInitializeWithStream, IInitializeWithStream, IID_IInitializeWithStream, PyGatewayBase)

    // IInitializeWithStream
    STDMETHOD(Initialize)(IStream *pstream, DWORD grfMode);
};
