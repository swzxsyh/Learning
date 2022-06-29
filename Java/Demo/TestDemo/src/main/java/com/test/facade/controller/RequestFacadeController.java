package com.test.facade.controller;


import com.test.domain.OtherService;
import com.test.domain.impl.OtherServiceImpl;
import com.test.infra.model.Result;
import com.test.infra.utils.RegisterBeanUtils;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.Objects;

@RestController
public class RequestFacadeController {

    @GetMapping("/test")
    public Result<?> test() {
        OtherServiceImpl otherService = RegisterBeanUtils.getBean("OtherServiceImpl", OtherServiceImpl.class);
        if (Objects.isNull(otherService)) {
            return Result.error("BEAN UNDEFINED");
        }
//        OtherServiceImpl otherService = new OtherServiceImpl();
        String name = otherService.getName();
        return Result.success(name);
    }
}
