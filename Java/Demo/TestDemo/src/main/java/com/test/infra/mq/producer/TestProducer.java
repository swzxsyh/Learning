package com.test.infra.mq.producer;

import com.test.infra.model.dto.MessageDetail;

/**
 * @author swzxsyh
 */
public interface TestProducer {

    /**
     * test send
     *
     * @param detail
     */
    void send(MessageDetail detail);
}
