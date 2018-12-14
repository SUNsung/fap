
        
        module Sidekiq
  module Extensions
    ##
    # Adds 'delay', 'delay_for' and `delay_until` methods to ActionMailer to offload arbitrary email
    # delivery to Sidekiq.  Example:
    #
    #    UserMailer.delay.send_welcome_email(new_user)
    #    UserMailer.delay_for(5.days).send_welcome_email(new_user)
    #    UserMailer.delay_until(5.days.from_now).send_welcome_email(new_user)
    class DelayedMailer
      include Sidekiq::Worker
    
          def context
        c = Thread.current[:sidekiq_context]
        ' #{c.join(SPACE)}' if c && c.any?
      end
    end
    
        def identity
      @@identity ||= '#{hostname}:#{$$}:#{process_nonce}'
    end