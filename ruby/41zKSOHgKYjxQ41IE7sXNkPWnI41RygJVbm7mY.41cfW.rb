
        
            include Behavior
  end
end

    
            # Expands each key in @configurations hash into fully resolved hash
        def resolve_all
          config = configurations.dup
    
          test 'after_action works with procs' do
        @controller.process(:index)
        assert_equal 'Goodbye', @controller.instance_variable_get('@second')
      end
    end
    
      class BareTest < ActiveSupport::TestCase
    test 'response body is a Rack-compatible response' do
      status, headers, body = BareController.action(:index).call(Rack::MockRequest.env_for('/'))
      assert_equal 200, status
      string = ''.dup
    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
        keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      # True if a {Formula} is being built in 32-bit/x86 mode.
  # This is needed for some use-cases though we prefer to build Universal
  # when a 32-bit version is needed.
  def build_32_bit?
    include?('32-bit') && option_defined?('32-bit')
  end
    
    unless invalids.empty?
  puts '\n\nFailed links:'
  invalids.each do |link|
    puts '- #{link}'
  end
  puts 'Done with errors.'
  exit(1)
end
    
                # Register the handler if this is our first callback.
            Signal.trap('INT') { fire_callbacks } if registered.length == 1
          end
        end
    
    ###
### dependencies
###
    
    
  it 'should allow changing the nosniff-mode off' do
    mock_app do
      use Rack::Protection::XSSHeader, :nosniff => false
      run DummyApp
    end
    
            attr_reader :name, :declaration_node, :scope,
                    :assignments, :references, :captured_by_block
        alias captured_by_block? captured_by_block
    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies unnecessary use of a regex where `String#end_with?`
      # would suffice.
      #
      # @example
      #   # bad
      #   'abc' =~ /bc\Z/
      #   'abc'.match(/bc\Z/)
      #
      #   # good
      #   'abc'.end_with?('bc')
      class EndWith < Cop
        MSG = 'Use `String#end_with?` instead of a regex match anchored to ' \
              'the end of the string.'.freeze
        SINGLE_QUOTE = '''.freeze
    
              new_source =
            node.receiver.source + ' =~ ' + node.first_argument.source
    
    module RuboCop
  module Cop
    module Performance
      # This cop identifies unnecessary use of a regex where
      # `String#start_with?` would suffice.
      #
      # @example
      #   # bad
      #   'abc' =~ /\Aab/
      #   'abc'.match(/\Aab/)
      #
      #   # good
      #   'abc'.start_with?('ab')
      class StartWith < Cop
        MSG = 'Use `String#start_with?` instead of a regex match anchored to ' \
              'the beginning of the string.'.freeze
        SINGLE_QUOTE = '''.freeze