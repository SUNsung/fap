
        
              def make_test_case_available_to_view!
        test_case_instance = self
        _helpers.module_eval do
          unless private_method_defined?(:_test_case)
            define_method(:_test_case) { test_case_instance }
            private :_test_case
          end
        end
      end
    
            def method_missing(name, *args, &block)
          # Caches the method definition as a singleton method of the receiver.
          #
          # By letting #delegate handle it, we avoid an enclosure that'll capture args.
          singleton_class.delegate name, to: :instance
    
      def test_default_helpers_only
    assert_equal [JustMeHelper], JustMeController._helpers.ancestors.reject(&:anonymous?)
    assert_equal [MeTooHelper, JustMeHelper], MeTooController._helpers.ancestors.reject(&:anonymous?)
  end
    
        # Access the message attachments list.
    def attachments
      mailer.attachments
    end
    
        class MessageDelivery < ActionMailer::MessageDelivery # :nodoc:
      def initialize(mailer_class, action, params, *args)
        super(mailer_class, action, *args)
        @params = params
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
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
          def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
      it 'decodes two doubles for two format characters' do
    '@\x07333333?\xf6ffffff'.unpack(unpack_format(nil, 2)).should == [2.9, 1.4]
  end
    
      it 'ignores spaces between directives' do
    'dcbahgfe'.unpack(unpack_format(' ', 2)).should == [1684234849, 1751606885]
  end
end
    
      Ruby = Struct.new(:version, :platform)