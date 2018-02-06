
        
                  adapter_method = '#{spec[:adapter]}_connection'
    
    class TestResponseTest < ActiveSupport::TestCase
  def assert_response_code_range(range, predicate)
    response = ActionDispatch::TestResponse.new
    (0..599).each do |status|
      response.status = status
      assert_equal range.include?(status), response.send(predicate),
                   'ActionDispatch::TestResponse.new(#{status}).#{predicate}'
    end
  end
    
            def current_instances
          Thread.current[:current_attributes_instances] ||= {}
        end
    
    require 'active_job'
    
    module ActionMailer
  # This module handles everything related to mail delivery, from registering
  # new delivery methods to configuring the mail object to be sent.
  module DeliveryMethods
    extend ActiveSupport::Concern
    
      test 'should find a admin by send confirmation instructions with unconfirmed_email' do
    admin = create_admin
    assert admin.confirm
    assert admin.update_attributes(email: 'new_test@example.com')
    confirmation_admin = Admin.send_confirmation_instructions(email: admin.unconfirmed_email)
    assert_equal confirmation_admin, admin
  end
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      # Sets the resource creating an instance variable
  def resource=(new_resource)
    instance_variable_set(:'@#{resource_name}', new_resource)
  end
    
          if context.respond_to?(route)
        context.send(route, opts)
      elsif respond_to?(:root_url)
        root_url(opts)
      else
        '/'
      end
    end