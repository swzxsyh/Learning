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
        RegisterBeanUtils.getBean("OtherServiceImpl", OtherServiceImpl.class);
//        OtherServiceImpl otherService = new OtherServiceImpl();
        return Result.success(null);
    }
}
