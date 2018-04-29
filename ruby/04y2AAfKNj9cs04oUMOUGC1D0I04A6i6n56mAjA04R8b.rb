
        
          def test_safe_redirect_back_from_other_host
    @request.env['HTTP_REFERER'] = 'http://another.host/coming/from'
    get :safe_redirect_back_with_status
    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
        test 'head :continue (100) does not return any content' do
      content = body(HeadController.action(:continue).call(Rack::MockRequest.env_for('/')))
      assert_empty content
    end
    
        class MessageDelivery < ActionMailer::MessageDelivery # :nodoc:
      def initialize(mailer_class, action, params, *args)
        super(mailer_class, action, *args)
        @params = params
      end
    
            expect(result).to eq('hg parent --template {rev}')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template {rev}')
      end
    end
  end
end

    
      def icon
    object.image
  end
    
    ###
### methods
###
    
          common_options(opts)
      style(opts)
      input_and_output(opts)
      miscellaneous(opts)
    end
    
          module ClassMethods
        def inherited(subclass)
          subclass.log_levels = subclass.superclass.log_levels.dup
        end
    
      Sass::Plugin.options.merge!(config)