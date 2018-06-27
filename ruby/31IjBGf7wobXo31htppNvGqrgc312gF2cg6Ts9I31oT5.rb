
        
                def test_url_memory_db_for_sqlite3
          spec = resolve 'sqlite3::memory:'
          assert_equal(':memory:', spec['database'])
        end
    
          def on_delete
        options[:on_delete]
      end
    
            class Listener < SubscriberMap
          def initialize(adapter, event_loop)
            super()
    
      def test_clear_active_record_connections_adapter_still_works
    server = ActionCable::Server::Base.new
    server.config.cable = cable_config.with_indifferent_access
    server.config.logger = Logger.new(StringIO.new).tap { |l| l.level = Logger::UNKNOWN }
    
          env = Rack::MockRequest.env_for '/test', 'HTTP_CONNECTION' => 'upgrade', 'HTTP_UPGRADE' => 'websocket',
        'HTTP_HOST' => 'localhost', 'HTTP_ORIGIN' => 'http://rubyonrails.com'
    
    require 'test_helper'
require 'stubs/test_server'
    
          broadcasting = 'test_queue'
      message = { body: 'test message' }
      server.broadcast(broadcasting, message)
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
    class Devise::PasswordsController < DeviseController
  prepend_before_action :require_no_authentication
  # Render the #edit only if coming from a reset password email link
  append_before_action :assert_reset_token_passed, only: :edit
    
      def translation_scope
    'devise.sessions'
  end
    
          @path = (options[:path] || name).to_s
      @path_prefix = options[:path_prefix]
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
              fd.write(res)
        end
      end
      break
    rescue ::Timeout::Error
      $stderr.puts '#{prefix}#{site} timed out'
    rescue ::Interrupt
      raise $!
    rescue ::Exception => e
      $stderr.puts '#{prefix}#{site} #{e.class} #{e}'
    end
  end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 21 and pkt.tcp_dport != 21)
    s = find_session((pkt.tcp_sport == 21) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'ftp'
    
          case matched
        when :ok
          # Last command was successful, in addition most servers transmit a banner with the first +OK
          case s[:last]
            when nil
              # Its the first +OK must include the banner, worst case its just +OK
              s[:info]  = matches
              s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              report_service(s)
    
    # Sniffer class for GET URL's
class SnifferURL < BaseProtocolParser
  def register_sigs
    self.sigs = {
      :get		=> /^GET\s+([^\n]+)\s+HTTP\/\d\.\d/i,
      :webhost	=> /^HOST\:\s+([^\n\r]+)/i,
    }
  end
    
    puts '* Initializing Meterpreter'
    
    success = clsJavaCompile._invoke('CompileFromMemory','[Ljava.lang.String;[Ljava.lang.String;[Ljava.lang.String;', classNames, codez, compileOpts)
    
    signer._invoke('JarSignerMSF','[Ljava.lang.String;',jarsignerOpts)
    
    desc 'Runs all tests in all Spree engines'
task test: :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rspec'
    end
  end
end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end