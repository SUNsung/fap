
        
              module ClassMethods
        def tests(helper_class)
          case helper_class
          when String, Symbol
            self.helper_class = '#{helper_class.to_s.underscore}_helper'.camelize.safe_constantize
          when Module
            self.helper_class = helper_class
          end
        end
    
          # Returns constant of subscription adapter specified in config/cable.yml.
      # If the adapter cannot be found, this will default to the Redis adapter.
      # Also makes sure proper dependencies are required.
      def pubsub_adapter
        adapter = (cable.fetch('adapter') { 'redis' })
    
    module ActiveRecord
  module ConnectionAdapters
    class ConnectionSpecification
      class ResolverTest < ActiveRecord::TestCase
        def resolve(spec, config = {})
          Resolver.new(config).resolve(spec)
        end
    
        def master_helper_methods
      @controller_class._helpers.instance_methods
    end
    
    require 'abstract_unit'
    
    module ActionMailer
  # The <tt>ActionMailer::DeliveryJob</tt> class is used when you
  # want to send emails outside of the request-response cycle.
  #
  # Exceptions are rescued and handled by the mailer class.
  class DeliveryJob < ActiveJob::Base # :nodoc:
    queue_as { ActionMailer::Base.deliver_later_queue_name }
    
          indentation = ' ' * indent
      sentences.map! { |sentence|
        '#{indentation}#{sentence.join(' ')}'
      }.join '\n'
    end
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
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
          header_info.each do | var, value|
        if request.respond_to?(:set_header)
          request.set_header(var, value)
        else
          request.env[var]  = value
        end
      end
    
    module Metasploit
  module Framework
    class Application < Rails::Application
      include Metasploit::Framework::CommonEngine
    
      def parse(pkt)
    # We want to return immediantly if	we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 80 and pkt.tcp_dport != 80)
    s = find_session((pkt.tcp_sport == 80) ? get_session_src(pkt) : get_session_dst(pkt))
    
    
# extract label addresses
addrs = {}
dtrans.each_line { |ln|
	if ln =~ /;[^ ].*:/
		parts = ln.split(' ')
		label = parts[1]
		label = label.slice(1,label.index(':')-1)
		addr = parts[0].split(':')[1].to_i(16)
		#puts '%s => %x' % [label, addr]
		one = { label => addr }
		addrs.merge!(one)
	end
}
#puts addrs.inspect
    
    p meterp.sys.config.sysinfo
    
      def get_result
    result
  end
end