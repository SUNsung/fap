
        
          test 'helpers' do
    assert_response_code_range 200..299, :successful?
    assert_response_code_range [404],    :not_found?
    assert_response_code_range 300..399, :redirection?
    assert_response_code_range 500..599, :server_error?
    assert_response_code_range 400..499, :client_error?
  end
    
      def test_helper_in_c
    assert_equal 'C', call_controller(C, 'index').last.body
  end
end

    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
      def test_send_mail
    stub_any_instance(Mail::SMTP, instance: Mail::SMTP.new({})) do |instance|
      assert_called(instance, :deliver!) do
        with_translation 'de', email_subject: '[Anmeldung] Willkommen' do
          get '/test/send_mail'
          assert_equal 'Mail sent - Subject: [Anmeldung] Willkommen', @response.body
        end
      end
    end
  end
    
        def root?
      path == 'index'
    end
    
              if %w(Events Sync).include?(type)
            name.prepend 'Backbone.'
          elsif type == 'History'
            name.prepend 'Backbone.history.'
          elsif name == 'extend'
            name.prepend '#{type}.'
          elsif name.start_with? 'constructor'
            name = type
          elsif type != 'Utility'
            name.prepend '#{type.downcase}.'
          end
    
          class << self
        # Mark a given block of code as a 'busy' block of code, which will
        # register a SIGINT handler for the duration of the block. When a
        # SIGINT occurs, the `sig_callback` proc will be called. It is up
        # to the callback to behave properly and exit the application.
        def busy(sig_callback)
          register(sig_callback)
          return yield
        ensure
          unregister(sig_callback)
        end
    
          def convert_key(key)
        key.is_a?(Symbol) ? key.to_s : key
      end
    end
  end
end

    
          # This returns the keys (or ids) that are in the string.
      #
      # @return [<Array<String>]
      def keys
        regexp = /^#\s*VAGRANT-BEGIN:\s*(.+?)$\r?\n?(.*)$\r?\n?^#\s*VAGRANT-END:\s(\1)$/m
        @value.scan(regexp).map do |match|
          match[0]
        end
      end
    
            extend Executable
        executable :git