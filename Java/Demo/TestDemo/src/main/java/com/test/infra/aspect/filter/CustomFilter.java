package com.test.infra.aspect.filter;

import org.slf4j.MDC;

import javax.servlet.*;
import java.io.IOException;
import java.util.UUID;

public class CustomFilter implements Filter {

    @Override
    public void doFilter(ServletRequest request, ServletResponse response, FilterChain chain) throws IOException, ServletException {
        put();
        chain.doFilter(request, response);
    }

    private void put() {
        try {
            String traceId = UUID.randomUUID().toString().replaceAll("-", "");
            MDC.put("traceId", traceId);
        } finally {
            MDC.remove("traceId");
        }
    }
}
