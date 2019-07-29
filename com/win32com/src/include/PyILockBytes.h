// This file declares the ILockBytes Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyILockBytes : public PyIUnknown {
   public:
    MAKE_PYCOM_CTOR(PyILockBytes);
    static ILockBytes *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *ReadAt(PyObject *self, PyObject *args);
    static PyObject *WriteAt(PyObject *self, PyObject *args);
    static PyObject *Flush(PyObject *self, PyObject *args);
    static PyObject *SetSize(PyObject *self, PyObject *args);
    static PyObject *LockRegion(PyObject *self, PyObject *args);
    static PyObject *UnlockRegion(PyObject *self, PyObject *args);
    static PyObject *Stat(PyObject *self, PyObject *args);

   protected:
    PyILockBytes(IUnknown *pdisp);
    ~PyILockBytes();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGLockBytes : public PyGatewayBase, public ILockBytes {
   protected:
    PyGLockBytes(PyObject *instance) : PyGatewayBase(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT(PyGLockBytes, ILockBytes, IID_ILockBytes)

    // ILockBytes
    STDMETHOD(ReadAt)(ULARGE_INTEGER ulOffset, void __RPC_FAR *pv, ULONG cb, ULONG __RPC_FAR *pcbRead);

    STDMETHOD(WriteAt)(ULARGE_INTEGER ulOffset, const void __RPC_FAR *pv, ULONG cb, ULONG __RPC_FAR *pcbWritten);

    STDMETHOD(Flush)(void);

    STDMETHOD(SetSize)(ULARGE_INTEGER cb);

    STDMETHOD(LockRegion)(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);

    STDMETHOD(UnlockRegion)(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);

    STDMETHOD(Stat)(STATSTG __RPC_FAR *pstatstg, DWORD grfStatFlag);
};
