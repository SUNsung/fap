
        
        module Devise
  module Controllers
    # Provide sign in and sign out functionality.
    # Included by default in all controllers.
    module SignInOut
      # Return true if the given scope is signed in session. If no scope given, return
      # true if any scope is signed in. This will run authentication hooks, which may
      # cause exceptions to be thrown from this method; if you simply want to check
      # if a scope has already previously been authenticated without running
      # authentication hooks, you can directly call `warden.authenticated?(scope: scope)`
      def signed_in?(scope=nil)
        [scope || Devise.mappings.keys].flatten.any? do |_scope|
          warden.authenticate?(scope: _scope)
        end
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
              if recoverable.persisted?
            if recoverable.reset_password_period_valid?
              recoverable.reset_password(attributes[:password], attributes[:password_confirmation])
            else
              recoverable.errors.add(:reset_password_token, :expired)
            end
          end
    
    require 'devise/strategies/rememberable'
require 'devise/hooks/rememberable'
require 'devise/hooks/forgetable'
    
    # This bin wrapper runs the `pod` command in a OS X sandbox. The reason for this
# is to ensure that people can’t use malicious code from pod specifications.
#
# It does this by creating a ‘seatbelt’ profile on the fly and executing the
# given command through `/usr/bin/sandbox-exec`. This profile format is an
# undocumented format, which uses TinyScheme to implement its DSL.
#
# Even though it uses a undocumented format, it’s actually very self-explanatory.
# Because we use a whitelist approach, `(deny default)`, any action that is
# denied is logged to `/var/log/system.log`. So tailing that should provide
# enough information on steps that need to be take to get something to work.
#
# For more information see:
#
# * https://github.com/CocoaPods/CocoaPods/issues/939
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Slides.pdf
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Paper.pdf
# * https://github.com/s7ephen/OSX-Sandbox--Seatbelt--Profiles
# * `$ man sandbox-exec`
# * `$ ls /usr/share/sandbox`
    
            def print_version
          output_pipe.puts 'version: '#{Pod::VERSION}''
        end
    
            # Run the command
        #
        # @todo Part of this logic needs to be ported to cocoapods-core so web
        #       services can validate the repo.
        #
        # @todo add UI.print and enable print statements again.
        #
        def run
          sources = if @name
                      if File.exist?(@name)
                        [Source.new(Pathname(@name))]
                      else
                        config.sources_manager.sources([@name])
                      end
                    else
                      config.sources_manager.all
                    end
    
            def run
          query = @use_regex ? @query : Regexp.escape(@query)
          filepath = if @show_all
                       specs = get_path_of_spec(query, @show_all).split(/\n/)
                       index = UI.choose_from_array(specs, 'Which spec would you like to print [1-#{specs.count}]? ')
                       specs[index]
                     else
                       get_path_of_spec(query)
                     end