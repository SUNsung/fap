
        
        # Test if processing content string without any Liquid constructs, via Liquid,
# is slower than checking whether constructs exist ( using `String#include?` )
# and return-ing the 'plaintext' content string as is..
#
# Ref: https://github.com/jekyll/jekyll/pull/6735
    
    require 'erb'
    
    module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
      def fixopt(f)
    path = if f.linked_keg.directory? && f.linked_keg.symlink?
      f.linked_keg.resolved_path
    elsif f.prefix.directory?
      f.prefix
    elsif (kids = f.rack.children).size == 1 && kids.first.directory?
      kids.first
    else
      raise
    end
    Keg.new(path).optlink
  rescue StandardError
    raise '#{f.opt_prefix} not present or broken\nPlease reinstall #{f.full_name}. Sorry :('
  end
end
    
        @web_subscription = ::Web::PushSubscription.create!(
      endpoint: subscription_params[:endpoint],
      key_p256dh: subscription_params[:keys][:p256dh],
      key_auth: subscription_params[:keys][:auth],
      data: data_params,
      user_id: current_user.id,
      access_token_id: doorkeeper_token.id
    )
    
      private
    
          def use_identicon
        @wiki.user_icons == 'identicon'
      end
    
    module Gollum
end
Gollum::GIT_ADAPTER = ENV['GIT_ADAPTER'] if ENV['GIT_ADAPTER']
    
        @wiki.clear_cache
    assert_nil @wiki.paged('H', 'G')
    page_2 = @wiki.paged('C', 'G/K')
    assert_equal 'INITIAL\n\nSPAM2\n', page_2.raw_data
    assert_equal 'def', page_2.version.message
    assert_not_equal page_1.version.sha, page_2.version.sha
  end
    
    
    
    desc 'Open an irb session preloaded with this library'
task :console do
  sh 'irb -rubygems -r ./lib/#{name}.rb'
end
    
    exec         = {}
options      = {
  :port => 4567,
  :bind => '0.0.0.0',
}
wiki_options = {
  :live_preview  => false,
  :allow_uploads => false,
  :allow_editing => true,
}
    
      class DuplicatePageError < Error
    attr_accessor :dir
    attr_accessor :existing_path
    attr_accessor :attempted_path
    
    iter.times do
  arr = Array.new(count) do
    []
  end
  count.times do |idx|
    arr[idx][0] = idx
  end
  Sidekiq::Client.push_bulk('class' => LoadWorker, 'args' => arr)
end
Sidekiq.logger.error 'Created #{count*iter} jobs'
    
        execute 'restart-sidekiq' do 
      command %Q{ 
        echo 'sleep 20 && monit -g #{app}_sidekiq restart all' | at now 
      }
    end
  end 
end

    
          def initialize
        @entries = []
        yield self if block_given?
      end
    
          def __set_test_mode(mode)
        if block_given?
          current_mode = self.__test_mode
          begin
            self.__test_mode = mode
            yield
          ensure
            self.__test_mode = current_mode
          end
        else
          self.__test_mode = mode
        end
      end