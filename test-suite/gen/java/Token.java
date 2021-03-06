// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from token.djinni

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Token {
    public abstract String whoami();

    private static final class CppProxy extends Token
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public String whoami()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_whoami(this.nativeRef);
        }
        private native String native_whoami(long _nativeRef);
    }
}
