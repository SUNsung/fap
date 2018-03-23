
        
                # Require the adapter itself and give useful feedback about
        #   1. Missing adapter gems and
        #   2. Adapter gems' missing dependencies.
        path_to_adapter = 'action_cable/subscription_adapter/#{adapter}'
        begin
          require path_to_adapter
        rescue LoadError => e
          # We couldn't require the adapter itself. Raise an exception that
          # points out config typos and missing gems.
          if e.path == path_to_adapter
            # We can assume that a non-builtin adapter was specified, so it's
            # either misspelled or missing from Gemfile.
            raise e.class, 'Could not load the '#{adapter}' Action Cable pubsub adapter. Ensure that the adapter is spelled correctly in config/cable.yml and that you've added the necessary adapter gem to your Gemfile.', e.backtrace
    
        def initialize
      @attributes = {}
    end
    
          test 'after_action works' do
        @controller.process(:index)
        assert_equal 'Goodbye', @controller.instance_variable_get('@second')
      end
    
        actual = ActionController::HttpAuthentication::Token.token_and_options(
      sample_request_without_token_key(token)
    ).first
    
        # Access the message instance.
    def message
      @_message
    end
    
          def create_mailer_file
        template 'mailer.rb', File.join('app/mailers', class_path, '#{file_name}_mailer.rb')
    
    class AssertSelectEmailTest < ActionMailer::TestCase
  class AssertSelectMailer < ActionMailer::Base
    def test(html)
      mail body: html, content_type: 'text/html',
        subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>'
    end
  end
    
      test 'delivery method can be customized per instance' do
    stub_any_instance(Mail::SMTP, instance: Mail::SMTP.new({})) do |instance|
      assert_called(instance, :deliver!) do
        email = DeliveryMailer.welcome.deliver_now
        assert_instance_of Mail::SMTP, email.delivery_method
        email = DeliveryMailer.welcome(delivery_method: :test).deliver_now
        assert_instance_of Mail::TestMailer, email.delivery_method
      end
    end
  end
    
      test 'should regenerate confirmation token after changing email' do
    admin = create_admin
    assert admin.confirm
    assert admin.update_attributes(email: 'old_test@example.com')
    token = admin.confirmation_token
    assert admin.update_attributes(email: 'new_test@example.com')
    assert_not_equal token, admin.confirmation_token
  end
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
        if resource.errors.empty?
      resource.unlock_access! if unlockable?(resource)
      if Devise.sign_in_after_reset_password
        flash_message = resource.active_for_authentication? ? :updated : :updated_not_active
        set_flash_message!(:notice, flash_message)
        sign_in(resource_name, resource)
      else
        set_flash_message!(:notice, :updated_not_active)
      end
      respond_with resource, location: after_resetting_password_path_for(resource)
    else
      set_minimum_password_length
      respond_with resource
    end
  end
    
        get '/'
    assert last_response.ok?
  end
    
        def length
      @entries.length
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
    ###
### methods
###
    
          subdir
    end
    
          def to_yaml
        @pairs.to_yaml
      end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
          super
    end
    
      # Checks for excerpts (helpful for template conditionals)
  def has_excerpt(input)
    input =~ /<!--\s*more\s*-->/i ? true : false
  end