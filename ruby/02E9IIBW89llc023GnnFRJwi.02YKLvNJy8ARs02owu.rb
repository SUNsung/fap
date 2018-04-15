
        
          def redirect_with_header_break
    redirect_to '/lol\r\nwat'
  end
    
          def clear_all # :nodoc:
        reset_all
        current_instances.clear
      end
    
          test 'when :only is specified, a before action is triggered on that action' do
        @controller.process(:index)
        assert_equal 'Hello, World', @controller.response_body
      end
    
    require 'abstract_unit'
    
        def index
      self.response_body = 'Hello World'
    end
  end
    
      private
    def with_params_parsers(parsers = {})
      old_session = @integration_session
      original_parsers = ActionDispatch::Request.parameter_parsers
      ActionDispatch::Request.parameter_parsers = original_parsers.merge parsers
      reset!
      yield
    ensure
      ActionDispatch::Request.parameter_parsers = original_parsers
      @integration_session = old_session
    end
    
    require 'active_support/log_subscriber'
    
    module ActionMailer
  # Provides helper methods for ActionMailer::Base that can be used for easily
  # formatting messages, accessing mailer or message instances, and the
  # attachments list.
  module MailHelper
    # Take the text and format it, indented two spaces for each line, and
    # wrapped at 72 columns:
    #
    #   text = <<-TEXT
    #     This is
    #     the      paragraph.
    #
    #     * item1 * item2
    #   TEXT
    #
    #   block_format text
    #   # => '  This is the paragraph.\n\n  * item1\n  * item2\n'
    def block_format(text)
      formatted = text.split(/\n\r?\n/).collect { |paragraph|
        format_paragraph(paragraph)
      }.join('\n\n')
    
          private
        def method_missing(method_name, *args)
          if @mailer.action_methods.include?(method_name.to_s)
            ActionMailer::Parameterized::MessageDelivery.new(@mailer, method_name, @params, *args)
          else
            super
          end
        end
    
    class AssertSelectEmailTest < ActionMailer::TestCase
  class AssertSelectMailer < ActionMailer::Base
    def test(html)
      mail body: html, content_type: 'text/html',
        subject: 'Test e-mail', from: 'test@test.host', to: 'test <test@test.host>'
    end
  end
    
    end

    
      def regular?
    !staff?
  end