
        
                def include_helper_modules!
          helper(helper_class) if helper_class
          include _helpers
        end
      end
    
            class Listener < SubscriberMap
          def initialize(adapter, event_loop)
            super()
    
          def force_equality?(value)
        coder.respond_to?(:object_class) && value.is_a?(coder.object_class)
      end
    
        def ding(data)
      transmit(dong: data['message'])
    end
    
      test 'processing invalid message' do
    run_in_eventmachine do
      open_connection
    
      # Asynchronously send an email
  class TestEmail < Jobs::Base
    
    class ApplicationSerializer < ActiveModel::Serializer
  embed :ids, include: true