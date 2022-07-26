package com.test.facade.controller;


import com.test.infra.model.Result;
import com.test.infra.model.dto.MessageDetail;
import com.test.infra.mq.producer.TestProducer;
import com.test.infra.utils.ThreadMdcUtil;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import java.util.UUID;

@RestController
@RequestMapping(value = "/mq")
public class MQFacadeController {

    @Autowired
    private TestProducer testProducer;

    @GetMapping(value = "/create")
    public Result<?> createMsg(String msg) {
        msg = msg + ThreadMdcUtil.getTraceId();
        MessageDetail messageDetail = new MessageDetail(msg);
        testProducer.send(messageDetail);
        return Result.success();
    }
}
