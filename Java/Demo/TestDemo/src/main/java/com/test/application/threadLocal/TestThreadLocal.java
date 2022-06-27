package com.test.application.threadLocal;

public class TestThreadLocal {

    ThreadLocal tHreadlocal = new ThreadLocal<>();


    public void test() {
        try {

            this.tHreadlocal.set(null);
        } catch (Exception e) {
            System.out.println(this.tHreadlocal.get());
        } finally {
            this.tHreadlocal.remove();
        }
    }
}
