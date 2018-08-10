
        
          attr_accessor :output_buffer
  attr_reader :request
    
            def helper_method(*methods)
          # Almost a duplicate from ActionController::Helpers
          methods.flatten.each do |method|
            _helpers.module_eval <<-end_eval, __FILE__, __LINE__ + 1
              def #{method}(*args, &block)                    # def current_user(*args, &block)
                _test_case.send(%(#{method}), *args, &block)  #   _test_case.send(%(current_user), *args, &block)
              end                                             # end
            end_eval
          end
        end
    
                    on.unsubscribe do |chan, count|
                  if count == 0
                    @subscription_lock.synchronize do
                      @raw_client = nil
                    end
                  end
                end
              end
            end
          end
    
            def test_url_host_no_db
          spec = resolve 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  => 'abstract',
            'host'     => 'foo',
            'encoding' => 'utf8' }, spec)
        end
    
    require 'active_record/relation/predicate_builder/array_handler'
require 'active_record/relation/predicate_builder/base_handler'
require 'active_record/relation/predicate_builder/basic_object_handler'
require 'active_record/relation/predicate_builder/range_handler'
require 'active_record/relation/predicate_builder/relation_handler'
    
    class RestrictedWithErrorFirm < Company
  has_one :account, -> { order('id') }, foreign_key: 'firm_id', dependent: :restrict_with_error
  has_many :companies, -> { order('id') }, foreign_key: 'client_of', dependent: :restrict_with_error
end
    
      test 'broadcasting_for with an array' do
    assert_equal 'Room#1-Campfire:Room#2-Campfire', ChatChannel.broadcasting_for([ Room.new(1), Room.new(2) ])
  end
    
              wait_for_async
    
        def read_messages(expected_size = 0)
      list = []
      loop do
        if @has_messages.try_acquire(1, list.size < expected_size ? WAIT_WHEN_EXPECTING_EVENT : WAIT_WHEN_NOT_EXPECTING_EVENT)
          msg = @messages.pop(true)
          raise msg if msg.is_a?(Exception)
    
      private
    def open_connection(server = nil)
      server ||= TestServer.new
    
      private
    def open_connection
      env = Rack::MockRequest.env_for '/test',
        'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket',
        'HTTP_HOST' => 'localhost', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
      env['rack.hijack'] = -> { env['rack.hijack_io'] = StringIO.new }
    
          assert_called(channel, :unsubscribe_from_channel) do
        @subscriptions.execute_command 'command' => 'unsubscribe', 'identifier' => @chat_identifier
      end
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        version 'Neko' do
      self.base_url = 'https://api.haxe.org/neko/'
    end
    
    module Docs
  class URL < URI::Generic
    PARSER = URI::Parser.new
    
            doc
      end
    end
  end
end

    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
    (allow file-read-metadata)
(allow file-read*
  ; This is currenly only added because using `xcodebuild` to build a resource
  ; bundle target starts a FSEvents stream on `/`. No idea why that would be
  ; needed, but for now it doesn’t seem like a real problem.
  (literal '/')
  (regex
    ; TODO see if we can restrict this more, but it's going to be hard
    #'^/Users/[^.]+/*'
    ;#'^/Users/[^.]+/.netrc'
    ;#'^/Users/[^.]+/.gemrc'
    ;#'^/Users/[^.]+/.gem/*'
    ;#'^/Users/[^.]+/Library/.*'
    #'^/Library/*'
    #'^/System/Library/*'
    #'^/usr/lib/*'
    #'^/usr/share/*'
    #'^/private/*'
    #'^/dev/*'
    #'^<%= ruby_prefix %>'
    #'^<%= pod_prefix %>'
    #'^<%= xcode_app_path %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
<% prefixes.each do |prefix| %>
    #'^<%= prefix %>/*'
<% end %>
  )
)
    
            def execute_repl_command(repl_command)
          unless repl_command == '\n'
            repl_commands = repl_command.split
            subcommand = repl_commands.shift.capitalize
            arguments = repl_commands
            subcommand_class = Pod::Command::IPC.const_get(subcommand)
            subcommand_class.new(CLAide::ARGV.new(arguments)).run
            signal_end_of_output
          end
        end
      end
    end
  end
end

    
          #-----------------------------------------------------------------------#
    end
  end
end

    
            self.arguments = [
          CLAide::Argument.new(%w(NAME DIRECTORY), false),
        ]