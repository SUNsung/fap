
        
              alias_method :_view, :view
    
      def redirect_with_protocol
    redirect_to action: 'hello_world', protocol: 'https'
  end
    
          class_attribute :delivery_methods, default: {}.freeze
      class_attribute :delivery_method, default: :smtp
    
      test 'allow to add custom delivery method' do
    ActionMailer::Base.delivery_method = :custom
    assert_equal :custom, ActionMailer::Base.delivery_method
  end