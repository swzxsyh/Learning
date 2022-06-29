package com.test.infra.utils;

import lombok.extern.slf4j.Slf4j;
import org.springframework.beans.factory.support.BeanDefinitionBuilder;
import org.springframework.beans.factory.support.BeanDefinitionRegistry;
import org.springframework.context.annotation.AnnotationConfigApplicationContext;

/**
 * 非Spring管理Bean获取
 * TODO 未知使用场景
 *
 * @author swzxsyh
 */
@Slf4j
public class RegisterBeanUtils {

    @SuppressWarnings("unchecked")
    public static <T> T getBean(String beanName, Class<T> clz) {
        AnnotationConfigApplicationContext applicationContext = new AnnotationConfigApplicationContext();
        try {
            registerBean(applicationContext, beanName, clz);
            applicationContext.refresh();
            return (T)applicationContext.getBean(beanName);
        } catch (Exception e) {
            log.error("getBean error:", e);
        } finally {
            applicationContext.close();
        }
        return null;
    }


    private static <T> void registerBean(BeanDefinitionRegistry registry, String beanName, Class<T> clz) {
        BeanDefinitionBuilder beanDefinitionBuilder = BeanDefinitionBuilder.genericBeanDefinition(clz);
        registry.registerBeanDefinition(beanName, beanDefinitionBuilder.getBeanDefinition());
    }
}
