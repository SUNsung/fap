
        
              BOOLEAN_ATTRIBUTES.merge(BOOLEAN_ATTRIBUTES.map(&:to_sym))
    
                @subscribe_callbacks = Hash.new { |h, k| h[k] = [] }
            @subscription_lock = Mutex.new
    
          def set_body
        self.response_body = 'Success'
      end
    end
    
      def test_lib_helper_methods_after_clear_helpers
    assert_nothing_raised do
      call_controller(JustMeController, 'lib')
    end
  end
    
        def wrap_delivery_behavior!(*args) # :nodoc:
      self.class.wrap_delivery_behavior(message, *args)
    end
  end
end

    
          formatted
    end
    
          private
        def processed_mailer
          @processed_mailer ||= @mailer_class.new.tap do |mailer|
            mailer.params = @params
            mailer.process @action, *@args
          end
        end
    
    class AssertSelectEmailTest < ActionMailer::TestCase
  class AssertSelectMailer < ActionMailer::Base
    def test(html)
      mail body: html, content_type: 'text/html',
        subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>'
    end
  end
    
      def grant_admin!
    set_permission('admin', true)
  end
    
          if base == dest
        ''
      elsif dest.start_with? File.join(base, '')
        url.path[(path.length)..-1]
      end
    end
    
          def get_type
        case slug
        when 'api'
          'Reference'
        when 'configuration'
          'Reference: Configuration'
        when 'stpl'
          'Reference: SimpleTemplate'
        when 'plugindev'
          'Reference: Plugin'
        else
          'Manual'
        end
      end
    
            # Returns the internal data associated with this plugin. This
        # should NOT be called by the general public.
        #
        # @return [Hash]
        def self.data
          @data ||= {}
        end
    
    process_args
list_login_items_for_app $app_path

    
    if $opt_test
  exit test_app($opt_test)
else
  report_apps
end

    
    end
    
            self.description = <<-DESC
          Remove the cache for a given pod, or clear the cache completely.
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
            TEMPLATE_REPO = 'https://github.com/CocoaPods/pod-template.git'.freeze
        TEMPLATE_INFO_URL = 'https://github.com/CocoaPods/pod-template'.freeze
        CREATE_NEW_POD_INFO_URL = 'http://guides.cocoapods.org/making/making-a-cocoapod'.freeze
    
          def snapshot
        agent.metric.collector.snapshot_metric
      end