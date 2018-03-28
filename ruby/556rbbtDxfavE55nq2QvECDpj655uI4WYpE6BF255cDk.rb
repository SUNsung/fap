
        
            include Behavior
  end
end

    
      test 'response status aliases deprecated' do
    response = ActionDispatch::TestResponse.create
    assert_deprecated { response.success? }
    assert_deprecated { response.missing? }
    assert_deprecated { response.error? }
  end
end

    
      def test_helper_attr
    assert_nothing_raised { @controller_class.helper_attr :delegate_attr }
    assert_includes master_helper_methods, :delegate_attr
    assert_includes master_helper_methods, :delegate_attr=
  end
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
          add_delivery_method :smtp, Mail::SMTP,
        address:              'localhost',
        port:                 25,
        domain:               'localhost.localdomain',
        user_name:            nil,
        password:             nil,
        authentication:       nil,
        enable_starttls_auto: true
    
        # Use the logger configured for ActionMailer::Base.
    def logger
      ActionMailer::Base.logger
    end
  end
end
    
        # Access the mailer instance.
    def mailer
      @_controller
    end
    
          included do
        class_attribute :_mailer_class
        setup :initialize_test_deliveries
        setup :set_expected_mail
        teardown :restore_test_deliveries
        ActiveSupport.run_load_hooks(:action_mailer_test_case, self)
      end
    
      # Skips the current run on Rubinius using Minitest::Assertions#skip
  private def rubinius_skip(message = '')
    skip message if RUBY_ENGINE == 'rbx'
  end
  # Skips the current run on JRuby using Minitest::Assertions#skip
  private def jruby_skip(message = '')
    skip message if defined?(JRUBY_VERSION)
  end
end

    
        AssertSelectMailer.test('<div><p>foo</p><p>bar</p></div>').deliver_now
    assert_select_email do
      assert_select 'div:root' do
        assert_select 'p:first-child', 'foo'
        assert_select 'p:last-child', 'bar'
      end
    end
  end
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
      def execute
    Gitlab::Metrics.measure(:import_export_clean_up) do
      return unless File.directory?(path)
    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first if xml
  if existing_blog
    rss_url = existing_blog.attr('xmlUrl')
    puts '#{name}: ALREADY HAVE'
  end
    
          opts.on('--trace', :NONE, 'Show a full Ruby stack trace on error') do
        @options[:trace] = true
      end
    end
    
      if defined? config.symbolize_keys!
    config.symbolize_keys!
  end