
        
              alias_method :_view, :view
    
            # The abstract adapter is used simply to bypass the bit of code that
        # checks that the adapter file can be required in.
    
        def with_test_route_set
      with_routing do |set|
        set.draw do
          match '/', to: 'web_service_test/test#assign_parameters', via: :all
        end
        yield
      end
    end
end

    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
    require 'abstract_unit'
require 'mailers/base_mailer'
require 'active_support/log_subscriber/test_helper'
require 'action_mailer/log_subscriber'
    
          html_filters.push 'bootstrap/entries_v3', 'bootstrap/clean_html_v3'
    
        options[:only_patterns] = [
      /\Abook\/first-edition\//,
      /\Areference\//,
      /\Acollections\//,
      /\Astd\// ]
    
          html_filters.push 'webpack/clean_html', 'webpack/entries'
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        delegate :empty?, :blank?, to: :pages
    
                # Register the handler if this is our first callback.
            Signal.trap('INT') { fire_callbacks } if registered.length == 1
          end
        end
    
          def values_at(*indices)
        indices.collect { |key| self[convert_key(key)] }
      end