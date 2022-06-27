package com.test.infra.advice;


import lombok.extern.slf4j.Slf4j;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.RestControllerAdvice;

/**
 * @author swzxsyh
 */
@Slf4j
@RestControllerAdvice
public class ResultAdvice {

    @ExceptionHandler(NullPointerException.class)
    public void nullPointException(NullPointerException ex) {
        log.error("null Point err:", ex);
    }
}
