
        
          # Setting the :extname option will control what extension (if any) is appended to the url for assets
  def test_javascript_include_tag
    assert_dom_equal '<script src='/foo.js'></script>',  javascript_include_tag('/foo')
    assert_dom_equal '<script src='/foo'></script>',     javascript_include_tag('/foo', extname: false)
    assert_dom_equal '<script src='/foo.bar'></script>', javascript_include_tag('/foo', extname: '.bar')
  end
    
          # The instance of ActionView::Base that is used by +render+.
      def view
        @view ||= begin
          view = @controller.view_context
          view.singleton_class.include(_helpers)
          view.extend(Locals)
          view.rendered_views = rendered_views
          view.output_buffer = output_buffer
          view
        end
      end
    
              # Bubbled up from the adapter require. Prefix the exception message
          # with some guidance about how to address it and reraise.
          else
            raise e.class, 'Error loading the '#{adapter}' Action Cable pubsub adapter. Missing a gem it depends on? #{e.message}', e.backtrace
          end
        end
    
    class HelperTest < ActiveSupport::TestCase
  class TestController < ActionController::Base
    attr_accessor :delegate_attr
    def delegate_method() end
  end
    
    require 'abstract_unit'
    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
      class AssertMultipartSelectMailer < ActionMailer::Base
    def test(options)
      mail subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>' do |format|
        format.text { render plain: options[:text] }
        format.html { render plain: options[:html] }
      end
    end
  end
    
    class TestController < ActionController::Base
  def send_mail
    email = I18nTestMailer.mail_with_i18n_subject('test@localhost').deliver_now
    render plain: 'Mail sent - Subject: #{email.subject}'
  end
end
    
      def test_receive_is_notified
    fixture = File.read(File.expand_path('fixtures/raw_email', __dir__))
    TestMailer.receive(fixture)
    wait
    assert_equal(1, @logger.logged(:info).size)
    assert_match(/Received mail/, @logger.logged(:info).first)
    assert_equal(1, @logger.logged(:debug).size)
    assert_match(/Jamis/, @logger.logged(:debug).first)
  end
end

    
      def use_format_paragraph_with_long_first_word
    @text = 'Antidisestablishmentarianism is very long.'
    
    BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
    # All Devise controllers are inherited from here.
class DeviseController < Devise.parent_controller.constantize
  include Devise::Controllers::ScopedViews
    
            # Registers a SIGINT handler. This typically is called from {busy}.
        # Callbacks are only registered once, so calling this multiple times
        # with the same callback has no consequence.
        def register(sig_callback)
          @@mutex.synchronize do
            registered << sig_callback
            registered.uniq!
    
                breakable = false
            if e.is_a?(EOFError)
              # An `EOFError` means this IO object is done!
              breakable = true
            elsif defined?(::IO::WaitReadable) && e.is_a?(::IO::WaitReadable)
              # IO::WaitReadable is only available on Ruby 1.9+
    
          # This inserts a block with the given key and value.
      #
      # @param [String] key
      # @param [String] value
      def insert(key, value)
        # Insert the new block into the value
        new_block = <<BLOCK
# VAGRANT-BEGIN: #{key}
#{value.strip}
# VAGRANT-END: #{key}
BLOCK
    
              @env.action_runner.run(Vagrant::Action.action_box_remove, {
            box_name:     argv[0],
            box_provider: options[:provider],
            box_version:  options[:version],
            force_confirm_box_remove: options[:force],
            box_remove_all_versions: options[:all],
          })
    
      def create_gist(files, description)
    url = 'https://api.github.com/gists'
    data = { 'public' => true, 'files' => files, 'description' => description }
    scopes = GitHub::CREATE_GIST_SCOPES
    GitHub.open_api(url, data: data, scopes: scopes)['html_url']
  end
    
    task default: :test