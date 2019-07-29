// This file declares the IPropertyChange Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIPropertyChange : public PyIObjectWithPropertyKey {
   public:
    MAKE_PYCOM_CTOR(PyIPropertyChange);
    static IPropertyChange *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *ApplyToPropVariant(PyObject *self, PyObject *args);

   protected:
    PyIPropertyChange(IUnknown *pdisp);
    ~PyIPropertyChange();
};
